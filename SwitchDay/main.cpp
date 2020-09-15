#include <iostream>
using namespace std;
void display_day(int day_code) {
    switch (day_code){
        case 0:
            cout<<"Sunday";
            break;
        case 1:
            cout<<"Monday";
            break;
        case 2:
             cout<<"Tuesday";
             break;
        case 3:
            cout<<"Wednesday";
            break;
        case 4:
            cout<<"Thursday";
            break;
        case 5:
            cout<<"Friday";
            break;
        case 6:
            cout<<"Saturday";
            break;
        default:
            cout<<"Error - illegal day code";
    }
    
}

int main()
{
	int day_code{};
    cout<<" ============= Day codes ==============\n";
    cout<<"0 = Sunday\n1 = Monday\n2 = Tuesday\n3 = Wednesday\n"
    <<"4 = Thurday\n5 = Friday\n6 = Saturday\n";
    cout<<"Enter the day code: ";
    cin>>day_code;
    cout<<endl;
    display_day(day_code);
    cout<<endl;
	return 0;
}
