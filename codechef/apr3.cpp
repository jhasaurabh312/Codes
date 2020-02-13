#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
	ll t;
	cin>>t;
	while(t--){
	    ll n,a,b,x,y,z;
	    cin>>n>>a>>b>>x>>y>>z;

      vector<int>v;

	    ll i,s,l;
	    for(i=0;i<n;i++){
        cin>>s;
        while(s!=0){
          v.push_back(s);
          s=s/2;
        }
      }
	    sort(v.rbegin(),v.rend());

	    ll d=0;
      ll count=0;

      if((z-b)%y==0)
      d=(z-b)/y - 1;
     else
      d=(z-b)/y;



      ll l=v.size();
     ll flag=1;

	    ll r=a+d*x;
	    if(r<z){
        for(i=l-1;i>=;i--)
        {
          r+=v[i];
          count++;
          if(r>=z){
            flag=0;
            break;
          }
        }
      }
      else
       cout<<"0\n";

     if(flag==0)
      cout<<count<<"\n";
     else
      cout<<"RIP\n";

	}
	return 0;
}
