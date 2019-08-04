#include<iostream>
using namespace std;

int CountSetBits(int n){
    int count = 0;
    while(n>0){
        if(n & 1) count++;
        n >>= 1;
    }
    return count;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<CountSetBits(n)<<endl;
    }
	return 0;
}