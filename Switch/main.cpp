#include <iostream>
using namespace std;

int main()
{
	char letter_grade{};
    cout<<"Enter the letter grade you expect: ";
    cin>>letter_grade;
    cout<<endl;
    switch(letter_grade){
        case 'a':
        case 'A':
            cout<<"You need a 90 or above"<<endl;
            break;
        case 'b':
        case 'B':
            cout<<"You need a 80-89"<<endl;
            break;
        case 'c':
        case 'C':
            cout<<"You need a 70-79"<<endl;
            break;
        case 'd':
        case 'D':
            cout<<"You need a 60-69"<<endl;
            break;
        case 'e':
        case 'E':
            cout<<"Between 50-59"<<endl;
            break;
        case 'f':
        case 'F':
            cout<<"Less than 49"<<endl;
            break;
        default:
            cout<<"Sorry, not a valid grade"<<endl;
            
    }
	return 0;
}
