#include <iostream>
#include <sstream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int count=0;
	    ostringstream str1;
	    str1<<n;
	    string  s =str1.str();
	    
	    int k = (int)s.size();
	    for(int i=0;i<k;i++)
	    {
	        if(s[i]=='4')
	        {
	            count++;
	        }
	        else
	        {
	            count=count;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
