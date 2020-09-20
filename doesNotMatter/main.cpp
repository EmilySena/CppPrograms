#include <iostream>
using namespace std;
unsigned short int expressionsMatter (unsigned short int a , unsigned short int b , unsigned short int c)
{
    int largest{};
    int op{};
    op=a*(b+c);
    largest=op;
    op=a*b*c;
    if(op>largest)
      largest=op;
    op=a+b*c;
    if(op>largest)
      largest=op;
    op=(a+b)*c;
    if(op>largest)
      largest=op;
    op=(a+c)*b;
   if(op>largest)
      largest=op;
  op=a+b+c;
   if(op>largest)
      largest=op;
  
    
    
    return largest ; 
}
int main()
{
	unsigned short int a{},b{},c{};
    cin>>a>>b>>c;
    cout<<"resultado maior = "<<expressionsMatter(a,b,c)<<endl;
	return 0;
}
