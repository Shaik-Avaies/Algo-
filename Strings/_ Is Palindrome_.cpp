#include<iostream>
using namespace std;

bool isPalimbrome(int arr[],int n){
    int i = 0, j = n-1;
    while(i < j){
        if(arr[i] == arr[j]){
            i++;
            j--;
        }else{
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++) cin>>arr[i];
    if(isPalimbrome(arr,n)) cout<<"true"<<endl;
    else cout<<"false"<<endl;
	return 0;
}