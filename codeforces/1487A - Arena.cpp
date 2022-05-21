#include<bits/stdc++.h>
 
#define NOBOT ios::sync_with_stdio(0); cin.tie(0);
 
typedef long long ll;
 
using namespace std;
 
int n, k, a[10000];
 
void solve(){
	cin>>n;
	int c = 0;
	
	for(int i = 0; i < n; i++){
		cin>>a[i];
	}
	
	sort(a, a+n);
	
	for(int i = 0; i < n; i++){
		if(a[i] != a[0]){
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
