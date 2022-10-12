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

ll PowI(ll a,ll b,ll m)
{ll ans=1%m;while(b>0){if(b%2) ans=(((ans%m)*(a%m))%m);
a=(((a%m)*(a%m))%m); b=(ll)(b/((ll)2));}return ans;}

void ex(ll num)
{
	if(num==-1)
	exit(0);
}

int main()
{ 
	// fast io
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);ll i,j,k;
	ll n,t;cin>>n>>t;
	while(t--)
	{
		cin>>k;ex(k);
		ll hi=n,lo=1,ans;
		while(hi>=lo)
		{
			ll mid=(hi+lo)/2;
			cout<<"? "<<1<<sp<<mid<<el<<flush;
			ll num;cin>>num;
			ex(num);
			ll no0=mid-num;
			if(no0==k)
			{
				ans=mid;
				hi=mid-1;
			}
			else if(no0<k)
			{
				lo=mid+1;
			}
			else
			{
				hi=mid-1;
			}
		}
		cout<<"! "<<ans<<el<<flush;
	}
}

/*  REMINDERS!!!!
	Don't use exit(0) inside a loop, use continue.
	When submitting after debugging, comment the couts used for debugging.
		
		* Do something instead of nothing
		* Write Stuff Down
*/
