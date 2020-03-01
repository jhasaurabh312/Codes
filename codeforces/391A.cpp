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
    input_str(s);
    int n = s.length();

    char x = s[0];
    int count=1,ans=0;

    loop(i,1,n){
      if(s[i]==x) count++;
      else{
        // cout<<count<<" ";
        if(count%2==0) ans++;
        x = s[i];
        count=1;
      }
   }
   // cout<<count<<endl;
   ans+=(count%2 +1)%2;
   cout<<ans;

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
