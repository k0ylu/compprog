 #include <bits/stdc++.h>

using namespace std;

int main()
{
	int st;
	cin>>st;
	
	int cap = 0, ot = 0;
	int le, en;
	
	for(int i = 0; i < st; i++){
		cin>>le>>en;
		ot = ot - le + en;
		
		if(ot > cap){
			cap = ot;
		}
	}
	
	cout<<cap;
	return 0;
}
