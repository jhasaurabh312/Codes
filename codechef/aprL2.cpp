#include<bits/stdc++.h>
#define lb "\n"
#define mod 1000000007
#define ll long long int
#define rep(i,n)    for(int (i)=0;(i)<n;(i)++)
#define loop(i,a,b) for(int (i)=(a);(i)<(b);(i)++)
#define fast 	ios_base::sync_with_stdio(0);	cin.tie(0);	cout.tie(0);
using namespace std;

struct Activitiy
{
  int start, finish;
} ;

bool activityCompare(Activitiy s1, Activitiy s2)
{
  return (s1.start > s2.start);
}

void printMaxActivities(Activitiy arr[], int n)
{
  ll flag=0,index=0;
  ll sum=0;
   sort(arr, arr+n, activityCompare);
    rep(i,n){
      if(arr[i].start >= arr[i].finish){
         sum+=arr[i].start;
     }
     else{
         flag=1;
         index=i;
         break;
     }
    }
    if(flag){
    loop(i,index,n)
     sum+=arr[i].finish;
    }

    cout<<sum;
}

// write code for the question inside the function solve_code()
void solve_code(){
  int n;
  cin>>n;

  struct Activitiy *arr ;
  arr = (struct Activitiy*) malloc (n * sizeof(struct Activitiy));

  rep(i,n)
   cin>>arr[i].start ;
  rep(i,n)
  cin>>arr[i].finish ;

   printMaxActivities(arr, n);

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
