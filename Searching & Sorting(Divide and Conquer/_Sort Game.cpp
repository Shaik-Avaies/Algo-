#include<iostream>
#include<utility>
#include<algorithm>
using namespace std;

bool comparator(pair<string,int> a,pair<string,int> b){
    if(a.second == b.second) return a.first < b.first;
    else return a.second > b.second;
}

int main() {
    int min_salary,n;
    cin>>min_salary;
    cin>>n;
    pair<string,int> employee[100005];
    for(int i=0;i<n;i++) cin>>employee[i].first>>employee[i].second;
    sort(employee,employee+n,comparator);
    for(int i=0;i<n;i++){
        if(employee[i].second >= min_salary){
            cout<<employee[i].first<<" "<<employee[i].second<<endl;    
        }
    }
    return 0;
}