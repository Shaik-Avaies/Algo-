#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i =0;i<n;i++){
        for(int j =i+1;j<n;j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    int columnCount = 0;
    while(columnCount < n){
        int i = 0;
        int j = n-1;
        while(i < j){
            int temp = arr[i][columnCount];
            arr[i][columnCount] = arr[j][columnCount];
            arr[j][columnCount] = temp;
            i++,j--;
        }
        columnCount++;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

	return 0;
}