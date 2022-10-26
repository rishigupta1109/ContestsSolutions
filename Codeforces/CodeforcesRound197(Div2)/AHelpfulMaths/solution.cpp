#include <vector>
#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main(){

    string s;
    cin >> s;
    vector<int> n;
    for (int i=0; i<s.length(); i+=2){
        n.push_back((int)(s[i])-48);
    }
    sort(n.begin(), n.end());
    for(int i=0; i<n.size()-1; i++){
        cout<<n[i]<<"+";
    }
    cout<<n[n.size()-1]<<endl;

    return 0;
}
