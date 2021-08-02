#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
	int k;
	cin>>k;
	
	int sum = 0, tmp, usum = 0;
	
	for(int i = 0; i < k; i++){
		for(int j = 0; j < 3; j++){
			cin>>tmp;
			sum += tmp;
		}
		usum += sum > 1 ? 1 : 0;
		sum = 0;
	}
	cout<<usum;
}
