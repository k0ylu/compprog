//Solution one to the same problem

#include<bits/stdc++.h>
 
using namespace std;
 
#define NOBOT ios::sync_with_stdio(0); cin.tie(0);
 
using ll = long long;
using str = string;
using db = long double;
 
//pairs
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using pdb = pair<db, db>;
 
#define mp_ make_pair
#define fi first
#define se second
 
//vectors
//i dont use them often tho
using vii = vector<int, int>;
using vll = vector<ll, ll>;
using vdb = vector<db, db>;
using vpii = vector<pii>;
using vpdb = vector<pdb>;
 
#define size(x) (int)(x.size())
#define all(x) x.begin, x.end
#define pb_ push_back
 
void solve(){
	int n;
	str s;
	cin>>n>>s;
	
	if(n == 1){
		cout<<"-1 -1"<<endl<<endl;
		return;
	}
	else{
		for(int i = 0; i < n-1; i++){
			if(s[i]  == 'a' && s[i+1] == 'b'){
				cout<<i+1<<" "<<i + 2<<endl<<endl;
				return;
			}
			else if(s[i]  == 'b' && s[i+1] == 'a'){
				cout<<i+1<<" "<<i + 2<<endl<<endl;
				return;
			}
		}
		cout<<"-1 -1"<<endl<<endl;
		return;
	}
}	
		
 
int main(){
	NOBOT;
	
	int t;
	cin>>t;
	
	while(t--){
		solve();
	}
	return 0;
}
