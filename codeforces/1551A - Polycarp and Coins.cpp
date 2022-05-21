#include<bits/stdc++.h>

using namespace std;

void solve(){
	long c1(0), c2(0), n;
	int e;
	cin>>n;
	
	e = n % 3;
	c1 = n / 3;
	c2 = n / 3;
	
	if(e != 0){
		e == 2 ? c2++ : c1++;
	}
	
	cout<<c1<<" "<<c2<<endl<<endl;
}

int main(){
	int t;
	cin>>t;
	
	while(t--){
		solve();
	}
	return 0;
}
