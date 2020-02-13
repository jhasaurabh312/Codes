// edited by <White_Wolf>: 23/01/2020, 11:05:23

#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long int
#define rep(i,n)    for(ll (i)=0;(i)<n;(i)++)
#define loop(i,a,b) for(ll (i)=(a);(i)<=(b);(i)++)
#define loop_rev(i,a,b) for(ll (i)=(a);(i)>=(b);(i)--)
#define fast ios_base::sync_with_stdio(0);	cin.tie(0);	cout.tie(0);
using namespace std;

ll fact_rem(ll n, ll r, ll p) {
	ll fac[r+1];
	memset(fac, 0, sizeof(fac));
	fac[0] = 1;
	loop(i,1,n) loop_rev(j,min(i, r),1) fac[j] = (fac[j] + fac[j-1])%p;
	return fac[r];
}

ll solve_code(ll n, ll r, ll p) {
    if (r==0) return 1;
    return (solve_code(n/p, r/p, p) * fact_rem(n%p, r%p, p)) % p;
}



int main(){
  #ifndef ONLINE_JUDGE
    freopen("/home/badboy/Desktop/input.txt","r",stdin);
    freopen("/home/badboy/Desktop/output.txt","w",stdout);
  #endif

  fast;
  ll test;
  cin>>test;

  while(test--){
    ll n,r,p;
    cin>>n>>r>>p;

    cout<<solve_code(n,r,p);
    cout<<endl;
  }
  return 0;
}
