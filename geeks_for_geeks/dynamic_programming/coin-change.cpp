// edited by <White_Wolf>: 22/01/2020, 01:57:03

#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long int
#define rep(i,n)    for(ll (i)=0;(i)<n;(i)++)
#define loop(i,a,b) for(ll (i)=(a);(i)<=(b);(i)++)
#define loop_rev(i,a,b) for(ll (i)=(a);(i)>=(b);(i)--)
#define fast ios_base::sync_with_stdio(0);	cin.tie(0);	cout.tie(0);
using namespace std;


ll minWays(ll arr[], ll m, ll n){

	int dp[m+1][n+1];
  memset(dp, 0, sizeof(dp));

	loop(i,0,m) dp[i][0] = 1;
  // loop(i,1,n) dp[i][0] = 0;

  // for(int i=0;i<=n;i++)
  // c[i][0]=1;
  // for(int j=1;j<=m;j++)
  // c[0][j]=0;


	loop(i,1,m){
		loop(j,1,n){
      if(arr[i-1]>j) dp[i][j]=dp[i-1][j];
      else dp[i][j]=dp[i-1][j]+dp[i][j-arr[i-1]];
		}
	}

	return dp[m][n];
}



void solve_code(){
  ll m,n;
  cin>>m;

  ll a[m+1];
  rep(i,m) cin>>a[i];

  cin>>n;

  cout<<minWays(a,m,n);
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
