#include<bits/stdc++.h>
 
#define NOBOT ios::sync_with_stdio(0); cin.tie(0);
 
typedef long long ll;
 
using namespace std;
 
int n, k;
 
void solve(){
	int t, c;
	ll maxn = 0;
	cin>>n>>t;
	
	for(int i = 1; i < n; i++){
		cin>>c;
		maxn = max(maxn, (ll)t*c);
		t = c;
	}
	cout<<maxn<<endl<<endl;
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
