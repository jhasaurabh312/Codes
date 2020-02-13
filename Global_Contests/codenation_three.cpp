// edited by <White_Wolf>: 26/01/2020, 22:00:05

#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long int
#define inf_l  1e18
#define inf_s -1e18
#define rep(i,n) for(ll (i)=0;(i)<n;(i)++)
#define loop(i,a,b) for(ll (i)=(a);(i)<=(b);(i)++)
#define loop_rev(i,a,b) for(int (i)=(a);(i)>=(b);(i)--)
#define input_num(n) ll n; cin>>n;
#define input_str(s) string s; cin>>s;
#define input_arr(a,n) ll a[n]; rep(i,n) cin>>a[i];
#define define_vec(v) vector<ll>v;
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

/****************** main code ************************/

void solve_code(){

 input_str(s);
 ll l=s.length();

 ll len[26]={0};
 rep(i,l) len[s[i]-'a']++;

 ll count=0;
 rep(i,26){
   if(len[i]>=2 && len[i]%2==0) count++;
 }
 cout<<count;




}

/**************** main code ends ****************/



int main(){
  // #ifndef ONLINE_JUDGE
  //   freopen("/home/badboy/Desktop/input.txt","r",stdin);
  //   freopen("/home/badboy/Desktop/output.txt","w",stdout);
  // #endif

  fast;
  ll test=1;
  // cin>>test;

  while(test--){
    solve_code();
    cout<<endl;
  }
  return 0;
}
