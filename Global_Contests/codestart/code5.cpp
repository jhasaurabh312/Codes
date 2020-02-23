#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long int
#define rep(i,n)    for(ll (i)=0;(i)<n;(i)++)
#define loop(i,a,b) for(int (i)=(a);(i)<(b);(i)++)
#define loop_rev(i,a,b) for(int (i)=(a);(i)>=(b);(i)--)
#define input_num(n) int n; cin>>n;
#define input_str(s) string s; cin>>s;
#define input_arr(x,n) int x[n]; rep(i,n) cin>>x[i];
#define fast ios_base::sync_with_stdio(0);	cin.tie(0);	cout.tie(0);
using namespace std;

void updateArray(ll arr[], int N)
{
	for (int i = 1; i < N; i++)
		arr[i] += arr[i - 1];
}

void add(ll arr[], int N, int lo, int hi, ll val)
{
	ll x = arr[lo]*(val-1);
	arr[lo] += x;
	// if (hi != N - 1) arr[hi + 1] -= val;
	//
	// rep(i,N) cout<<arr[i]<<" ";
	// cout<<endl;

	updateArray(arr,N);
	rep(i,N) cout<<arr[i]<<" ";
	cout<<endl;

}


void solve_code(){
   input_num(n);
	 input_num(m);

   ll arr[n];
	 rep(i,n) arr[i]=10;
	 rep(i,n) cout<<arr[i]<<" ";
   cout<<endl;

	 // memset(arr,10,sizeof(arr));

   int l,h,k;
	 rep(i,m){
		 cin>>l>>h>>k;
		 add(arr,n,l-1,h-1,k);
	 }
	 // printArr(arr,n);
	 ll res=0;


}


int main(){
  #ifndef ONLINE_JUDGE
    freopen("/home/badboy/Desktop/input.txt","r",stdin);
    freopen("/home/badboy/Desktop/output.txt","w",stdout);
  #endif

  fast;
	// ll test=1;
  input_num(test);
  while(test--){
      solve_code();
      cout<<endl;
  }
  return 0;
}
