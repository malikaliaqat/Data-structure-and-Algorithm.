#include<iostream>
using namespace std;
void printnumber(int n)
{
	if (n>0)
	{
		printnumber(n-1);
		cout<<n<<endl;
	}
}
int main ()
{
	int n;
	cout<< "enter the number:"<<endl;
	cin>>n;
	printnumber(n);
}