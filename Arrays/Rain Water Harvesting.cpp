#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int left_max[n];
    left_max[0] = arr[0];
    for(int i=1;i<n;i++) left_max[i] = max(arr[i],left_max[i-1]);
    int right_max[n];
    right_max[n-1] = arr[n-1];
    for(int i=n-2;i>=0;i--) right_max[i] = max(arr[i],right_max[i+1]);
    int water_saved = 0;
    for(int i =0;i<n;i++) water_saved += min(left_max[i],right_max[i]) - arr[i];
    cout<<water_saved<<endl;
	return 0;
}