#include <iostream>
using namespace std;

int main() {
	int T,N;
	cin>>T;
	for(int i=0;i<T;i++)
	{
	    cin>>N;
	    bool leadingZero=true;
	    while(N>0)
	    {
	        if(N%10==0 && leadingZero)
	        {
	             N/=10;
	             continue;
	        }
	        leadingZero=false;
	        cout<<N%10;
	        N/=10;
	    }
	    cout<<endl;
	}
	return 0;
}
