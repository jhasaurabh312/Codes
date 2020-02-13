// edited by <White_wolf>: 23/01/2020, 17:41:28

#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long int
#define rep(i,n)    for(ll (i)=0;(i)<n;(i)++)
#define loop(i,a,b) for(ll (i)=(a);(i)<=(b);(i)++)
#define loop_rev(i,a,b) for(ll (i)=(a);(i)>=(b);(i)--)
#define fast ios_base::sync_with_stdio(0);	cin.tie(0);	cout.tie(0);
using namespace std;

ll fact[1001];

ll power(ll x, ll y, ll p) {
    ll res = 1;
    x = x % p;
    while (y > 0) {
        if (y & 1)
            res = (res*x) % p;

        y = y>>1;
        x = (x*x) % p;
    }
    return res;
}


void solve_code(){
   ll m,x,p,a,r=0;
   cin>>m>>x>>p;

   ll n = m-p;
   rep(i,x){
     cin>>a;
     r+=a;
   }

   if(n>=r){
      ll res = (power(fact[x-1],MOD-2,MOD) * power(fact[n-r],MOD-2,MOD))%MOD;
      ll ans = (fact[n-r+x-1] * res)%MOD;
      cout<<ans;
   }
   else cout<<"-1";
}


int main(){
  #ifndef ONLINE_JUDGE
    freopen("/home/badboy/Desktop/input.txt","r",stdin);
    freopen("/home/badboy/Desktop/output.txt","w",stdout);
  #endif

  fast;
  ll test;
  cin>>test;

  fact[0]=1;
  loop(i,1,1000) fact[i] = (fact[i-1] * i)%MOD;

  while(test--){
    solve_code();
    cout<<endl;
  }
  return 0;
}
