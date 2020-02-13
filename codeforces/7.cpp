#include <bits/stdc++.h>
#define lb "\n"
#define mod 1000000007
#define ll long long int
#define rep(i,n)    for(int (i)=0;(i)<n;(i)++)
#define loop(i,a,b) for(int (i)=(a);(i)<(b);(i)++)
#define looptwo(i,a,b) for(int (i)=(a);(i)<(b);(i)++)
#define fast ios_base::sync_with_stdio(0);	cin.tie(0);	cout.tie(0);
using namespace std;

struct Activity
{
		int start, finish;
};


vector<pair<int,int>> allPalindromeSubstring(string s)
{
    int i=0;
	vector< pair <int,int> > v;
	for (float pivot = 0; pivot < s.length();
								pivot += .5)
	{

		float palindromeRadius = pivot -
								(int)pivot;


		while ((pivot + palindromeRadius) < s.length() && (pivot - palindromeRadius) 	>= 0 && s[((int)(pivot - palindromeRadius))] 	== s[((int)(pivot + palindromeRadius))])
		{
			int a = (int)(pivot - 	palindromeRadius);
			int b = (int)(pivot + palindromeRadius);

			if(a!=b){
				v.push_back(make_pair(a,b));
			}

     	palindromeRadius++;
		}
	}

	return v;
}

int main()
{
    fast;
	  int n,count=0;
	 	string s;

	 	cin>>n;
	 	cin>>s;

	 	vector<pair<int,int>>ptr = allPalindromeSubstring(s);
		int l = ptr.size();

    loop(i,0,l){
			cout<<ptr[i].first<<" "<<ptr[i].second<<endl;
		}

	return 0;
}
