#include<iostream>
using namespace std;

int FindIndex(int a[],int n,int key){
    int s = 0, e = n-1;
    while(s <= e){
        int mid = (s+e)/2;
        if(a[mid] == key) return mid;
        else if(a[s] <= a[mid]){
            if(a[s]<=key && a[mid] > key) e = mid - 1;
            else s = mid + 1;
        }
        else{
            if(a[mid]<key && a[e]>=key) s = mid + 1;
            else e = mid - 1;
        }
    }
    return -1;
}

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int target;
    cin>>target;
    cout<<FindIndex(a,n,target)<<endl;
	return 0;
}