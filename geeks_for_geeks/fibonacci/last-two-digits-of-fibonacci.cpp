
// edited by <White_Wolf>: 18/01/2020, 14:47:48

#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long int
#define rep(i,n)    for(ll (i)=0;(i)<n;(i)++)
#define loop(i,a,b) for(ll (i)=(a);(i)<=(b);(i)++)
#define loop_rev(i,a,b) for(ll (i)=(a);(i)>=(b);(i)--)
#define fast ios_base::sync_with_stdio(0);	cin.tie(0);	cout.tie(0);
using namespace std;

ll fib[305] = {0};

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
  ll n;
  cin>>n;

  ll k = n%300;
  ll ans = fib[k];
  if(ans/10 == 0) cout<<ans%10;
  else cout<<ans;
}


int main(){
  #ifndef ONLINE_JUDGE
    freopen("/home/badboy/Desktop/input.txt","r",stdin);
    freopen("/home/badboy/Desktop/output.txt","w",stdout);
  #endif

  fast;
  ll test;
  cin>>test;

  fib[0]=0;
  fib[1]=1;
  loop(i,2,300) fib[i]=(fib[i-1]+fib[i-2])%100;

  while(test--){
    solve_code();
    cout<<endl;
  }
  return 0;
}
