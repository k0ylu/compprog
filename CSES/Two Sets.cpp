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

void solve(int t){
	int s = t*(t+1)/2;
	if(s&1){
		cout << "NO" << bsn;
		return;
	}

	vector<int> s1, s2;
	int ta = s/2;

	for(int i = 1; i < t+1; ++i){
		s1.pb(i);
		int cs = i*(i+1)/2;
		if(cs >= ta){
			if(cs > ta){
				s1.erase(s1.begin()+(cs-ta-1));
				s2.pb(cs-ta);
			}
			for(++i; i < t+1; ++i){
				s2.pb(i);
			}
		}
	}
	ll count = 0;
	cout << "YES" << bsn;
	cout << s1.size() << bsn;
	for(auto x: s1){
		cout << x << " ";
		//count += x;
	}
	//cout << bsn << count << bsn;
	cout << bsn;
	count = 0;
	cout << s2.size() << bsn;
	for(auto x: s2){
		cout << x << " ";
		//count += x;
	}
	//cout << bsn << count << bsn;
	cout << bsn;
}

int main(){
	NOBOT;	

	int t;
	cin>>t;

	//while(t--){
		solve(t);
	//}

	return 0;	
}

