#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int f=1;
        for(int i=n;i>1;i--)
        {
            f=f*i;
        }
        cout<<f<<endl;
    }
	return 0;
}
