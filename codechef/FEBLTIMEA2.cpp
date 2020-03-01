#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long int
#define rep(i,n)    for(ll (i)=0;(i)<n;(i)++)
#define loop(i,a,b) for(ll (i)=(a);(i)<(b);(i)++)
#define loop_rev(i,a,b) for(int (i)=(a);(i)>=(b);(i)--)
#define input_num(n) ll n; cin>>n;
#define input_str(s) string s; cin>>s;
#define input_arr(x,n) ll x[n]; rep(i,n) cin>>x[i];
#define fast ios_base::sync_with_stdio(0);	cin.tie(0);	cout.tie(0);
using namespace std;


ll power(ll x, ll y, ll p) {
    ll res = 1;
    x = x % p;
    while (y > 0) {
        if (y & 1)
            res = (res*x) % p;

        y = y>>1;
        x = (x*x) % p;
    }
    return res;
}

void solve_code(){
  input_num(n);
  input_num(k);
  input_arr(a,n);

  if(k<=2 && n<=1000){

    if(k==1) cout<<"0";
    else if(k==2){
      vector<ll>v1,v2;
      rep(i,n)
         if(a[i]==1) v1.push_back(i);
         else v2.push_back(i);

      if(v1.size()==0 || v2.size()==0) cout<<n;
      else{
        ll maxi = 0;
        if(v1.size()>1){
          rep(i,v1.size()){
            if(i==0){
              maxi = max(maxi,v1[i]);
            }
            else if(i==v1.size()-1){
              maxi = max(maxi,v1[i]-v1[i-1]-1);
              maxi = max(maxi,n-1-v1[i]);
            }
            else{
              maxi = max(maxi,v1[i]-v1[i-1]-1);
            }
          }
        }
        else if(v1.size()==1){
           maxi = max(maxi,v1[0]);
           maxi = max(maxi,n-1-v1[0]);
        }



        if(v2.size()>1){
          rep(i,v2.size()){
            if(i==0){
              maxi = max(maxi,v2[i]);
            }
            else if(i==v2.size()-1){
              maxi = max(maxi,v2[i]-v2[i-1]-1);
              maxi = max(maxi,n-1-v2[i]);
            }
            else{
              maxi = max(maxi,v2[i]-v2[i-1]-1);
            }
          }
        }
        else if(v2.size()==1){
           maxi = max(maxi,v2[0]);
           maxi = max(maxi,n-1-v2[0]);
        }

        cout<<maxi;

      }
    }

  }

  else{

    unordered_map<ll,ll>count;
    vector<vector<ll>>v;
    v.resize(k+1);


    rep(i,n){
      count[a[i]]++;
      v[a[i]].push_back(i);
    }

    int flag=0;
    ll maxi = 0;
    loop(i,1,k+1){
      if(count[i]==0){
        flag=1;
        break;
      }
    }

    if(flag) cout<<n;
    else{
      loop(i,1,k+1){
        rep(j,v[i].size()){
          if(j==0){
            maxi = max(maxi,v[i][j]);
          }
          else if(j >=1 && j< v[i].size()-1) {
            maxi = max(maxi,v[i][j]-v[i][j-1]-1);
          }

          else if(j==v[i].size()-1) {
            maxi = max(maxi,v[i][j]-v[i][j-1]-1);
            maxi = max(maxi,n-1-v[i][j]);
          }
        }
      }
      cout<<maxi;
    }


  }

}


int main(){
  #ifndef ONLINE_JUDGE
    freopen("/home/badboy/Desktop/input.txt","r",stdin);
    freopen("/home/badboy/Desktop/output.txt","w",stdout);
  #endif

  fast;
  // int test=1;
  input_num(test);
  while(test--){
      solve_code();
      cout<<endl;
  }
  return 0;
}
