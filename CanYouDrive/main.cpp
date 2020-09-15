#include <iostream>
using namespace std;
void can_you_drive(int age){
    const int age_for_drive{18};
    if(age>=age_for_drive){
        cout<<"Yes - you can drive!"<<endl;
    }
    else{
        int n{age_for_drive-age};
        cout<<"Sorry, come back in "<<n<<" years"<<endl;
    }
    
    
    
}

int main()
{
	int age{0};
    cout<<"Enter your age: ";
    cin>>age;
    can_you_drive(age);
    
	return 0;
}
