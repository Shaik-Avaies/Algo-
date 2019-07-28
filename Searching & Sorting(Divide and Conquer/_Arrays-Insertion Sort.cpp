#include<iostream>
using namespace std;

void Insertion_sort(int *arr,int n){
    for(int i=1;i<n;i++){
        int no = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > no){
            arr[j+1] = arr[j];
            j--;
        }
        j++;
        arr[j] = no;
    }
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    Insertion_sort(arr,n);
    for(int i=0;i<n;i++) cout<<arr[i]<<endl;
	return 0;
}