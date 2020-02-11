#include <iostream>
using namespace std;

int main() {

	int a,sum=0;
	cin>>a;
	while(a!=0)
	{
	    if(abs(a)>10)
	        sum=sum+abs((a%10));
	    else
	        sum=sum+(a%10);
	    a=a/10;
	}
	cout<<"sum of digits:"<<sum;
	return 0;
}
