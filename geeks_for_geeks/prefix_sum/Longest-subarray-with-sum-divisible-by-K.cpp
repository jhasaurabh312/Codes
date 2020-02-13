// edited by <White_Wolf>: 20/01/2020, 13:50:00

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
   ll n,k;
   cin>>n>>k;

   ll a[n+1],boo[k+1]={0};
   rep(i,n) cin>>a[i];

   ll sum[n+1];
   sum[0]=(a[0]%k+k)%k;
   boo[sum[0]]++;


   loop(i,1,n){
      sum[i]=((sum[i-1]+a[i])%k+k)%k;
	    boo[sum[i]]++;
   }

  ll dp[k+1][2]={0},check[k+1]={0};
  if(boo[0]>=1){
    loop_rev(i,n-1,0){
      if(sum[i]==0){
        dp[0][1]=i+1;
        break;
      }
    }
  }


  loop(i,0,n){
    if(boo[sum[i]]>=2 && sum[i]!=0){
      if(check[sum[i]]==0){
        dp[sum[i]][0]=i+1;
        check[sum[i]]=1;
      }
      else if(check[sum[i]]==1)dp[sum[i]][1]=i+1;
    }

  }

  ll ans = dp[0][1]-dp[0][0];
  // cout<<ans<<endl;
  loop(i,1,k) ans = max((dp[i][1]-dp[i][0]),ans);

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
