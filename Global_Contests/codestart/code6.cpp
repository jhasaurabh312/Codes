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
		int arr[n][n];

		rep(i,n) rep(j,n) cin>>arr[i][j];

		int start_col = 0;
		int end_col = n-1;

    ll ans=0;

		while(start_col<=end_col){
			int mini = 10000000;
			int start_row = start_col;
			int end_row = end_col;

			loop(i,start_row,end_row+1) mini = min(mini,arr[i][start_col]);
			loop(i,start_row,end_row+1) mini = min(mini,arr[i][end_col]);


			loop(i,start_col,end_col+1) mini = min(mini,arr[start_row][i]);
			loop(i,start_col,end_col+1) mini = min(mini,arr[end_row][i]);


			start_col++;
			end_col--;

			ans+=mini;
		}

		cout<<ans;

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
