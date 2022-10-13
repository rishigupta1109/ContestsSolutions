#include <bits/stdc++.h>
using namespace std;

void func(vector<int> v)
{
    int n = v.size(), maxidx = -1, i;
    vector<int> maxval(n,0);
    maxval[0] = v[0];
    for(i=1; i<n; i++)
    {
        //Maximum until index is calculated by
        //comparing Maximum value until i-1 index and 
        //value at index i 
        if(v[i] > maxval[i-1])
        {
            //Finding an array index which has value
            //bigger than all of its predecessors.
            maxidx = i;
            break;
        }
        maxval[i] = max(maxval[i-1], v[i]);
    }
    if(i==n)
    {
        cout << "-1" << endl;
        return ;
    }
    int lsize = maxidx; //Array1 size
    int rsize = n-maxidx; //Array2 size
    cout << lsize << endl;
    for(int i=0; i<maxidx; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    cout << rsize << endl;
    for(int i=maxidx; i<n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    return ;
}

int main() {
    int t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for(int j=0; j<n; j++)
        {
            cin >> v[j];
        }
        func(v);
    }
	return 0;
}

