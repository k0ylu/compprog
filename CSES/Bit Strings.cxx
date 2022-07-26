#include <bits/stdc++.h>

using namespace std;

#define NOBOT ios::sync_with_stdio(0); cin.tie(0);
#define bsn "\n" //curse you turkish layout

#define mod 1000000007

using ll = long long;
using str = string;

using pii = pair<int,int>;
using pll = pair<ll,ll>;
using pdd = pair<double, double>;

#define mp make_pair
#define f first
#define s second

#define all(x) x.begin(), x.end()
#define pb push_back

void solve(){
	int n;
	cin >> n;

	//this may give the wrong answer so the other one is better
	//cout << (1 << n) % mod << bsn;

	int a = 1;

	for(int i = 0; i < n; ++i){
		a = (a << 1) % mod;
	}
	cout << a << bsn;
}

int main(){
	NOBOT;	

	int t;
	cin>>t;

	while(t--){
		solve();
	}

	return 0;	
}

