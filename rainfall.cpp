#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int X;
	    cin>>X;
	    if(X<3)
	    cout<<"LIGHT\n";
	    else if((X>=3)&&(X<7))
	    cout<<"MODERATE\n";
	    else
	    cout<<"HEAVY\n";
	}
	return 0;
}
