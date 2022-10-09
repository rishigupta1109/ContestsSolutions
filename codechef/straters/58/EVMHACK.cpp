#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int test;
	cin>>test;
	while(test--){
	    int a,b,c,p,q,r;
	    cin>>a>>b>>c>>p>>q>>r;
	    int half = (p+q+r)/2;
	    if((p+b+c)>half || (a+q+c)>half || (a+b+r)>half)cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}
	return 0;
}
