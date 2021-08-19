#include<bits/stdc++.h>
 
#define NOBOT ios::sync_with_stdio(0); cin.tie(0);
 
typedef long long ll;
 
using namespace std;
 
void solve(){
	int n, ans, tmp;
	cin>>n>>tmp;
	ans = tmp;
	
	for(int i = 1; i < n; i++){
		cin>>tmp;
		ans &= tmp;
	}
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
