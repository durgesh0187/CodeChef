#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        long long n,i,j,k=0;
        cin>>n;
        cin>>i;
        n--;
        while(n--)
        {
            cin>>j;
            k+=abs(j-i) - 1;
            i=j;
        }
        cout<<k<<endl;
        
    }
    
	return 0;
}
