#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int max = *max_element(arr,arr+n);
    int count[max+1] = {0};
    for(int i=0;i<n;i++) count[arr[i]]++;
    for(int i=0;i<=max;i++){
        while(count[i]!=0){
            cout<<i<<" ";
            count[i]--;
        }
    }
	return 0;
}