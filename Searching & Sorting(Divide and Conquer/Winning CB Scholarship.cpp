#include<iostream>
#define ll long long 
using namespace std;

bool isValid(ll n,ll m,ll x,ll y,ll mid){
	ll newCoupons = m + (n-mid)*y;
	if(mid * x <= newCoupons) return true;
	else return false;
}

int main() {
	ll n,m,x,y;
	cin>>n>>m>>x>>y;
	ll s = 0;
	ll e = n;
	ll final_ans = s;
	while(s <= e){
		ll mid = (s+e)/2;
		if(isValid(n,m,x,y,mid)){
			final_ans = mid;
			s = mid + 1;
		}else{
			e = mid - 1;
		}
	}
	cout<<final_ans<<endl;
	return 0;
}