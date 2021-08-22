#include<bits/stdc++.h>
 
#define NOBOT ios::sync_with_stdio(0); cin.tie(0);
#define FOR(i, l, n) for(int i = l; i < n; i++)
#define RFOR(i, l, n) for(int i = l-1; i <= 0; i--)
 
 
typedef long long ll;
 
using namespace std;
 
void solve(){
	int n, na[100000], na2[100000]; //too much memory but im lazy
	cin>>n;
	int l = 0, r = n-1;
	
	FOR(i, 0 ,n){
		cin>>na[i];
	}
	
	FOR(i, 0, n){
		if(i & 1){
			na2[i] = na[r];
			r--;
		}
		else{
			na2[i] = na[l];
			l++;
		}
	}
	FOR(i, 0, n){
		cout<<na2[i]<<" ";
	}
	cout<<endl;
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
