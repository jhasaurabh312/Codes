#include <bits/stdc++.h>
#define lb "\n"
#define mod 1000000007
#define ll long long int
#define rep(i,n)    for(int (i)=0;(i)<n;(i)++)
#define loop(i,a,b) for(int (i)=(a);(i)<(b);(i)++)
#define loop_rev(i,a,b) for(int (i)=(a);(i)>(b);(i)--)
#define fast ios_base::sync_with_stdio(0);	cin.tie(0);	cout.tie(0);
using namespace std;

void solve_code(){
   ll n,count=1;
   cin>>n;
   
   ll a[n+1];
   rep(i,n) cin>>a[i];
   
   loop(i,1,n){
      ll flag=0;
      loop_rev(j,i-1,i-6){
        if(j>=0 && a[j]<=a[i]){
            flag=1;
            break;
        }  
      }
      if(!flag) count++;
     
   }
   cout<<count;
      
      
}

int main(){
   fast;
  ll test,j;
  cin>>test;
  while(test--){
      solve_code();
      cout<<lb;
  }
  return 0;
}
