#include <bits/stdc++.h>

using namespace std;

int main()
{
	int p, m, a, rc = 0;
	cin>>p>>m>>a;
	
	for(int i = 1; i <= a; i++){
		rc += i*p;
	}
	
	cout<<(rc > m ? rc-m : 0);
	return 0;						
}
