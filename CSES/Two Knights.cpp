#include <bits/stdc++.h>

using namespace std;

#define NOBOT ios::sync_with_stdio(0); cin.tie(0);
#define bsn "\n" //curse you turkish layout

using ll = long long;
using str = string;

using pii = pair<int,int>;
using pll = pair<ll,ll>;
using pdd = pair<double, double>;

#define mp make_pair
#define f first
#define s second

#define all(x) x.begin(), x.end()
#define pb push_back

void solve(){
	static int n = 1; // i dont want to change the template
	
	ll tp = (n*n)*(n*n-1)/2;
	ll tap = 4*(n-1)*(n-2);
	cout << tp - tap << bsn;
	//cout << tp << bsn;

	++n;
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

/*
so let us call total number of positions tp,
and the total number of attack positions tap;

there are n^2 places to put your piece on the board
and n^2-1 to put your other piece because you already put one

to by rules of permutation, there are 

(n^2)(n^2-1)/2 total number of positions (tp)
             ^
			 because you have 2 pieces

so here comes the hard part; finding tap:

so first of all, a knight moves in an L shape;
which in turn creates a 3x2 or 2x3 area

in every 3x2 and 2x3 there are;

    _____ _____
   |     |     |
   |  x  |  x  |
   |_____|_____|
   |     |     |
   |     |     |
   |_____|_____|
   |     |     |
   |  x  |  x  |
   |_____|_____|

2 attack positions so there is 2 times the L shapes

but another fun part is that n x n is a square and
a square is symmetric so we don't have to find 3x2 and 
2x3 separately, we can just find 2x3 and multiply it by 2
so it becomes 2*2*(find all the 2x3 L's)

and the hardest part imo, finding all the 2x3 L's

so let us say that n = 4; so one side of the L, being 2
the "windows" of 2's are

1-2
2-3
3-4

and let say that n = 6, and let us do same thing;

1-2
2-3
3-4
4-5
5-6

as you can see there is a pattern being there is always n-1 windows but
that is the peak of the iceberg, the real formula is actually

n-(window size -1) because the window always slides by one and the windows 
should always perfectly fit the size of n

So to wrap it up;
tp = (n^2)*(n^2-1)/2
tap = 2*2*(n-1)*(n-2)

the first 2 because a square is symmetric;
the second 2 because every L has 2 attack positions;
n-1 because our window size is 2;
n-2 because our window size is 3;

so the final answer is;
tp - tap

(i may have worded my train of thought poorly but at least i found the
answer ig)

*/


