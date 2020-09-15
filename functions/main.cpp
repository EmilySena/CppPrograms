#include <iostream>
using namespace std;
bool isDivideBy(int number, int a, int b)
{
  return ((number%a==0)&&(number%b==0));
}
int main()
{
	int a{0}, b{0}, number{0};
    cout<<"Type 3 numbers, separeted by spaces:";
    cin>>number>>a>>b;
    if(isDivideBy(number, a, b)!=0){
        cout<<number<<" is divide by "<<a<<" and "<<b;
        cout<<endl;
    }
    else{
         cout<<number<<" is not divide by "<<a<<" and "<<b;
         cout<<endl;   
    }
	return 0;
}
