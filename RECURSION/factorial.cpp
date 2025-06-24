#include <iostream>
using namespace std;
int  factorial(int n)
{
	if(n==0){

	return 1;
}

else
{
	return n*factorial( n-1);
	
}
}
int main ()
{
	int n;
	cout<< "enter the number:"<<endl;
	cin>>n;
	 if(n<0)
	 {
	 	cout<<"factorial is not define"<<endl;
	 }
	 else
	 {
	 	cout<<"factorial of "<<n<<"is"<<factorial(n)<<endl;
	 }
}
