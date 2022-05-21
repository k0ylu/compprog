#include<bits/stdc++.h>
 
#define NOBOT ios::sync_with_stdio(0); cin.tie(0);
#define FOR(i, l, n) for(int i = l; i < n; i++)
#define RFOR(i, l, n) for(int i = l-1; i <= 0; i--)
 
typedef long long ll;
 
using namespace std;
 
void solve(){
	ll n;
	cin>>n;
	
	while(n % 2 == 0){
		n /=2;
	}
	
	cout<<(n != 1 ? "YES" : "NO")<<endl<<endl;
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
