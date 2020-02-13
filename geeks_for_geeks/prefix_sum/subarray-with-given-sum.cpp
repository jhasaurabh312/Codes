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
   ll n,k,x,s=0;
   cin>>n>>k;

   ll sum[n+1];
   sum[0]=0;
   rep(i,n){
     cin>>x;
     s+=x;
     sum[i+1]=s;
   }

   if(s<k) cout<<"-1";
   else{
      ll l=1,r=1,flag=0;
      while(r<=n && l<=n+1){
        ll val = sum[r]-sum[l-1];
        if(val==k) {
          flag=1;
          break;
        }
        else if(val>k) l++;
        else r++;
      }

      // cout<<flag<<endl;
      if(flag==1) cout<<l<<" "<<r;
      else cout<<"-1";
   }



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
