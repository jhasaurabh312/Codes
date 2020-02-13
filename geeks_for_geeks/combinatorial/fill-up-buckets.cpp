#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;

	    int a[n];
	    for(int i=0;i<n;i++) cin>>a[i];
	    sort(a,a+n);

	    long long int res = 1,MOD=1000000007;
	    for(int i=0;i<n;i++) res = (res * (a[i]-i))%MOD ;

	    cout<<res<<endl;
	}
	return 0;
}
