#include<bits/stdc++.h>
 
#define NOBOT ios::sync_with_stdio(0); cin.tie(0);
#define FOR(i, l, n) for(int i = l; i < n; i++)
#define RFOR(i, l, n) for(int i = l-1; i <= 0; i--)
 
 
typedef long long ll;
 
using namespace std;
 
void solve(){
	int n, s1 = 0, s2 = 0;
	cin>>n;
	FOR(i, 0, n){
		int t;
		cin>>t;
		 if(t == 1){
			 s1++;
		 }
		 else{
			 s2++;
		 }
	}
	if((s1 + s2*2) % 2 == 1){
		cout<<"NO"<<endl<<endl;
	}
	else{
		int su = (s1 + s2*2)/2;
		if(su % 2 == 0 || (su % 2 == 1 && s1 != 0)){
			cout<<"YES"<<endl<<endl;
		}
		else{
			cout<<"NO"<<endl<<endl;
		}
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
