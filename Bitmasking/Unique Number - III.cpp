#include<iostream>
using namespace std;

int unique_no(int a[],int n){
    int hash[64] = {0};
    for(int i=0;i<n;i++){
        int no = a[i];
        int j = 0;
        while(no > 0){
            hash[j] += (no & 1);
            j++;
            no = (no>>1);
        }
    }
    for(int i=0;i<64;i++) hash[i] = hash[i]%3;
    int pos = 1;
    int ans = 0;
    for(int i=0;i<64;i++){
        ans += hash[i]*pos;
        pos = (1<<pos);
    }
    return ans;
}

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<unique_no(a,n)<<endl;
	return 0;
}
