#include<iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        int current_sum = 0;
        int maximum_sum = 0;
        for(int i=0;i<n;i++){
            current_sum += arr[i];
            if(current_sum < 0) current_sum = 0;
            if(current_sum > maximum_sum) maximum_sum = current_sum;
        }
        cout<<maximum_sum<<endl;
    }
	return 0;
}