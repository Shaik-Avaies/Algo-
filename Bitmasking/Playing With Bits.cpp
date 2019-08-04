#include<iostream>
using namespace std;

int NoofSetBits(int n){
	int count = 0;
	while(n>0){
		n = (n & n-1);
		count++;
	}
	return count;
}

int main() {
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		int total_set_bits = 0;
		for(int i=a;i<=b;i++){
			total_set_bits += NoofSetBits(i);
		}
		cout<<total_set_bits<<endl;
	}
	return 0;
}