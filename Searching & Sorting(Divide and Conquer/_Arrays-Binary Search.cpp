#include<iostream>
using namespace std;

int BinarySearch(int arr[],int start,int end,int key){
    while(start <= end){
        int mid = (start + end) / 2;
        if(arr[mid] == key) return mid;
        if(arr[mid] > key) end = mid - 1;
        else start = mid + 1;
    }
    return -1;
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int m;
    cin>>m;
    int found = BinarySearch(arr,0,n-1,m);
    if(found != -1) cout<<found<<endl;
    else cout<<-1<<endl;
	return 0;
}