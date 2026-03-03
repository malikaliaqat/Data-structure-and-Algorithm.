
#include <iostream>

int fibonacci(int n) {
    if (n <= 1)
        return n;
        else{
		
    return fibonacci(n - 1) + fibonacci(n - 2);
}
}
using namespace std;
int main() {
    int n ;
cout<<"enter the number "<<endl;
cin>>n;
    std::cout << "Fibonacci number at position " << n << " is: " << fibonacci(n) << std::endl;
    return 0;
}
