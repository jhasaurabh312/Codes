#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
  ll n,i,flag=0,val=0;
  cin>>n;

  ll a[n+1];
  a[0]=0;
  for(i=1;i<=n;i++){
      cin>>a[i];
      val = max(val,a[i]);
  }


  ll sum[n+1],map[val+1],boo[val+1];
  sum[0]=0;
  for(int i=1;i<=n;i++){
    sum[i]=sum[i-1]+a[i];
        if(a[i]>0){
            if(map[a[i]]==0){
                if(boo[a[i]]==0){
                    map[a[i]]=1;
                    boo[a[i]]=1;
                }
                else{
                    flag=0;
                    break;
                }
            }
            else{
                flag=0;
                break;
            }
        }
        else{
            if(map[abs(a[i])]==1){
                if(boo[abs(a[i])]==1){
                    map[abs(a[i])]=0;
                    boo[abs(a[i])]=2;
                }
                else{
                    flag=0;
                    break;
                }
            }
            else{
                flag=0;
                break;
            }
        }

        if(flag==1 && sum[i]==0){
          if(i==n) 
              cout<<"1\n"<<n<<endl;
          else
              cout<<"2\n"<<i<<" "<<(n-i)<<endl;

          i=n+1;
        }
 }

  if(flag==0) cout<<"-1\n";
	return 0;
}
