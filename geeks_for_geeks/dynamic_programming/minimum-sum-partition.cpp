// edited by <White_Wolf>: 22/01/2020, 01:22:47

#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long int
#define rep(i,n)    for(ll (i)=0;(i)<n;(i)++)
#define loop(i,a,b) for(ll (i)=(a);(i)<=(b);(i)++)
#define loop_rev(i,a,b) for(ll (i)=(a);(i)>=(b);(i)--)
#define fast ios_base::sync_with_stdio(0);	cin.tie(0);	cout.tie(0);
using namespace std;


ll minDiff(ll arr[], ll n, ll sum){

	bool dp[n+1][sum+1];

	loop(i,0,n) dp[i][0] = true;
	loop(i,1,sum) dp[0][i] = false;

	loop(i,1,n){
		loop(j,1,sum){
			dp[i][j] = dp[i-1][j];
			if (arr[i-1] <= j)
				dp[i][j] =dp[i][j] | dp[i-1][j-arr[i-1]];
		}
	}

	ll diff = INT_MAX;
	loop_rev(j,sum/2,0){
		if (dp[n][j] == true){
			diff = sum-2*j;
			break;
		}
	}
	return diff;
}



void solve_code(){
  ll n;
  cin>>n;

  ll a[n+1],sum=0;
  rep(i,n){
    cin>>a[i];
    sum+=a[i];
  }
  cout<<minDiff(a,n,sum);
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
