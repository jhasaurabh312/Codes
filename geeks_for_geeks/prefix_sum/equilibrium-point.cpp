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
   ll n,s=0;
   cin>>n;

   ll a[n+1];
   vector<ll> v;
   rep(i,n){
     cin>>a[i];
     s+=a[i];
     v.push_back(s);
   }

   int index=0,flag=0;
   if(n>=3){
     loop(i,1,n){
       if(s%2 == a[i]%2){
         // cout<<i<<" "<<s<<" "<<a[i]<<" "<<(s-a[i])/2<<" ";
         index = lower_bound(v.begin(), v.end(), (s-a[i])/2) - v.begin();
         // cout<<v[index]<<endl;
         if(index==i-1 && v[index]==(s-a[i])/2){
           index=i;
           flag=1;
           break;
         }
       }
     }
     if(flag==0) cout<<"-1";
     else cout<<(index+1);
   }
   else if(n==2) cout<<"-1";
   else if(n==1) cout<<"1";
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
