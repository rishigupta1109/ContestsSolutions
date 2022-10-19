#include <iostream>
// #include <vector>
using namespace std;

#define prime 1000000007
#define mod(n) (n%prime)

long long int pow2Ans[100001];

int pow2(int a){
    int ans = 1;
    for(int i = 0; i<a; i++){
        ans = mod(mod(ans) * 2);
    }
    return ans;
}

void initPow2Ans(){
    pow2Ans[0] = 1;
    for(int i = 1; i<100001; i++){
        pow2Ans[i] = mod(pow2Ans[i-1]*2);
    }
    return;
}

int main() {
	// your code goes here
	initPow2Ans();
	int T;
	cin >> T;
	
	int n, k;
	string s;
	int ans;
	
	while(T--){
	    cin >> n >> k >> s;
	    if(k == n){ans = 2;}
	    else{
	        if(k%2 == 1){ans = pow2Ans[n];}
    	    else if( k%2 == 0){ans = pow2Ans[n-1];}    
	    }
	    
	   // else if()
	    
	    cout << mod(ans) << endl;
	    
	}
	return 0;
}
