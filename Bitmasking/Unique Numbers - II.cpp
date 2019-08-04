#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    int XOR = 0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        XOR ^= arr[i];
    }
    int i = 0;
    while(XOR > 0){
        if(XOR & 1) break;
        i++;
        XOR >>= 1;
    }

    int mask = (1<<i);
    int firstNo = 0;
    for(int i=0;i<n;i++){
        if(arr[i] & mask) firstNo ^= arr[i];
    }
    int secondNo = XOR ^ firstNo;
    cout<<secondNo<<endl;
    cout<<firstNo<<endl;
	return 0;
}