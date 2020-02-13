#include<bits/stdc++.h>
#define lb "\n"
#define mod 1000000007
#define ll long long int
#define rep(i,n)    for(int (i)=0;(i)<n;(i)++)
#define loop(i,a,b) for(int (i)=(a);(i)<(b);(i)++)
#define fast ios_base::sync_with_stdio(0);	cin.tie(0);	cout.tie(0);
using namespace std;


// write code for the question inside the function solve_code()
void solve_code(){
   string s;
   cin>>s;
   ll n = s.length();
   ll arr[n+1],i,sum=0;
   char value[n+1];

   rep(i,n){
     arr[i] = s[0];
     sum+=(s[0]-97);
   }

   rep(i,n){
     if(sum >= 25){
       a[n-1-i] = 97+25;
       sum -= 25;
     }
     else if(sum >= 0 && sum <25){
       a[n-1-i] = 97+sum;
       sum = 0;
     }
     else if(sum<=0)
      a[n-1-i] = 97;
   }
}

int main(){
  fast;
  ll test;
  cin>>test;
  while(test--){
    solve_code();
    cout<<lb;
  }
  return 0;
}
