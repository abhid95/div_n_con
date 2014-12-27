// here it is searching for every difference starting from 1000000000 to 1 in log time using binary search
#include <bits/stdc++.h>
#define MAX 1000000007
#define pb push_back
#define mp make_pair
#define FOR(n) for(i=0;i<n;i++)
#define rep(i,n) for(i=0;i<n;i++)
#define reps(i,a,b) for(i=a;i<=b;i++)
#define swap(a,b) T=a,a=b,b=T
#define ll long long int
#define que queue<int>
#define s(t) scanf("%lld",&t)
#define p(t) printf("%lld\n",t)
using namespace std;
ll i,j,l,n,m,t,T,p,ans,cnt,par,ele,c,a[100005],df[100005],min,mdf,tdf;
ll f(ll x)
{
    ll cnt=1;
    ll lastpos=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]-lastpos>=x)
        {
            cnt++;
            if(cnt==c)
                return 1;
            lastpos=a[i];
        }
    }
    return 0;
}
ll binsearch()
{
    ll start=0,end=a[n-1];
    while(start<end)
    {
        ll mid=(start+end)/2;
        if(f(mid)==1)
            start=mid+1;
        else
            end=mid;
    }
    return start-1;
}
int main()
{

char x;
s(t);
while(t--)
{
    s(n);
    s(c);
    FOR(n)
        s(a[i]);
    sort(a,a+n);
    p(binsearch());
}

return 0;
}



