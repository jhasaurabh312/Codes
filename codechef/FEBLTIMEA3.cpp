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
  input_str(s);

  unordered_map<ll,ll>count;
  vector<vector<ll>>v;
  v.resize(26);


  rep(i,n){
    count[s[i]-'0']++;
    v[s[i]-'0'].push_back(i);
  }

  int ans=0;
  rep(i,25) ans+=count[i]%2;

  if(n%2==1 && ans!=1) cout<<"NO";
  else if(n%2==0 && ans!=0) cout<<"NO";
  else{

  }

}


int main(){
  #ifndef ONLINE_JUDGE
    freopen("/home/badboy/Desktop/input.txt","r",stdin);
    freopen("/home/badboy/Desktop/output.txt","w",stdout);
  #endif

  fast;
  // int test=1;
  input_num(test);
  while(test--){
      solve_code();
      cout<<endl;
  }
  return 0;
}
