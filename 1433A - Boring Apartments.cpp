#include<bits/stdc++.h>
 
#define NOBOT ios::sync_with_stdio(0); cin.tie(0);
#define FOR(i, l, n) for(int i = l; i < n; i++)
#define RFOR(i, l, n) for(int i = l-1; i <= 0; i--)
 
typedef long long ll;
 
using namespace std;
 
void solve(){
	int n, s = 0;
	cin>>n;
	
	FOR(i, 1, 10){
		int num = i;
		FOR(j, 1, 5){
			if(num == n){
				s += j;
				cout<<s<<endl<<endl;
				return;
			}
			else{
				num = num*10+i;
				s += j;
			}
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
