// CPP program to find if x is a
// perfect square.
#include <bits/stdc++.h>
using namespace std;

bool isPerfectSquare(long double x)
{
// Find floating point value of
// square root of x.
long double sr = sqrt(x);

// If square root is an integer
return ((sr - floor(sr)) == 0);
}

int main() {
long double x = 5;
while(x<=81*5){
  if (isPerfectSquare(x)) {
    cout << x <<"  ";
    x++;
  }
else
	x++;
}

return 0;
}
