#include<bits/stdc++.h>
 
#define ll long long
 
#define NOBOT ios::sync_with_stdio(0); cin.tie(0);
 
using namespace std;
 
void solve(){
	int n, c = 0;
	cin>>n;
	
	c = n/10;
	c = c + (n % 10 == 9 ? 1 : 0);
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
