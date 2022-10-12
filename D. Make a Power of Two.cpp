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

const ll large=1e18;
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

str itos(ll n)
{
	str ans;
	while(n>0)
	{
		ll r=n%10;
		n=n/10;
		char c=(char)'0'+r;
		ans=c+ans;
	}
	return ans;
}

ll strmatch(str p,str k)
{
	ll ans=0;
	ll i=0;
	ll j=0;
	while(j<p.size() and i<k.size())
	{
		if(k[i]==p[j])
		{
			ans++;
			j++;
		}
		i++;
	}
	return ans;
}

int main()
{ 
	// fast io
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);ll i,j,k;
	int T;cin>>T;
	vl p2;
	ll num=1;
	p2.pb(num);
	while(num<=large)
	{
		num=num*2;
		p2.pb(num);
	}
	vector <str> p2s;
	for(i=0;i<p2.size();i++)
	{
		str s=itos(p2[i]);
		p2s.pb(s);
		//cout<<s<<el;
	}
	ll sz=p2.size();
	while(T--)
	{
		ll n;cin>>n;
		str sn=itos(n);
		ll sizn=sn.size();
		vl anssz(sz);
		ll mn=large;
		for(i=0;i<sz;i++)
		{
			ll match=strmatch(p2s[i],sn);
			ll siz2=p2s[i].size();
			ll ansnum=sizn-match;
			ansnum+=(siz2-match);
			anssz[i]=ansnum;
			mn=min(mn,ansnum);
			//cout<<p2s[i]<<" Match: "<<match<<" siz2: "<<siz2<<" ansnum: "<<ansnum<<" mn: "<<mn<<el;
		}
		cout<<mn<<el;
	}
}

/*  REMINDERS!!!!
	Don't use exit(0) inside a loop, use continue.
	When submitting after debugging, comment the couts used for debugging.
		
		* Do something instead of nothing
		* Write Stuff Down
*/
