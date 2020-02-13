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
  ll n,m,flag=0;
        cin>>n>>m;
   
        ll a[n+1][m+1],i,j;
        char x;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
              cin>>x;
              if(x=='.')
               a[i][j]=0;
              else
               a[i][j]=1;
            }

        }

        vector<ll>row,col,min_col_index,min_row_index;

        for(i=0;i<n;i++){
            ll count_in_row = 0;
            for(j=0;j<m;j++){
              if(a[i][j]==0)
               count_in_row++;
            }
            row.push_back(count_in_row);
        }

        for(j=0;j<m;j++){
            ll count_in_col = 0;
            for(i=0;i<n;i++){
              if(a[i][j]==0)
               count_in_col++;
            }
            col.push_back(count_in_col);
        }

        ll min_row=row[0];
        for(i=0;i<n;i++){
            if(row[i]<min_row){
                min_row = row[i];
                min_row_index.clear();
                min_row_index.push_back(i);
            }
            else if(row[i]==min_row)
             min_row_index.push_back(i);
        }

        ll min_col=col[0];
        for(i=0;i<m;i++){
            if(col[i]<min_col){
                min_col = col[i];
                min_col_index.clear();
                min_col_index.push_back(i);
            }
            else if(col[i]==min_col)
             min_col_index.push_back(i);
        }

        ll ans = min_col + min_row;

        for(auto it1=min_row_index.begin();it1!=min_row_index.end();it1++){
           for(auto it2=min_col_index.begin();it2!=min_col_index.end();it2++){
              if(a[*it1][*it2]==0){
                 flag=1;
                 break;
              }
           }

           if(flag){
             ans-=1;
             break;
           }

        }

         cout<<ans<<endl;

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
