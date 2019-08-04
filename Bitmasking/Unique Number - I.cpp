#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    int uniqueNumber = 0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        uniqueNumber ^= arr[i];
    }
    cout<<uniqueNumber<<endl;
	return 0;
}