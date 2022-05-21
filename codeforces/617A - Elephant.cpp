 #include <bits/stdc++.h>

using namespace std;

int main()
{
	int floc;
	cin>>floc;
	
	int mloc = 0, s = 0;
	
	for(; mloc < floc; s++){
		if(floc - mloc >= 5){
			mloc += 5;
			continue;
		}
		else if(floc - mloc >= 4){
			mloc += 4;
			continue;
		}
		else if(floc - mloc >= 3){
			mloc += 3;
			continue;
		}
		else if(floc - mloc >= 2){
			mloc += 2;
			continue;
		}
		else if(floc-mloc >= 1){
			mloc += 1;
			continue;
		}
	}
	
	cout<<s;
	return 0;		
}
