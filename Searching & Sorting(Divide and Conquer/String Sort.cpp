#include<iostream>
#include<algorithm>
using namespace std;

bool comparator(string a,string b){
    if(a.find(b) != string::npos){
        return a.length() > b.length();
    }else{
        return a < b;
    }
}

int main() {
    int n;
    cin>>n;
    string arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr,arr+n,comparator);
    for(int i=0;i<n;i++) cout<<arr[i]<<endl;
	return 0;
}