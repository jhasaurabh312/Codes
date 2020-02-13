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
  ll i,n,q;
 	    cin>>n>>q;

 	    ll a[n+1],query[q+1],value[n+1];

 	    for(i=0;i<n;i++)
 	     cin>>a[i];


 	    ll maxi = a[0];
 	    value[0] = maxi;
 	    for(i=1;i<n;i++){
 	        maxi = max(maxi,a[i]);
 	        value[i] = maxi;
 	    }

 	    for(i=0;i<q;i++){
 	        cin>>query[i];
 	        cout<<value[query[i]-1]<<endl;
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
