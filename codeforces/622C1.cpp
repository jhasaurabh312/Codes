#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long int
#define rep(i,n)    for(ll (i)=0;(i)<n;(i)++)
#define loop(i,a,b) for(ll (i)=(a);(i)<(b);(i)++)
#define loop_rev(i,a,b) for(int (i)=(a);(i)>=(b);(i)--)
#define input_num(n) ll n; cin>>n;
#define input_str(s) string s; cin>>s;
#define input_arr(x,n) ll x[n]; rep(i,n) cin>>x[i];
#define fast ios_base::sync_with_stdio(0);	cin.tie(0);	cout.tie(0);
using namespace std;


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
  input_num(n);
  input_arr(a,n);

  ll maxi = 0;
  ll mini = MOD;
  ll mai = 0;
  ll mii = 0;

  rep(i,n){
    if(a[i]>maxi){
      maxi = a[i];
      mai = i;
    }
    if(a[i]<mini){
      mini = a[i];
      mii = i;
    }
  }

  ll dup[n];
  rep(i,mai){
    dup[i] = arr[i];
  }

  sort(dup,dup+mai+1);




}


int main(){
  #ifndef ONLINE_JUDGE
    freopen("/home/badboy/Desktop/input.txt","r",stdin);
    freopen("/home/badboy/Desktop/output.txt","w",stdout);
  #endif

  fast;
  int test=1;
  // input_num(test);
  while(test--){
      solve_code();
      cout<<endl;
  }
  return 0;
}
