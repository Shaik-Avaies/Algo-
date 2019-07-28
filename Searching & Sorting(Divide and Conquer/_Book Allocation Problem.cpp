#include<iostream>
using namespace std;
bool isValid(int a[],int n,int k,int mid){
    int students = 1;
    int pages = 0;
    for(int i=0;i<n;i++){
        if(a[i]+pages > mid){
        students++;
        pages = a[i];
        if(students > k){
              return false;
        }
        }
        else{
               pages += a[i];
        } 
    }  
    return true;
}
int PagesAssigned(int a[],int n,int k){
    int total_sum = 0;
    int s = a[0];
    for(int i=0;i<n;i++){
        total_sum += a[i];
        s = max(s,a[i]);
    }
    int e = total_sum;
    int final_ans = s;
    while(s <= e){
        int mid = (s+e)/2;
        if(isValid(a,n,k,mid)){
            final_ans = mid;
            e = mid -1;
        }else{
            s = mid + 1;
        }
    }
    return final_ans;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        cout<<PagesAssigned(a,n,m)<<endl;
    }
	return 0;
}