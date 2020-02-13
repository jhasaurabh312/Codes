
// edited by <White_Wolf>: 18/01/2020, 15:23:57

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
   ll n,k,temp=1;
   cin>>n>>k;

   ll a[n+1];
   ll freq[k]={0};
   rep(i,n) {
     cin>>a[i];
     freq[a[i]%k]++;
   }

   if(k%2==0) freq[k/2]=min(freq[k/2],temp);
   ll res=min(freq[0],temp);

   loop(i,1,k/2) res+=max(freq[i],freq[k-i]);
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

  while(test--){
    solve_code();
    cout<<endl;
  }
  return 0;
}
