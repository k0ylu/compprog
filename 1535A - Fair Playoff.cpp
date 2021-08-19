#include<bits/stdc++.h>
 
#define NOBOT ios::sync_with_stdio(0); cin.tie(0);
 
typedef long long ll;
 
using namespace std;
 
void solve(){
	int n[4];
	for(int i = 0; i < 4; i++){
		cin>>n[i];
	}
	
	int f1(max(n[0], n[1])), f2(max(n[2], n[3]));
	sort(n, n+4);
	
	if((f1 == n[2] || f1 == n[3]) && (f2 == n[2] || f2 == n[3])){
		cout<<"YES"<<endl<<endl;
	}
	else{
		cout<<"NO"<<endl<<endl;
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
