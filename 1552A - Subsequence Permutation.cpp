#include<bits/stdc++.h>
 
#define NOBOT ios::sync_with_stdio(0); cin.tie(0);
#define FOR(i, l, n) for(int i = l; i < n; i++)
#define RFOR(i, l, n) for(int i = l-1; i <= 0; i--)
 
typedef long long ll;
 
using namespace std;
 
int n, k;
 
void solve(){
	int c = 0;
	string s; 
	cin>>n>>s;
	string ss = s;
	
	sort(ss.begin(), ss.end());
	
	FOR(i, 0, n){
		if(s[i] != ss[i]){
			c++;	
		}
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
