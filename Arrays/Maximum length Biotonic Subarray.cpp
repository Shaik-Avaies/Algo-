#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        int increment[n];
        increment[0] = 1;
        for(int i=1;i<n;i++){
            if(arr[i-1] < arr[i]) increment[i] = increment[i-1] + 1;
            else increment[i] = 1;
        }
        int decremnt[n];
        decremnt[n-1] = 1;
        for(int i=n-2;i>=0;i--){
            if(arr[i+1] < arr[i]) decremnt[i] = decremnt[i+1] + 1;
            else decremnt[i] = 1;
        }
        for(int i =0;i<n;i++) arr[i] = increment[i] + decremnt[i] - 1;
        cout<<*max_element(arr,arr+n)<<endl;
    }
	return 0;
}