#include<iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int set_bits = 0;
        while(n > 0){
            set_bits++;
            n = (n&n-1);
        }
        cout<<set_bits<<endl;
    }
	return 0;
}