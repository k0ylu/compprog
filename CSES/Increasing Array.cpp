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
	int n, ar[200000];
	cin >> n;
	for(int i = 0; i < n; ++i){
		cin >> ar[i];
	}
	int m = 0;
	for(int i = 1; i < n; ++i){
		if(ar[i] < ar[i-1]){
			m += ar[i-1]-ar[i];
			ar[i] += ar[i-1]-ar[i];
		}
	}
	cout << m << bsn;
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

