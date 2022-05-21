#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, m;
	cin>>n>>m;
	
	int s;
	
	if(n >= m){	
		if(n % 2 == 0){
			s = n/2;
		}
		else{
			s = (n-1)/2 + 1;
		}
		
		while(s % m != 0){
			s++;
		}
		cout<<s<<endl;
		return 0;
	}
	cout<<-1<<endl;
	return 0;
}
