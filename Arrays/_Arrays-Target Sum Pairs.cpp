#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int target;
    cin>>target;
    sort(arr,arr+n);
    int l = 0 , r = n-1;
    while(l <  r){
        if(arr[l] + arr[r] == target){
            cout<<arr[l]<<" and "<<arr[r]<<endl;
            l++;
            r--;
        }
        else if(arr[l] + arr[r] > target) r--;
        else l++;
    }
	return 0;
}