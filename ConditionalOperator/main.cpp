#include <iostream>
using namespace std;
bool even_or_odd(int num){
    return num%2==0;
}
int main()
{   int num{};
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"\ntest 1\n";
    cout<<num<<" is "<<((num%2==0) ? "even" : "odd")<<endl;
	cout<<"\ntest 2\n";
    cout<<num<<" is "<<(even_or_odd(num) ? "even" : "odd")<<endl;
    int a{}, b{};
    cout<<"Enter to number separated by a space: ";
    cin>>a>>b;
    if(a==b){
        cout<<"The numbers are the same!"<<endl;
    }else{
        cout<<"Largest: "<<((a>b) ? a : b)<<endl;
        cout<<"Smallest: "<< ((b<a) ? b : a)<<endl;
    }
	return 0;
}
