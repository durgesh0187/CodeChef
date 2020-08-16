#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main() {
	
	 int t;
	 cin>>t;
	 while(t--)
	 {
	     long int n;
	     cin>>n;
	     int last,total,first,sum;
	     last = n%10;
	     total = log10(n);
	     first = n/pow(10,total);
	     sum = last+first;
	     cout<<sum<<endl;
	 }
	return 0;
}
