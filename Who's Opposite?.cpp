#include<bits/stdc++.h>
 
using namespace std;
 
void solve(){
	long a,b,c;
	cin>>a>>b>>c;
	
	long long pn = 2*abs(b-a);
	int ans = 0;
	
	if(b > pn || a > pn || c > pn){
		ans = -1;
	}
	else{
		ans = c + pn/2;
		if(ans> pn){
			ans = c-pn/2;
		}
	}
	cout<<ans<<endl;
}
		
 
int main(){
	int t;
	cin>>t;
	
	while(t--){
		solve();
	}
	return 0;
}
