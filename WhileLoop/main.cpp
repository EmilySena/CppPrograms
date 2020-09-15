#include <iostream>
using namespace std;

int main()
{
    int i{1};
    while (i<=10){
        if(i%2==0)
            cout<<i<<endl;
        ++i;
    }
    //While for input validation
    int num{};
    cout<<"Enter a number less than 100: ";
    cin>>num;
    while(num>=100){
        cout<<"Enter a number less than 100: ";
        cin>>num;   
    }
    cout<<"thanks!"<<endl;
    bool done{false};
    int number{};
    while(!done){
        cout<<"Enter a number between 1 and 5: ";
        cin>>number;
        if (number<=1||number>=5)
            cout<<"Out of rage, try again"<<endl;
        else{
            cout<<"Thanks"<<endl;
            done=true;
        }
    }
	
	return 0;
}
