#include<iostream>
#include<algorithm>
using namespace std;

bool isValid(int a[],int n,int c,int mid){
    int cows = 1;
    int pos = a[0];
    for(int i=1;i<n;i++){
        if(a[i] - pos >= mid){
            pos = a[i];
            cows++;
            if(cows == c) return true; 
        }
    }
    return false;
}

int main(){
    int n,c;
    cin>>n>>c;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    int s = 0;
    int e = *max_element(a,a+n);
    int final_ans = s;
    while(s <= e){
        int mid = (s+e)/2;
        if(isValid(a,n,c,mid)){
            final_ans = mid;
            s = mid + 1;
        }else{
            e = mid - 1;
        }
    }
    cout<<final_ans<<endl;
}