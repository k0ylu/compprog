 #include <bits/stdc++.h>

using namespace std;

int main()
{
	int k;
	cin>>k;
	
	int x(0), y(0), z(0), tmp;
	
	while(k--){
		cin>>tmp;
		x += tmp;
		cin>>tmp;
		y += tmp;
		cin>>tmp;
		z += tmp;
	}
	
	if (x == 0 && y == 0 && z == 0){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	return 0;
}
