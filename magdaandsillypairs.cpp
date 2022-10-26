#include <bits/stdc++.h>
//#define vi vector<int>
#define pii pair<int, int >
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for(int i = 0; i<=n i++)
#define FAST ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
using namespace std;

class Algorithm {
    public:
    // Algorithm's function's
};

class Solution {
    private:
    int odd_count(long long int arr[], int n){

    int sum = 0;

    for(int i=0; i<n; i++){
        if(arr[i]%2 == 1){
            sum++;
        }
    }
    return sum;
}
    public:
    // Solution approach
    void Solve() {
       int n;

	    cin>>n;

	    long long int a[n], b[n];
	    long long int total = 0;
	    for(int i=0; i<n; i++){
	        cin>>a[i];
	        total += a[i];
	    }
	    for(int i=0; i<n; i++){
	        cin>>b[i];
	        total += b[i];
	    }
	    
	    int p = odd_count(a, n);
	    int q = odd_count(b, n);
	    int r = n - (min(p, q)+ min(n-p, n-q));
	    
	    cout<< (total - r)/2<<endl;
    }
};


signed main() {
    FAST;
	int testCases; cin >> testCases ; while(testCases -- ) {
	    Solution S;
	    S.Solve();
	}
	return 0;
}


    /*
    MY TEMPLATE : SANKET DAWANGE
    LOGIC :
    TIME COMPLEXITY :
    SPACE COMPLEXITY :
    DATE: 24/10/2022
    */
    
