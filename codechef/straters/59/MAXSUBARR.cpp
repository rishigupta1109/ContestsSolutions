#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll func(vector<ll> A,vector<ll> B)
{
    int n = A.size(), m = B.size();
    //maxlsum indicates the maximum sum of subarrays
    //from left side of array A
    //maxrsum indicates the maximum sum subarray
    //from right side of array A
    ll lsum=A[0], rsum=A[n-1], maxlsum=A[0], maxrsum=A[n-1];
    for(int i=1; i<n; i++)
    {
        lsum += A[i];
        maxlsum = max(maxlsum,lsum);
    }
    for(int i=n-2; i>=0; i--)
    {
        rsum += A[i];
        maxrsum = max(maxrsum,rsum);
    }
    ll fval = max(maxlsum,maxrsum);
    for(int i=0; i<m; i++)
    {
        if(B[i] > 0)
        {
            //Appending positive values of array B to the maximum
            //sum subarray side(maxlsum/maxrsum) of the array A.
            fval += B[i];
        }
    }
    return fval;
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i=0; i<t; i++)
	{
	   int n;
	   cin >> n;
	   vector<ll> A(n);
	   for(int j=0; j<n; j++)
	   {
	       cin >> A[j];
	   }
	   int m;
	   cin >> m;
	   vector<ll> B(m);
	   for(int j=0; j<m; j++)
	   {
	       cin >> B[j];
	   }
	   cout << func(A,B) << endl;
	}
	return 0;
}

