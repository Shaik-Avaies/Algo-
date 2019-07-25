#include<iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        string a;
        string b;
        cin>>a>>b;
        string res;
        for(int i=0;i<a.length();i++){
            if(a[i] == b[i]) res += '0';
            else res += '1';
        }
        cout<<res<<endl;
    }
	return 0;
}