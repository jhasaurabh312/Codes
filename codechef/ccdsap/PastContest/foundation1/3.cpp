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
   ll n,m,i,x;
   int flag = 1;
   ll first = 0, second=0;

   cin>>n>>m;

   vector<ll>r,g,e;
   rep(i,n){
     cin>>x;
     r.push_back(x);
   }

   rep(i,n){
     cin>>x;
     g.push_back(x);
   }
   rep(i,m){
     cin>>x;
     e.push_back(x);
   }

   while(flag){
     if(*r.begin()>*g.begin()){
       first++;
       if(e.size()!=0){
           r.push_back(*e.begin());
           e.erase(e.begin());
           g.push_back(*e.begin());
           e.erase(e.begin());
       }
     }
     else{
       second++;
       if(e.size()!=0){
           g.push_back(*e.begin());
           e.erase(e.begin());
           r.push_back(*e.begin());
           e.erase(e.begin());
       }
     }

     r.erase(r.begin());
     g.erase(g.begin());

     if(r.size()==0 || g.size()==0)
      flag=0;
   }

   if(first>second)
    cout<<"Radhesh wins";
   else if(first<second)
     cout<<"Geethakoomaree wins"  
   else
      cout<<"Tie";
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
