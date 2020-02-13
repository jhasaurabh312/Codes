// edited by <White_Wolf>: 22/01/2020, 16:35:20

#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long int
#define rep(i,n)    for(ll (i)=0;(i)<n;(i)++)
#define loop(i,a,b) for(ll (i)=(a);(i)<=(b);(i)++)
#define loop_rev(i,a,b) for(ll (i)=(a);(i)>=(b);(i)--)
#define fast ios_base::sync_with_stdio(0);	cin.tie(0);	cout.tie(0);
using namespace std;


void solve_code(){
  ll n;
  cin>>n;

  ll a[n];
  rep(i,n) cin>>a[i];

  ll dp[n];
  rep(i,n){
    dp[i]=1;
    loop(j,0,i-1) if(a[i]>a[j] && dp[i]<dp[j]+1) dp[i] = dp[j]+1;
  }

  ll ans = dp[0];
  loop(i,1,n-1) ans = max(ans,dp[i]);
  cout<<ans;
}



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
