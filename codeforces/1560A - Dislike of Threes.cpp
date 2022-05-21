#include<bits/stdc++.h>
 
using namespace std;
 
void solve(){
	int n; 
	cin>>n;
	
	int nu = 0;
	
	while(n--){
		if((nu + 1) % 3 == 0 || (nu + 1) % 10 == 3){
			nu += 2;
			while(nu % 3 == 0 || nu % 10 == 3){
				nu++;
			}
		}
		else{
			nu++;
		}
	}
 
	cout<<nu<<endl<<endl;
}
		
 
int main(){
	int t;
	cin>>t;
	
	while(t--){
		solve();
	}
	return 0;
}
