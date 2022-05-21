#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
	int k;
	cin>>k;
	
	string c[k];
	string tmp;
	
	for(int i = 0; i < k; i++){
		ostringstream o;
		cin>>tmp;
		if(tmp.length() > 10){
			o <<tmp[0] << tmp.length()-2 << tmp[tmp.length()-1];
			c[i] = o.str();
			continue;
		}
		c[i] = tmp;
	}
	for(int i = 0; i < k; i++){
		cout<<c[i]<<endl;
	}
	return 0;
}
