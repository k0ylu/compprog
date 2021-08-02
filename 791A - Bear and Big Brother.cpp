 #include <bits/stdc++.h>

using namespace std;

int main()
{
	int li, bo, year = 0;
	cin>>li>>bo;
	
	for(;li <= bo; year++){
		li *= 3;
		bo *= 2;
	} 
	
	cout<<year;
	return 0;
}
