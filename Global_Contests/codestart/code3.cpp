#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long int
#define rep(i,n)    for(ll (i)=0;(i)<n;(i)++)
#define loop(i,a,b) for(int (i)=(a);(i)<(b);(i)++)
#define loop_rev(i,a,b) for(int (i)=(a);(i)>=(b);(i)--)
#define input_num(n) ll n; cin>>n;
#define input_str(s) string s; cin>>s;
#define input_arr(x,n) int x[n]; rep(i,n) cin>>x[i];
#define fast ios_base::sync_with_stdio(0);	cin.tie(0);	cout.tie(0);
using namespace std;

ll gcd(ll a, ll b)
{
	if (b == 0)
		return a;
	return gcd(b, a % b);
}

// Returns LCM of array elements
ll findlcm(ll arr[], ll n)
{
	// Initialize result
	ll ans = arr[0];

	// ans contains LCM of arr[0], ..arr[i]
	// after i'th iteration,
	for (ll i = 1; i < n; i++)
		ans = (((arr[i] * ans)) /
				(gcd(arr[i], ans)));

	return ans;
}

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
    input_num(h);
    input_arr(a,3);
		input_num(k);

		ll dp[h+1][k+1];
		memset(dp,0,sizeof(dp));

		loop(i,1,k+1) dp[0][i]=0;
		loop(i,1,h+1) dp[i][0]=0;

    dp[0][0]=1;


		 loop(j,1,h+1){
			 loop(i,1,k+1){
				 if(j-a[0]>=0 && dp[j-a[0]][i-1]>0) dp[j][i] += dp[j-a[0]][i-1];
				 if(j-a[1]>=0 && dp[j-a[1]][i-1]>0) dp[j][i] += dp[j-a[1]][i-1];
				 if(j-a[2]>=0 && dp[j-a[2]][i-1]>0) dp[j][i] += dp[j-a[2]][i-1];

	 	 	}
	 }

	 // loop(i,1,h+1){
		//  loop(j,1,k+1) cout<<dp[i][j]<<" ";
		//  cout<<endl;
	 // }

	 cout<<dp[h][k]%MOD;

}


int main(){
  #ifndef ONLINE_JUDGE
    freopen("/home/badboy/Desktop/input.txt","r",stdin);
    freopen("/home/badboy/Desktop/output.txt","w",stdout);
  #endif

  fast;
	ll test=1;
  // input_num(test);
  while(test--){
      solve_code();
      cout<<endl;
  }
  return 0;
}
