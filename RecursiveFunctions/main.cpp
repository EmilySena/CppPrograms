#include <iostream>
using namespace std;
unsigned long long fatorial (unsigned long long n){
    return (n==0) ? 1 : n*fatorial(n-1);
}
unsigned long long fibonacci(unsigned long long n){
    return (n<=1) ? n : (fibonacci(n-1)+fibonacci(n-2));
}

int main(int argc, char **argv)
{
	int num{};
    cin>>num;
    cout<<"The fatorial of "<<num<<" is "<<fatorial(num);
    cout<<endl;
    cout<<"Fibonacci "<<num<<"th is "<<fibonacci(num);
    cout<<endl;
for(int i{1}; i<=num; ++i){
    cout<<fibonacci(i);
    cout<<endl;
}
    cout<<endl;
	return 0;
}
