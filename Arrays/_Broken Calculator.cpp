#include<iostream>
#define N 100000
using namespace std;
int main(){
    int n;
    cin>>n;
    int res[N] = {1};
    res[0] = 1;
    int res_size = 1;
    for(int i = 1;i<=n;i++){
        int carry = 0;
        int j =0;
        for(;j<res_size;j++){
            int prod = res[j] * i + carry;
            res[j] = prod % 10;
            carry = prod / 10;
        }
        while(carry != 0){
            res[j] = carry % 10;
            res_size++,j++;
            carry = carry / 10;
        }
    }
    for(int i = res_size - 1;i >=0;i--){
        cout<<res[i];
    }
    return 0;
}