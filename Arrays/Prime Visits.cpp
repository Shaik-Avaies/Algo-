#include<iostream>
#include<cstring>
#include<math.h>
#define N 1000000
using namespace std;

bool prime[N];

void sieveOfErathosthenis(){
    memset(prime,true,sizeof(prime));
    prime[0] = prime[1] = false;
    prime[2] = true;
    for(int i = 2;i<=sqrt(N);i++){
       int p = i;
       for(int j = p*p;j<=N;j+=p){
           prime[j] = false;
       }
    }
}

int main() {
    int t;
    cin>>t;
    sieveOfErathosthenis();
    while(t--){
        int a,b;
        cin>>a>>b;
        int count = 0;
        for(int i = a;i<=b;i++){
            if(prime[i]) count++;
        }
        cout<<count<<endl;
    }
	return 0;
}