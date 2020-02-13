#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
	ll t;
	cin>>t;
	while(t--){
	    ll n,i,j,l;
	    ll a[10];
	    for(i=0;i<6;i++)
	     a[i]=0;

	    cin>>n;
	    for(i=0;i<n;i++){
	        string s;
	        cin>>s;
	        l=0;
	        l=s.length();
	       for(j=0;j<l;j++){
	          if(s[j]=='c')
	            a[0]++;
	          else if(s[j]=='o')
	            a[1]++;
	          else if(s[j]=='d')
	             a[2]++;
	          else if(s[j]=='e')
	             a[3]++;
	          else if(s[j]=='h')
	            a[4]++;
	          else if(s[j]=='f')
	            a[5]++;

	       }
         // cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<" "<<a[3]<<" "<<a[4]<<" "<<a[5]<<" ";

	    }

	    a[0]/=2;
	    a[3]/=2;

	    ll min=a[0];
	    for(i=1;i<6;i++){
	        if(min > a[i])
	         min=a[i];
	    }
	    cout<<min<<"\n";
	}
	return 0;
}
