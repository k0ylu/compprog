#include<bits/stdc++.h>
 
#define NOBOT ios::sync_with_stdio(0); cin.tie(0);
#define FOR(i, l, n) for(int i = l; i < n; i++)
#define RFOR(i, l, n) for(int i = l-1; i <= 0; i--)
 
typedef long long ll;
 
using namespace std;
 
void solve(){
	int n, c = 0, ns[10000];
	cin>>n;
	
	FOR(i, 0, n){
		cin>>ns[i];
	}
	while(!is_sorted(ns, ns+n)){
		for(int i = c % 2; i < n-1; i += 2){
			if(ns[i] > ns[i+1]){
				swap(ns[i], ns[i+1]);
			}
		}
		c++;
	}
	cout<<c<<endl<<endl;
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
