#include<iostream>
using namespace std;
int main() {
    string s;
    cin>>s;
    string res;
    int count = 1;
    int i=1;
    for(;i<s.length();i++){
        if(s[i] == s[i-1]) count++;
        else{
            res += s[i-1];
            res += to_string(count);   
            count = 1;
        }
    }

    res += s[i-1];
    res += to_string(count);

    cout<<res<<endl;
	return 0;
}