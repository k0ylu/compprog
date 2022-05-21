#include<bits/stdc++.h>
 
#define NOBOT ios::sync_with_stdio(0); cin.tie(0);
#define FOR(i, l, n) for(int i = l; i < n; i++)
#define RFOR(i, l, n) for(int i = l-1; i <= 0; i--)
 
typedef long long ll;
 
using namespace std;
 
void solve(){
	ll l, r, best = 0, m;
	cin>>l>>r;
	
	m = r/2+1;
	
	if(m < l){
		best = r % l;
	}
	
	else{
		best = r % m;
	}
	cout<<best<<endl<<endl;
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
