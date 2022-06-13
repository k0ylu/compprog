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
	string s;
	cin >> s;

	int c = s[0]; 
	int t = 0, m = 0;

	for(int i = 0; i < s.length(); ++i){
		if(c == s[i]){
			++t;
		}
		else{
			c = s[i];
			m = max(m, t);
			t = 1;
		}
	}
	cout << max(m, t) << endl;
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

