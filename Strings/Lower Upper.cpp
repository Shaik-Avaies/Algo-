#include<iostream>
using namespace std;
int main() {
	char ch;
	cin>>ch;
	if(isalpha(ch)){
		if(isupper(ch)) cout<<"UPPERCASE"<<endl;
		else cout<<"lowercase"<<endl;
	}else{
		cout<<"Invalid"<<endl;
	}
	return 0;
}