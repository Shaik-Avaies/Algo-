#include<iostream>
using namespace std;

int kadane_sum(int arr[],int n){
    int max_sum,current_sum;
    max_sum = current_sum = 0;
    for(int i =0;i<n;i++) {
        current_sum += arr[i];
        if(current_sum < 0 ) current_sum = 0;
        if(current_sum > max_sum) max_sum = current_sum;
    }
    return max_sum;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        int c1 = kadane_sum(arr,n);
        int cummulative_sum = 0;
        for(int i=0;i<n;i++){
            cummulative_sum += arr[i];
            arr[i] = -arr[i];
        }
        int min_sum = kadane_sum(arr,n);
        min_sum = -min_sum;
        int c2 = cummulative_sum - min_sum;
        cout<<max(c1,c2)<<endl;
    }
	return 0;
}