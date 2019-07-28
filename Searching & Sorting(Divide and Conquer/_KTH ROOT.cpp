#include<iostream>
#include<math.h>
#define ll long long
using namespace std;

bool isValid(ll n,ll k,ll mid){
    if(pow(mid,k) <= n) return true;
    else return false;
}

int main() {
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        ll s = 1, e = n;
        ll final_ans = 0;
        while(s <= e){
            int mid = (s+e)/2;
            if(isValid(n,k,mid)){
                final_ans = mid;
                s = mid + 1;
            }   
            else e = mid - 1;
        }
        cout<<final_ans<<endl;
    }
	return 0;
}