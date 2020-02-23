#include <bits/stdc++.h>
#define MOD 1000000000
#define ll long long int
#define rep(i,n)    for(ll (i)=0;(i)<n;(i)++)
#define loop(i,a,b) for(ll (i)=(a);(i)<(b);(i)++)
#define loop_rev(i,a,b) for(int (i)=(a);(i)>=(b);(i)--)
#define input_num(n) ll n; cin>>n;
#define input_str(s) string s; cin>>s;
#define input_arr(x,n) ll x[n]; rep(i,n) cin>>x[i];
#define fast ios_base::sync_with_stdio(0);	cin.tie(0);	cout.tie(0);
using namespace std;

ll p[100];
ll k = 0;


ll power(ll x, ll y) {
    ll res = 1;
    x = x;
    while (y > 0) {
        if (y & 1)
            res = (res*x);

        y = y>>1;
        x = (x*x);
    }
    return res;
}

void solve_code(){
    input_num(n);
    ll count=0;
    loop_rev(i,k-1,0){
      if(n>=p[i]) {
        count+=i;
        n-=p[i];
        if(n==0){
          cout<<count;
          break;
        }
      }
    }

}


int main(){
  #ifndef ONLINE_JUDGE
    freopen("/home/badboy/Desktop/input.txt","r",stdin);
    freopen("/home/badboy/Desktop/output.txt","w",stdout);
  #endif

  fast;
  input_num(test);

  rep(i,60){
    ll x = power(2,i);
    if(x>MOD) break;
    else {
      p[i] = power(2,i);
      k++;
    }
  }
  while(test--){
      solve_code();
      cout<<endl;
  }
  return 0;
}
