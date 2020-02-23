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
    input_num(n);
    input_arr(a,3);

    ll x = findlcm(a,3);

    ll count = (n*24)/x;
    cout<<count;


}


int main(){
  #ifndef ONLINE_JUDGE
    freopen("/home/badboy/Desktop/input.txt","r",stdin);
    freopen("/home/badboy/Desktop/output.txt","w",stdout);
  #endif

  fast;
  input_num(test);
  while(test--){
      solve_code();
      cout<<endl;
  }
  return 0;
}
