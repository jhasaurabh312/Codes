#include<bits/stdc++.h>
#define lb "\n"
#define mod 1000000007
#define ll long long int
#define rep(i,n)    for(int (i)=0;(i)<n;(i)++)
#define loop(i,a,b) for(int (i)=(a);(i)<(b);(i)++)
#define fast ios_base::sync_with_stdio(0);	cin.tie(0);	cout.tie(0);
using namespace std;


// write code for the question inside the function solve_code()

int main(){
  fast;
  ll test;
  cin>>test;

  if(test%4==0)
   cout<<"1 A"<<endl;
  else if(test%4 == 1)
    cout<<"0 A"<<endl;
  else if(test%4 == 2)
     cout<<"1 B"<<endl;
  else
     cout<<"2 A"<<endl;

  return 0;
}
