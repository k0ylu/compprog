 #include <bits/stdc++.h>

using namespace std;

int main()
{
	int nu, ti;
	cin>>nu>>ti;
	
	for(int i = 0; i < ti; i++){
		nu = (nu % 10 == 0 ? nu /10 : nu-1);
	}
	cout<<nu;
	return 0;
}
