#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
	int k, p, c = 0;
	cin>>k>>p;
	
	int sc[k];
	
	for(int i = 0; i < k; i++){
		cin>>sc[i];
	}
	
	for(int i = 0; i < k; i++){
		if(sc[i] > 0 && sc[i] >= sc[p-1]){
			c++;
		}
	}
	cout<<c;
	return 0;
}
