#include<bits/stdc++.h>
 
#define NOBOT ios::sync_with_stdio(0); cin.tie(0);
#define FOR(i, l, n) for(int i = l; i < n; i++)
#define RFOR(i, l, n) for(int i = l-1; i <= 0; i--)
 
typedef long long ll;
 
using namespace std;
 
int n, m, k;
 
void solve(){
	cin>>n>>m>>k;
	int ans1 = 0, ans2 = 0;
	
	ans1 = (n-1) + ((m-1)*n);
	ans2 = (m-1) + ((n-1)*m);
	
	if(ans1 == k || ans2 == k){
		cout<<"YES"<<endl;
		return;
	}
	else{
		cout<<"NO"<<endl;
		return;
	}
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
