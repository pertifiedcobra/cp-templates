#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef string str;

typedef pair<ll,ll> pll;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<str> vs;
typedef vector<vector <int> > vvi;
typedef vector<vector <ll> > vvl;

const ll large=1e10;
const ll remi=1000000007;
const ll remi2=998244353;
const ll inf=1e18+1e17+1e16+1e15+1e14;

#define pi 3.141592653589
#define pb push_back
#define F first
#define S second
#define el "\n"
#define sp " "

vvi g;
vi vis;

ll Pow(ll x,ll y,ll m)
{ if (y == 0) return 1; ll p = Pow(x, y/2, m) % m; 
p = (p * p) % m;return (y%2 == 0)? p : (x * p) % m; }


int main()
{ 
	// fast io
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);ll i,j,k;
	ll n;
	cin>>n;
	ll ans=Pow(2,n,remi);
	cout<<ans;
}

/*  REMINDERS!!!!
	Don't use exit(0) inside a loop, use continue.
	When submitting after debugging, comment the couts used for debugging.
		
		* Do something instead of nothing
		* Write Stuff Down
*/
