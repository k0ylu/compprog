#include <bits/stdc++.h>

using namespace std;

int main()
{
	int k, ch = 0;
	string st;
	cin>>k>>st;
	
	for(int i = 0; i < k-1; i++){
		if(st[i] == st[i+1]){
			ch++;
		}
	}
	cout<<ch;
	return 0;
}
