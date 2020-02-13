#include <bits/stdc++.h>
# define ll long long int
using namespace std;

int main() {
	ll n,x,y,i,j,count;
    cin>>n>>x>>y;
    
    char b[x+1];
    string a;

    cin>>a;

    for(i=0;i<x;i++){
       if(i != (x-y-1))
        b[i]='0';
       else
        b[i]='1';
    }

    j=0,count=0;
    for(i=n-x ; i<n ; i++){
        if(a[i] != b[j])
         count++;

        j++;
    }

    cout<<count<<"\n";
	return 0;
}
