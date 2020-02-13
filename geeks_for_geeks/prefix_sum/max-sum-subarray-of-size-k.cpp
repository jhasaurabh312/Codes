// edited by <White_Wolf>: 21/01/2020, 23:03:08

#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long int
#define rep(i,n)    for(ll (i)=0;(i)<n;(i)++)
#define loop(i,a,b) for(ll (i)=(a);(i)<(b);(i)++)
#define loop_rev(i,a,b) for(ll (i)=(a);(i)>=(b);(i)--)
#define fast ios_base::sync_with_stdio(0);	cin.tie(0);	cout.tie(0);
using namespace std;

/****************** main code ************************/

void solve_code(){
   ll n,k,x,sum=0;
   cin>>n>>k;

   ll a[n];
   a[0]=0;
   rep(i,n){
     cin>>x;
     sum+=x;
     a[i+1]=sum;
   }

   ll ans = 0;
   for(int i=1;i+k-1<=n;i++) ans = max(ans,(a[i+k-1]-a[i-1]));

   cout<<ans;


}

/**************** main code ends ****************/



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
