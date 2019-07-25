#include<iostream>
using namespace std;
int main() {
    string s;
    cin>>s;
    string res;
    int i=0;
    for(;i<s.length()-1;i++){
        int ascii = s[i+1] - s[i];
        res += s[i];
        res += to_string(ascii);
    }
    res += s[i];
    cout<<res<<endl;
	return 0;
}