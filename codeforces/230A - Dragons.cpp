#include<bits/stdc++.h>

using namespace std;

int main()
{
	int s, n;
	cin>>s>>n;
	
	pair<int , int>dr[100000]; //n could be used instead of 100000
							               // for less memory i guess but im lazy
	
	for(int i = 0; i < n; i++){
		cin>>dr[i].first>>dr[i].second;
	}
	
	sort(dr, dr+n);
	
	for(int i = 0; i < n; i++){
		if(dr[i].first >= s){
			cout<<"NO";
			return 0;
		}
		else{
			s += dr[i].second;
		}
	}
	cout<<"YES";
	return 0;
}
