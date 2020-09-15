#include <iostream>
#include <vector>
using namespace std;
void print_vector(vector<int> vec){
    cout<<"[ ";
    for(auto val : vec){
        cout<<val<<" ";
    }
    cout<<"]"<<endl;
}
void average(vector<int> vec){
    double sum{};
    int size{};
    double average_calc{};
    for(size_t i{0}; i<vec.size(); i++){
        sum=sum+vec.at(i);
        size++;
    }
    
    average_calc=sum/size;
    cout<<average_calc;
}
int smallest(vector<int> vec){
    int small{1000};
    for(auto val : vec){
        if (val<small)
            small=val;
    }
    return small;
}

int largest(vector<int> vec){
    int large{};
    for(auto val : vec){
        if (val>large)
            large=val;
    }
    return large;
}
int main()
{   
    vector<int> numbers{};
    int num{};
    bool done{false};
    
    do{
        char selection{};
        cout<<"P - Print numbers\nA - Add a number\n"
        <<"M - Display mean of the numbers\n"
        <<"S - Display the smallest number\n"
        <<"L - Display the largest number\n"
        <<"Q - Quit\n"<<"\nEnter your choice: ";
        cin>>selection;
        switch(selection){
            case 'p':
            case 'P':
                if(numbers.size()==0){
                    cout<<"[] - the list is empty"<<endl;
                }
                else{
                    print_vector(numbers);
                    
                }
                cout<<endl;
                break;
            case 'a':
            case 'A':
                cout<<"Enter an integer to add to the list: ";
                cin>>num;
                numbers.push_back(num);
                cout<<num<<" is added"<<endl;
                cout<<endl;
                break;
            case 'm':
            case 'M':
                if(numbers.size()==0){
                    cout<<"Unable to calculate the mean - no data"<<endl;
                }
                else{
                    cout<<"The mean is : ";
                    average(numbers);
                }
                cout<<endl;
                break;
            case 's':
            case 'S':
                    if(numbers.size()==0){
                        cout<<"Unable to determine the smallest number - list is empty"<<endl;
                    }
                    else{
                        cout<<"The smallest number is "<<smallest(numbers)<<endl;
                    }
                cout<<endl;
                break;
            case 'l':
            case 'L':
                 if(numbers.size()==0){
                        cout<<"Unable to determine the largest number - list is empty"<<endl;
                    }
                     else{
                        cout<<"The largest number is "<<largest(numbers)<<endl;
                    }
                cout<<endl;
                break;
            case 'q':
            case 'Q':
                cout<<"Goodbye!"<<endl;
                cout<<endl;
                done=true;
                break;
            default:
                cout<<"Unknown selection, please try again"<<endl;
                
                
        }
        
        
    }while(!done);
	
	return 0;
}
