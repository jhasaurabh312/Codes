// edited by <White_Wolf>: 18/01/2020, 15:23:57

#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long int
#define rep(i,n)    for(ll (i)=0;(i)<n;(i)++)
#define loop(i,a,b) for(ll (i)=(a);(i)<=(b);(i)++)
#define loop_rev(i,a,b) for(ll (i)=(a);(i)>=(b);(i)--)
#define fast ios_base::sync_with_stdio(0);	cin.tie(0);	cout.tie(0);
using namespace std;

ll fact[10];

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
   ll n,sum=0;
   cin>>n;

   ll a[n+1];
   ll freq[10]={0};
   rep(i,n) {
     cin>>a[i];
     sum+=a[i];
     freq[a[i]]++;
   }

   ll val = 1;
   loop(i,1,9) if(freq[i]>=2){
      ll res = power(fact[freq[i]],MOD-2,MOD);
      val = (val * res)%MOD;
   }

   ll res = ((fact[n] * val)%MOD * sum)%MOD;
   cout<<res;
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

  fact[0]=1;
  loop(i,1,9) fact[i] = (fact[i-1] * i) % MOD;

  while(test--){
    solve_code();
    cout<<endl;
  }
  return 0;
}
