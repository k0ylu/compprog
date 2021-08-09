#include<bits/stdc++.h>
 
using namespace std;
 
void solve(){
	int k;
	cin>>k;
	int n[k];
	for(int i = 0; i < k; i++){
		cin>>n[i];
	}
	sort(n, n+k);
	
	double ans = (double)n[k-1];
	
	double tmp = 0;
	for(int i = 0; i < k-1; i++){
		tmp += (double)n[i];
	}
	tmp /= k-1;
	
	ans += tmp;
	printf("%.12f \n", ans);
}
 
 
int main(){
	int t;
	cin>>t;
	
	while(t--){
		solve();
	}
	
	return 0;
}
