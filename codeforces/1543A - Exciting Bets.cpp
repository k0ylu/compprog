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
	ll a,b;
	cin>>a>>b;
	
	if(a == b){
		cout<<"0 0"<<endl<<endl;
	}
	else{
		cout<<abs(a-b)<<" "<<min(a%abs(a-b), abs(a-b)-a%abs(a-b))<<endl<<endl;
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
