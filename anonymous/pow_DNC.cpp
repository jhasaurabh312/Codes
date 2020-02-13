#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,i;
        cin>>n;

        string s;
        cin>>s;


       ll count[0]=0,count[1]=0,count[2]=0,ans=0,flag=0;
        while(flag!=3){
            for(i=flag;i<n;i+=3){
              if(s[i]=='G') count[0]++;
              else if(s[i]=='A') count[1]++;
              else count[2]++;
            }
             sort(count,count+3);
             ans+=count[0]+count[1];
             flag++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
