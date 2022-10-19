#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	
	while(T--){
	    int n; cin >> n;
	    int A[n];
	    
	    for(int i = 0; i<n; i++) {cin >> A[i];}
	    
	    bool dup_exists = false;
	    unordered_set<int> str;
	    
	    for(int i = 0; i<n; i++){
	        if(str.find(A[i])!=str.end()){
	            dup_exists = true;
	        }
	        else{
	            str.insert(A[i]);
	        }
	    }
	    
	    int count = str.size();
	    
	    if(count %2 == 0){
	        cout << "YES\n";
	    }
	    else{
	        if(dup_exists) cout << "YES\n";
	        else cout << "NO\n";
	    }
	}
	return 0;
}
