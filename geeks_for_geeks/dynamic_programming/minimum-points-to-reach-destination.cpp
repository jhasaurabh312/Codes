// edited by <White_Wolf>: 22/01/2020, 02:47:43

#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long int
#define rep(i,n)    for(ll (i)=0;(i)<n;(i)++)
#define loop(i,a,b) for(ll (i)=(a);(i)<=(b);(i)++)
#define loop_rev(i,a,b) for(ll (i)=(a);(i)>=(b);(i)--)
#define fast ios_base::sync_with_stdio(0);	cin.tie(0);	cout.tie(0);
using namespace std;


void solve_code(){
  int r,c;
  cin>>r>>c;

  int a[r][c];
  rep(i,r)rep(j,c) cin>>a[i][j];

  int dp[r][c];

  if(a[r-1][c-1]>0) dp[r-1][c-1] = 1;
  else dp[r-1][c-1] = abs(a[r-1][c-1]) + 1;

	loop_rev(i,r-2,0) dp[i][c-1] = max((dp[i+1][c-1] - a[i][c-1]), 1);
	loop_rev(j,c-2,0) dp[r-1][j] = max((dp[r-1][j+1] - a[r-1][j]), 1);

	int points;
	loop_rev(i,r-2,0){
		loop_rev(j,c-2,0){
			points = min(dp[i+1][j], dp[i][j+1]);
			dp[i][j] = max(points - a[i][j], 1);
		}
	}

	cout<< dp[0][0];

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
