
#include <bits/stdc++.h>
using namespace std;

struct Activitiy
{
 int start, finish;
} ;

bool activityCompare(Activitiy s1, Activitiy s2)
{
 // return (s1.finish < s2.finish);
 return (s1.start < s2.start)

}

void printMaxActivities(Activitiy arr[], int n)
{
 sort(arr, arr+n, activityCompare);
 for(int i=0;i<n;i++)
  cout<<arr[i].start<<" "<<arr[i].finish<<"\n" ;

// 	cout << "Following activities are selected \n";

// 	// The first activity always gets selected
// 	int i = 0;
// 	cout << "(" << arr[i].start << ", " << arr[i].finish << "), ";

// 	// Consider rest of the activities
// 	for (int j = 1; j < n; j++)
// 	{
// 	// If this activity has start time greater than or
// 	// equal to the finish time of previously selected
// 	// activity, then select it
// 	if (arr[j].start >= arr[i].finish)
// 	{
// 		cout << "(" << arr[j].start << ", "
// 			<< arr[j].finish << "), ";
// 		i = j;
// 	}
// 	}
}

// Driver program
int main()
{

   int m;
   cin>>m;

   struct Activitiy *arr ;

   arr = (struct Activitiy*) malloc (m * sizeof(struct Activitiy));

   for(int i=0;i<m;i++)
    cin>>arr[i].start >>arr[i].finish ;

// 	int n = sizeof(arr)/sizeof(arr[0]);
// 	cout<<n<<"\n" ;
 printMaxActivities(arr, m);
 return 0;
}
