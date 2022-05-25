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
	string x;
	cin >> x;
	string h = "hello";
	int j = 0;

	for(int i = 0; i < x.size(); ++i){
		if(x[i] == h[j]){
			++j;
			if(j == 5){
				break;
			}
		}
	}
	cout << (j == 5 ? "YES" : "NO") << bsn;
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

