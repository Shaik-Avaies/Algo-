#include<iostream>
using namespace std;

int perfectness(string s,int k,int n,char ch){
	int l = 0, r = 0;
	int count = 0;
	int maxlen = 0;
	while(r < n){
		if(s[r] != ch) count++;
		if(count > k){
			if(s[l] != ch) {
				--count;
			}
			l++;
		}
		maxlen = max(maxlen, r-l+1);
		r++;
	}
	return maxlen;
}

int main() {
	int k;
	cin>>k;
	string s;
	cin>>s;
	int a = perfectness(s,k,s.length(),'a');
	int b = perfectness(s,k,s.length(),'b');
	if(a > b) cout<<a<<endl;
	else cout<<b<<endl;
	return 0;
}