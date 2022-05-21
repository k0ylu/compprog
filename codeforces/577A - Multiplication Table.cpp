#include<bits/stdc++.h>

using namespace std;


int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, x;
	cin>>n>>x;
	
	int c = 0;
	
	for(int i = 1; i <= n; i++){
		if(x % i == 0 && x/i <= n){
			c++;
		}
	}
	cout<<c;
	return 0;
}

