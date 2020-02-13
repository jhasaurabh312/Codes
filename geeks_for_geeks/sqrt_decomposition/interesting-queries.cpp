// edited by <White_Wolf>: 20/01/2020, 12:22:48

#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long int
#define rep(i,n)    for(ll (i)=0;(i)<n;(i)++)
#define loop(i,a,b) for(ll (i)=(a);(i)<=(b);(i)++)
#define loop_rev(i,a,b) for(ll (i)=(a);(i)>=(b);(i)--)
#define fast ios_base::sync_with_stdio(0);	cin.tie(0);	cout.tie(0);
using namespace std;

vector<ll>divisors(ll n){
  vector<ll>v;
  ll half = sqrt(n);
  loop(i,1,half){
      if(n%i==0){
          if(i!=n/i){
            v.push_back(n/i);
            v.push_back(i);
          }
          else v.push_back(i);
      }
  }
  return v;
}

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


ll gcdExtended(ll a, ll b, ll *x, ll *y){
	if (a == 0){
		*x = 0, *y = 1;
		return b;
	}
	ll x1, y1;
	ll gcd = gcdExtended(b%a, a, &x1, &y1);
	*x = y1 - (b/a) * x1;
	*y = x1;
	return gcd;
}

ll modInverse(ll a, ll m){
	ll x, y;
	ll g = gcdExtended(a, m, &x, &y);
  ll res = -1;
	if (g == 1) res = (x%m + m) % m;
  return res;
}

/****************** main code ************************/

void solve_code(){
  ll n,q,k,x;
  cin>>n>>q>>k;

  ll dp[n+1][1001];
  rep(i,n+1)rep(j,1001) dp[i][j]=0;
  rep(i,n){
    cin>>x;
    dp[i+1][x] = dp[i-1][x]+1;
  }

  while(q--){
    ll count=0,l,r;
    cin>>l>>r;
    rep(i,1001) if(dp[r][i]-dp[l-1][i] >= k) count++;

    cout<<count<<" ";
  }

}

/**************** main code ends ****************/



int main(){
  #ifndef ONLINE_JUDGE
    freopen("/home/badboy/Desktop/input.txt","r",stdin);
    freopen("/home/badboy/Desktop/output.txt","w",stdout);
  #endif

  fast;
  ll test;
  cin>>test;

  while(test--){
    solve_code();
    cout<<endl;
  }
  return 0;
}
