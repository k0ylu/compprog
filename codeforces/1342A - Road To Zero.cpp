#include<bits/stdc++.h>

using namespace std;

void solve(){
	unsigned long long x, y, a, b;
	cin>>x>>y>>a>>b;
	
	unsigned long long a1, a2, z;
	
	a1 = (x*a) + (y*a);
	
	z = max(x,y) - min(x,y);
	
	a2 = z*a + min(x,y)*b;
	
	cout<<min(a1, a2)<<endl;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin>>t;
	
	while(t--){
		solve();
	}
	return 0;
}

/* there is only two options; either you decrease them separetly
 * or you decrease the bigger one to be equal to the other*/
