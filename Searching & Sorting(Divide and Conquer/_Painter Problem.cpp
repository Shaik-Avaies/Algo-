#include<iostream>
#define ll long long int
using namespace std;
bool isValid(ll L[],ll n,ll k,ll mid){
    ll painter = 1;
    ll time = 0;
    for(int i=0;i<n;i++){
        if(time + L[i] > mid){
            time = L[i];
            painter++;
            if(painter > k){
                return false;
            }
        }else{
            time += L[i];
        }
    }
    return true;
}
int main() {
	ll n;
    cin>>n; //no of borads
    ll k;
    cin>>k; //Number of painters
    ll T;
    cin>>T;  //Time taken by painter to paint 1 unit of board
    ll L[n];  //A List which will represent length of each board
    for(int i=0;i<n;i++){
        cin>>L[i];
    }
    for(int i=0;i<n;i++){
        L[i] = L[i] * T;
    }
    ll s = L[0];
    ll total_sum = 0;
    for(int i=0;i<n;i++){
        s = max(L[i],s);
        total_sum += L[i];
    }
    ll e = total_sum;
    ll final_ans = s;
    while(s <= e){
        ll mid = (s+e)/2;
        if(isValid(L,n,k,mid)){
            final_ans = mid;
            e = mid -1;
        }else{
            s = mid + 1;
        }
    }
    cout<<final_ans%10000003<<endl;
}