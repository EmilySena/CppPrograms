#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{
	double numbers[]{1,2,3,4,5};
    for(int number : numbers){
        cout<<number<<endl;
    }
    cout<<"Or test 2"<<endl;
    for(auto number : numbers){
        cout<<number<<endl;
    }
    double average_number{};
    double running_sum{};
    int size{};
    for(auto number : numbers){
        running_sum+=number;
        ++size;
    }
    
    
    average_number=running_sum/size;
    cout<<fixed<<setprecision(1);
    cout<<"\nThe average is "<<average_number<<endl;
    
    for(auto c : "This is a test"){
        cout<<c;
    }
    cout<<endl;
    for(auto c : "This is a test"){
        if(c!=' ')
            cout<<c;
    }
    cout<<endl;
    for(auto c : "I love you"){
        if(c==' '){
            cout<<"\t";
        }
        else{
            cout<<c;
        }
    }
    cout<<endl;
	return 0;
}
