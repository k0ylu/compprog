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

void solve(){
	int n;
	cin >> n;
	while(n != 1){
		cout << n << " ";
		n = (n&1 ? 3*n+1 : n/2);
	}
	cout << 1 << endl; // would skip 1 in the end 
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

