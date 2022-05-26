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
	int n, t;
	cin >> n >> t;
	
	if(t == 10 && n == 1){
		cout << "-1" << bsn;
	}
	else{ // could've just used the same num every time like
		    // 111111111 or smt but t = 10 distracted me oh well
		string s;
		s += char(48 + (t == 10 ? 1 : t));
		--n;
		for(int i = 0; i < n; ++i){
			s += "0";
		}
		cout << s << bsn;
	}
}

int main(){
	NOBOT;	

	int t;
	//cin>>t;

	//while(t--){
		solve();
	//}

	return 0;	
}

