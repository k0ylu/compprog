//i cant really take credit for this one, editorial really helped a lot

#include<bits/stdc++.h>
 
#define NOBOT ios::sync_with_stdio(0); cin.tie(0);
#define FOR(i, l, n) for(int i = l; i < n; i++)
#define RFOR(i, l, n) for(int i = l-1; i <= 0; i--)
 
typedef long long ll;
 
using namespace std;
 
void solve(){
	int n, nu[10000], sm = 0, mm = 0;
	cin>>n;
	FOR(i, 0, n){
		cin>>nu[i];
	}
	
	mm = max_element(nu, nu+n) - nu;
	sm = min_element(nu, nu+n) - nu;
	
	int ans = 0;
	
	ans = min({max(mm, sm) + 1, (n - 1) - min(mm, sm) + 1, (n - 1) - mm + sm + 2, (n - 1) - sm + mm + 2});
	
	cout<<ans<<endl<<endl;
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
