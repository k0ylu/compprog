#include<bits/stdc++.h>
 
#define NOBOT ios::sync_with_stdio(0); cin.tie(0);
#define FOR(i, l, n) for(int i = l; i < n; i++)
#define RFOR(i, l, n) for(int i = l-1; i <= 0; i--)
 
typedef long long ll;
 
using namespace std;
 
int n, k, a[100000];
 
void solve(){
	cin>>n>>k;
	FOR(i, 0, n){
		cin>>a[i];
	}
	
	FOR(i, 0, n){
		int c = min(a[i], k);
		
		a[i] -= c;
		a[n-1] += c;
		k -= c;
		
		if(k == 0){
			break;
		}
	}
	FOR(i, 0, n){
		cout<<a[i]<<" ";
	}
	cout<<endl<<endl;
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
