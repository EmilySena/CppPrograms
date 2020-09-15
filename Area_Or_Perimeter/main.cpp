#include <iostream>
using namespace std;
int area (int a, int b){
    return a*b;
}
int perimeter(int a, int b){
    return (2*a)+(2*b);
}

int main()
{
	int a{}, b{};
    cout<<"You are given the length and width of a 4-sided polygon.\n"
    <<"Enter the length and width: ";
    cin>>a>>b;
    cout<<"Area = "<<area(a,b)<<endl;
    cout<<"Perimeter = "<<perimeter(a,b)<<endl;
    
	return 0;
}
