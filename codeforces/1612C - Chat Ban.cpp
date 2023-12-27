#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

constexpr int MOD = 998244353;
constexpr char nln = '\n'; // turkish keyboard moment

template<class t> bool chmax(t &a, const t &b){
	return a<b?a=b,1:0;
}

template<class t> bool chmin(t &a, const t &b){
	return a>b?a=b,1:0;
}

ll arAdd(ll n){
	return n*(n+1)/2;
}

void s(){
	ll k, x;
	cin >> k >> x;
	
	ll L = 1, R = 2*k-1, ans = R;
	while(L <= R){
		ll mid = L + (R-L)/2, midc;
		if(mid <= k)
			midc = arAdd(mid);
		else
			midc = arAdd(k) + arAdd(k-1) - arAdd(2*k-1 - mid);

		if(midc >= x){
			ans = mid;
			R = mid-1;
		}
		else
			L = mid+1;
	}
	cout << ans << nln;
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	
	int t; cin >> t;
	while(t--)
		s();
}
