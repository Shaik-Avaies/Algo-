#include<iostream>
#include<math.h>
using namespace std;

bool isPrime(int n){
    if(n == 0 || n == 1) return false;
    if(n == 2) return true;
    for(int i = 2;i<=sqrt(n);i++){
        if(n % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    bool a[n] = {0};
    int count = 0;
    for(int len = 1;len <= n;len++){
        for(int i = 0;i <= n - len; i++ ){
            int j = i + len - 1;
            string temp;
            int t = 0;
            for(int k = i;k<=j;k++){
                if(a[k] == 1) {
                    t = 1;
                    break;
                }
                temp += s[k];
            }
            if(t == 1) continue;

            if(isPrime(stoi(temp))) {
                for(int k = i;k<=j;k++){
                    a[k] = 1;
                }
                count++;
            }
        }
    }
    cout<<count<<endl;
}