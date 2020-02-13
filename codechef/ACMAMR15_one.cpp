#include <bits/stdc++.h>
#define lb "\n"
#define mod 1000000007
#define ll long long int
#define rep(i,n)    for(int (i)=0;(i)<n;(i)++)
#define loop(i,a,b) for(int (i)=(a);(i)<(b);(i)++)
#define loop_rev(i,a,b) for(int (i)=(a);(i)>=(b);(i)--)
#define fast ios_base::sync_with_stdio(0);	cin.tie(0);	cout.tie(0);
using namespace std;

void solve_code(){
  ll n,q,k;
  cin>>n;

  int a[n+1];
  loop(i,0,n) cin>>a[i];

  sort(a,a+n);
  cin>>q;
  rep(i,q){
    cin>>k;

    int x = n/(k+1);
    if(n%(k+1)!=0) x++;

    ll sum=0;
    rep(j,x+1) sum+=a[j];
    cout<<sum<<endl;
  }

}

int main(){
   fast;
  ll test,j;
  cin>>test;
  for(j=1;j<=test;j++){
    // cout<<"Case #"<<j<<" :"<<" ";
    solve_code();
  }
  return 0;
}
