#include<iostream>
using namespace std;

int upperBound(int arr[],int start,int end,int key){
    int final_ans = -1;
    while(start <= end){
        int mid = (start + end)/2;
        if(arr[mid] == key){
            final_ans = mid;
            start = mid + 1;
        } 
        else if(arr[mid] > key) end = mid - 1;
        else start = mid + 1;
    }
    return final_ans;
}

int lowerBound(int arr[],int start,int end,int key){
    int final_ans = -1;
    while(start <= end){
        int mid = (start + end) / 2;
        if(arr[mid] == key){
            final_ans = mid;
            end = mid - 1;
        }
        else if(arr[mid] > key) end = mid - 1;
        else start = mid + 1;
    }
    return final_ans;
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int t;
    cin>>t;
    while(t--){
        int num;
        cin>>num;
        cout<<lowerBound(arr,0,n,num)<<" "<<upperBound(arr,0,n,num)<<endl;
    }
	return 0;
}