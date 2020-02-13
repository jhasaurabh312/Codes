
// edited by <White_Wolf>: 18/01/2020, 10:51:17

#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long int
#define rep(i,n)    for(ll (i)=0;(i)<n;(i)++)
#define loop(i,a,b) for(ll (i)=(a);(i)<=(b);(i)++)
#define loop_rev(i,a,b) for(ll (i)=(a);(i)>=(b);(i)--)
#define fast ios_base::sync_with_stdio(0);	cin.tie(0);	cout.tie(0);
using namespace std;


vector<ll>divisors(ll n){
  vector<ll>v;
  ll half = sqrt(n);
  loop(i,1,half){
      if(n%i==0){
          if(i!=n/i){
            v.push_back(n/i);
            v.push_back(i);
          }
          else v.push_back(i);
      }
  }
  return v;
}


/****************** main code ************************/

void solve_code(){

  ll n,k;
  cin>>n>>k;

  ll a[n+1];
  unordered_map<ll,bool>pre;
  rep(i,n){
    cin>>a[i];
    pre[a[i]]=true;
  }

  ll count=0;
  if(pre[k]) rep(i,n) if(a[i]>k) count++;

  rep(i,n){
    if(a[i]>k){
      vector<ll>v = divisors(a[i]-k);
      ll l = v.size();
      rep(j,l) if(a[i]%v[j]==k && pre[v[j]] && a[i]!=v[j]) count++;

      v.clear();
    }
  }
  cout<<count;
}

/**************** main code ends ****************/



int main(){
  #ifndef ONLINE_JUDGE
    freopen("/home/badboy/Desktop/input.txt","r",stdin);
    freopen("/home/badboy/Desktop/output.txt","w",stdout);
  #endif

  fast;
  ll test;
  cin>>test;

  while(test--){
    solve_code();
    cout<<endl;
  }
  return 0;
}
