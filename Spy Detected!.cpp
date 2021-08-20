#include<bits/stdc++.h>
 
#define NOBOT ios::sync_with_stdio(0); cin.tie(0);
 
typedef long long ll;
 
using namespace std;
 
int n, k;
void solve(){
	cin>>n;
	int a[10000], b[10000];
	
	for(int i = 0; i < n; i++){
		int t;
		cin>>t;
		a[i] = t;
		b[i] = t;
	}
	
	sort(a, a+n);
	
	for(int i = 0; i < n; i++){
		if(a[1] != b[i]){
			cout<<i+1<<endl<<endl;
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
