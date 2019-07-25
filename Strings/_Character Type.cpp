#include<iostream>
using namespace std;

char characterType(char ch){
    if(isalpha(ch)) {
        if(isupper(ch)) return 'U';
        else return 'L';
    }else{
        return 'I';
    }
}

int main() {
    char ch;
    cin>>ch;
    cout<<characterType(ch)<<endl;
	return 0;
}