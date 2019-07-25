#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
    int freq[26] = {0};
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        freq[s[i]-'a']++;
    }
    int max = *max_element(freq,freq+26);
    for(int i=0;i<26;i++){
        if(freq[i] == max) cout<< char(i + 'a')<<endl;
    }
	return 0;
}