// edited by <White_Wolf>: 22/01/2020, 16:55:20

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

  sort(a,a+n);

  ll Xor=0;
  loop(i,1,n) Xor = Xor ^ i;
  rep(i,n) Xor = Xor ^ a[i];
  // cout<<Xor<<endl;

  ll bit = Xor & ~(Xor-1);
  // cout<<bit<<endl;

  ll x=0,y=0;
  rep(i,n){
    if(a[i] & bit) x = x ^ a[i];
    else y = y ^ a[i];
  }

  loop(i,1,n){
    if(i & bit) x = x ^ i;
    else y = y ^ i;
  }

  if(a[x-1]==x)cout<<x<<" "<<y;
  else cout<<y<<" "<<x;


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
