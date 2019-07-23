#include<iostream>
#include<algorithm>
using namespace std;

bool comparator(string a,string b){
    string ab = a.append(b);
    string ba = b.append(a);
    if(ab.compare(ba) > 0) return true;
    return false;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s[n];
        for(int i =0;i<n;i++) cin>>s[i];
        sort(s,s+n,comparator);
        string result = "";
        for(int i =0;i<n;i++) result += s[i];
        cout<<result<<endl;
    }
	return 0;
}