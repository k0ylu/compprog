#include <bits/stdc++.h>

using namespace std;

#define NOBOT ios::sync_with_stdio(0); cin.tie(0);
#define bsn "\n" //curse you turkish layout

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

#define SIN

void solve(){
	ll n,m,a;
	cin >> n >> m >> a;

	ll ans = ((n+a-1)/a)*((m+a-1)/a);
	cout << ans << bsn;
}

int main(){
	NOBOT;	

	#ifdef MUL
	int t;
	cin>>t;

	while(t--){
		solve();
	}
	#else
	solve();
	#endif

	return 0;	
}

