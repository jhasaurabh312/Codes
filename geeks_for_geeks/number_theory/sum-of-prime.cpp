#include<bits/stdc++.h>
#define lb "\n"
#define mod 1000000007
#define ll long long int
#define rep(i,n)    for(int (i)=0;(i)<n;(i)++)
#define loop(i,a,b) for(int (i)=(a);(i)<(b);(i)++)
#define fast ios_base::sync_with_stdio(0);	cin.tie(0);	cout.tie(0);
using namespace std;

int main(){
    fast;
    ll test;
    cin>>test;

    bool prime[1000001];

    memset(prime, true, 1000001);
    for(ll p=2; p*p<=1000000; p++)
    {
    	if(prime[p] == true)
    	{
    		for (int i=p*p; i<=1000000; i += p)
    			prime[i] = false;
    	}
    }

    while(test--){
      ll n;
      cin>>n;

      if(n%2==1){
         if(prime[n-2]) cout<<"2 "<<(n-2);
         else cout<<"-1";
      }
      else{
          for(ll i=2;i<=n/2;i++){
              ll a = n-i;
              if(prime[a] && prime[i]){
                  cout<<i<<" "<<a;
                  break;
              }
          }
      }

      cout<<lb;
    }
  return 0;
}
