#include<bits/stdc++.h>

using namespace std;

void solve(){
	int n, oc(0), tp;
	cin>>n;
	
	for(int i = 0; i < 2*n; i++){
		cin>>tp;
		oc = oc + (tp % 2 == 1 ? 1 : 0);
	}
	
	cout<<(oc == n ? "YES" : "NO")<<endl<<endl;
}

int main(){
	int t;
	cin>>t;
	
	while(t--){
		solve();
	}
	return 0;
}
