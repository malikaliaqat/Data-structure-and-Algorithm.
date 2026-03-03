#include<iostream>
using namespace std;
void printtable (int n , int mul)
{
	if(mul>=10)
	{
		return;
	}
	cout<<n<<"*"<<mul<<"="<<n*mul<<endl;
	printtable(n,mul+1);
}
int main ()
{
	int n;
	cout<<"enter number:"<<endl;
	cin>>n;
	 printtable ( n , 1);
}
