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

vector<pair<int,int>> check(int x, vector<int> ar, int n){
	multiset<int> s(ar.begin(), ar.end());
	vector<pair<int,int>> ans;
	for(int i = 0; i < n; ++i){
		auto it1 = s.end(); it1--;
		int y = x - *it1;
		s.erase(it1);
		auto it2 = s.find(y);
		if(it2 != s.end()){
			ans.push_back(make_pair(y, x-y));
			x = max(x-y, y);
			s.erase(it2);
		}
		else
			return {};
	}
	return ans;
}

void s(){
	int n; cin >> n;
	vector<int> ar(2*n, 0);
	for(auto& a : ar)
		cin >> a;
	sort(ar.begin(), ar.end());
	
	for(int i = 0; i < ar.size()-1; ++i){
		int x = ar[i] + ar[2*n-1];
		auto ans = check(x, ar, n);
		if(ans.size() > 0){
			cout << "YES\n" << ans[0].first+ans[0].second << "\n";
			for(auto a : ans)
				cout << a.first << " " << a.second << "\n";
			return;
		}
	}
	cout << "NO\n";
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	
	int t; cin >> t;
	while(t--)
		s();
}
