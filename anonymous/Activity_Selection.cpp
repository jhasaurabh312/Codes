#include <bits/stdc++.h>
#define ll long long int
using namespace std;


struct Activitiy{
 int start, finish;
} ;

bool activityCompare(Activitiy s1, Activitiy s2){
 return (s1.start < s2.start);
}

// Driver program
int main(){
  int t;
  cin>>t;
  while(t--){
    ll n,m;
    cin>>n>>m;

    struct Activitiy *arr ;

    arr = (struct Activitiy*) malloc (n * sizeof(struct Activitiy));
    ll sum_a=0,sum_b=0;

    for(int i=0;i<n;i++){
      cin>>arr[i].start >>arr[i].finish ;
      arr[i].comp = arr[i].start - arr[i].finish ;
      sum_a+=arr[i].start;
      sum_b+=arr[i].finish;
    }
    cout<<sum_a<<" "<<sum_b<<endl;
    // if(sum_a<=m) cout<<"0"<<endl;
    // else if(sum_b>m) cout<<"-1"<<endl;
    // else cout<<printMaxActivities(arr,n,m,sum_a)<<endl;

  }
 return 0;
}
