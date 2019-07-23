#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int m;
    cin>>m;
    int b[m];
    for(int i=0;i<m;i++) cin>>b[i];


    reverse(a,a+n);
    reverse(b,b+m);

    int i =0;
    int res[1005];
    int carry = 0;

    while(i <= n-1 && i <= m-1){
        int sum = a[i] + b[i] + carry;
        res[i] = sum % 10;
        if(res[i] == 0) res[i] = -1;
        carry = sum / 10;
        i++;
    }

     while(i <= n-1){
        int sum = a[i] + carry;
        res[i] = sum % 10;
        if(res[i] == 0) res[i] = -1;
        carry = sum / 10;
        i++;
    }

     while(i <= m-1){
        int sum = b[i] + carry;
        res[i] = sum % 10;
        if(res[i] == 0) res[i] = -1;
        carry = sum / 10;
        i++;
    }

    while(carry != 0){
        res[i] = carry % 10;
        if(res[i] == 0) res[i] = -1;
        carry = carry / 10;
        i++;
    }

    int count = 0;
    for(int i =0;res[i] !='\0';i++) count++;

    reverse(res,res+count);

    for(int i =0;i<count;i++){
        if(res[i] == -1) res[i] = 0;
        cout<<res[i]<<", ";
    }
    cout<<"END";
}