#include <iostream>
using namespace std;

int main()
{
	int dollars{0}, quarters{0}, dimes{0}, nickels{0}, pennies{0};
    int cents{0};
    cout<<"Enter an amount in cents: ";
    cin>>cents;
    if(cents>=0){
       dollars=cents/100;
        cents=cents%100;
        quarters=cents/25;
        cents=cents%25;
      dimes=cents/10;  
      cents=cents%10;
        nickels=cents/5;
        cents=cents%5;
        pennies=cents/1;   
        
    } 
    cout<<endl;
    cout<<"dollars : "<<dollars<<endl;
    cout<<"quarters : "<<quarters<<endl;
    cout<<"dimes : "<<dimes<<endl;
    cout<<"nickels : "<<nickels<<endl;
    cout<<"pennies : "<<pennies<<endl;
    
	return 0;
}
