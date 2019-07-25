#include<iostream>
using namespace std;
int main() {
	int n,m,k,s;
	cin>>n>>m>>k>>s;
	char arr[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
		}
	}

	int f;
	for(int i=0;i<n;i++){
		f = 0;
		for(int j =0;j<m;j++){
			if(s < k){
				f = 1;
				break;
			}
			if(arr[i][j] == '.' || arr[i][j] == '*'){
				if(arr[i][j] == '*') s += 5;
				if(arr[i][j] == '.') s -= 2;
				if(j != n-1) s -= 1;
			}
			if(arr[i][j] == '#') break;
		}
		if(f == 1) break;
	}
	if(f == 0){
		cout<<"Yes"<<endl;
		cout<<s<<endl;
	}
	else cout<<"No"<<endl;
	return 0;
}