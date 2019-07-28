#include<iostream>
using namespace std;

void SortingLinearTime(int *arr,int n){
    int lo = 0,mid =0,hi = n-1;
    while(mid < hi){
        if(arr[mid] == 1) mid++;
        else if(arr[mid] == 2){
            swap(arr[mid],arr[hi]);
            hi--;
        }
        else{
            swap(arr[mid],arr[lo]);
            lo++;
            mid++;
        }
    }
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++) cin>>arr[i];
    SortingLinearTime(arr,n);
    for(int i=0;i<n;i++) cout<<arr[i]<<endl;
	return 0;
}