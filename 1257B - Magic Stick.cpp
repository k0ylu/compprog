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
	ll x, y;
	cin>>x>>y;
	
	if(x == 1){
		cout<<(y == 1 ? "yes" : "no")<<endl<<endl;
	}
	else{
		if(x < 4){
			cout<<(y < 4 ? "yes" : "no")<<endl<<endl;
		}
		else{
			cout<<"yes"<<endl<<endl;
		}
	}
}	
		

int main(){
	NOBOT;
	
	int t;
	cin>>t;
	
	while(t--){
		solve();
	}
	
}
