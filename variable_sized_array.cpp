#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,q,s,t,y;
    cin>>n>>q;
    int **b= new int*[n];
    for (int i=0;i<n;i++)
    {   
        cin>>s;
        b[i]=new int[s];
        for(int j=0;j<s;j++)
        {
            cin>>b[i][j];
            
        }
    }
    while(q>0)
    {
        cin>>t>>y;
        cout<<b[t][y]<<endl;
        q--;
    }

    return 0;
}
