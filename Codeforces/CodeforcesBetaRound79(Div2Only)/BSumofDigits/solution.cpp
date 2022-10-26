// https://codeforces.com/contest/102/problem/B
#include <bits/stdc++.h>
using namespace std;

long digit_sum(long n){
    long sum=0, m;
    while(n>0){    
        m=n%10;    
        sum=sum+m;    
        n=n/10;    
    }
    return sum;
}

int main(){
    string n;
    cin >> n;

    if(n.length()==1){
        cout << 0 << endl;
        return 0;
    }
    int isum = 0;
    for(char x:n)isum+=stoi(&x);
    int c=1;
    while(isum>=10){
        isum = digit_sum(isum);
        c++;
    }
    cout << c << endl;
}
