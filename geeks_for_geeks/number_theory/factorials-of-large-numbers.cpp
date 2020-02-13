// edited by <White_Wolf>: 23/01/2020, 00:07:23

#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long int
#define rep(i,n)    for(ll (i)=0;(i)<n;(i)++)
#define loop(i,a,b) for(ll (i)=(a);(i)<=(b);(i)++)
#define loop_rev(i,a,b) for(ll (i)=(a);(i)>=(b);(i)--)
#define fast ios_base::sync_with_stdio(0);	cin.tie(0);	cout.tie(0);
using namespace std;

ll find_len(ll x, ll res[], ll len) {
	ll div = 0;
	rep(i,len) {
		ll rem = div + res[i] * x ;
		res[i] = rem % 10;
		div = rem/10;
	}

	while (div!=0){
		res[len] = div%10;
    len++;
		div = div/10;
	}
	return len;
}



void solve_code(){
  ll n;
  cin>>n;

  ll res[1000000];
	res[0] = 1;
	ll len = 1;

	loop(i,2,n) len = find_len(i, res, len);
	loop_rev(i,len-1,0) cout << res[i];
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
