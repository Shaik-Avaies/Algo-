#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int XOR = a ^ b;
    int mostSignificantBit = 0;
    while(XOR > 0){
        mostSignificantBit++;
        XOR >>= 1;
    }
    // cout<<mostSignificantBit<<endl;
    cout<< (1<<mostSignificantBit)-1 <<endl;
}