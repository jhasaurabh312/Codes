// edited by <White_Wolf>: 23/01/2020, 01:18:20

#include <bits/stdc++.h>
#define MOD 1000003
#define ll long long int
#define rep(i,n)    for(ll (i)=0;(i)<n;(i)++)
#define loop(i,a,b) for(ll (i)=(a);(i)<=(b);(i)++)
#define loop_rev(i,a,b) for(ll (i)=(a);(i)>=(b);(i)--)
#define fast ios_base::sync_with_stdio(0);	cin.tie(0);	cout.tie(0);
using namespace std;

ll fact[16]={0};

ll power(ll x, ll y, ll p) {
    ll res = 1;
    x = x % p;
    while (y > 0) {
        if (y & 1)
            res = (res*x) % p;

        y = y>>1;
        x = (x*x) % p;
    }
    return res;
}


void solve_code(){
   int boo[26] = {0};
   ll ans = 0,flag=1;
   string s;

   cin>>s;
   int l = s.length();
   rep(i,l){
     boo[s[i]-'a']++;
     if(boo[s[i]-'a']>1){
       flag=0;
       break;
     }
   }

   if(flag){
     rep(i,l){
       int x = s[i]-'a', count=0;
       rep(j,x)if(boo[j]>0) count++;
       boo[x]=0;

       ans = (ans + (count * fact[l-(i+1)]) % MOD ) % MOD;
     }
   }

    if(flag==0) cout<<"0";
    else cout<<(ans+1)%MOD;
}


int main(){
  #ifndef ONLINE_JUDGE
    freopen("/home/badboy/Desktop/input.txt","r",stdin);
    freopen("/home/badboy/Desktop/output.txt","w",stdout);
  #endif

  fast;
  ll test;
  cin>>test;

  fact[0]=1;
  loop(i,1,15) fact[i] = (fact[i-1] * i) % MOD;

  while(test--){
    solve_code();
    cout<<endl;
  }
  return 0;
}
