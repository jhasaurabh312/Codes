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
  ll i,n,m;
  	    cin>>n>>m;

  	    ll a[n+1],b[m+1];

  	    for(i=0;i<n;i++)
  	     cin>>a[i];

  	    for(i=0;i<m;i++)
  	     cin>>b[i];


  	   for(ll p=0;p<=(n+m-2);p++){
  	       ll value = min(p,n-1);
  	       ll mul = 0;
  	       for(i=0;i<=value;i++){
  	           ll j=p-i;
  	           if(j>=0 && j<=m-1)
  	            mul+=a[i]*b[j] ;
  	       }
  	       cout<<mul<<" ";
  	   }
  	   cout<<endl;
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
