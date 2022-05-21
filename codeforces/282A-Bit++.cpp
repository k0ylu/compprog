#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
	int k, sum = 0;
	cin>>k;
	
	string op;
	
	for(int i = 0; i < k; i++){
		cin>>op;
		if(op[1] == '+'){
			sum++;
		}
		else if(op[1] == '-'){
			sum--;
		}
	}
	cout<<sum;
}
