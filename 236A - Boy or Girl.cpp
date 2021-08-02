#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	cin>>s;
	
	sort(s.begin(), s.end());
	auto er = unique(s.begin(), s.end());
	s.erase(er, s.end());
	
	if(s.length() % 2 == 0){
		cout<<"CHAT WITH HER!";
	}
	else{
		cout<<"IGNORE HIM!";
	}
	
	return 0;							
}
