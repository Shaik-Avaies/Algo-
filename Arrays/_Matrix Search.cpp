#include<iostream>
using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i =0;i<n;i++){
        for(int j =0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int key;
    cin>>key;
    int i = 0,j = m-1;
    while(arr[i][j] != key && i<n && j>=0){
        if(arr[i][j] < key) i++;
        else if(arr[i][j] > key) j--;
    }
    if(arr[i][j] == key) cout<<"1"<<endl;
    else cout<<"0"<<endl;
	return 0;
}