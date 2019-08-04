#include<iostream>
using namespace std;
int main() {
    int a,b;
    cin>>a>>b;
    int ans = 1;
    int pp = a;
    while(b > 0){
        if(b & 1) ans *= pp;
        pp *= pp;
        b = (b>>1);
    }
    cout<<ans<<endl;
	return 0;
}