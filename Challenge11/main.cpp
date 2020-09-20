#include <iostream>
#include <vector>
#include <string>
using namespace std;
void display_menu();
void print_numbers(vector<int>&v);
void add_number(vector<int>&v);
void display_mean(vector<int>&v);
void display_smallest(vector<int>&v);
void display_largest(vector<int>&v);
void switch_choice(char selection, vector<int>&v);
void flow(vector<int>&v);

void display_menu(){
    cout<<"\nP - Print numbers\n"
    <<"A - Add a number\n"
    <<"M - Display mean of the numbers\n"
    <<"S - Display the smallest number\n"
    <<"L - Display the largest number\n"
    <<"Q - Quit\n\n"
    <<"Enter your choice: ";
    
}
void print_numbers(vector<int>&v){
    if(v.size()==0){
        cout<<"[] - the list is empty"<<endl;
    }else{
    cout<<"[ ";
    for(size_t i{0}; i<v.size(); ++i){
        cout<<v.at(i)<<" ";
    }
    cout<<"]"<<endl;
    }
    
}
void add_number(vector<int>&v){
    cout<<"Enter an integer to add to the list: ";
    int number{};
    cin>>number;
    v.push_back(number);
    cout<<"\n"<<number<<" added\n";
}
void display_mean(vector<int>&v){
  double mean{0.0};
  double sum{0.0};
  if(v.size()!=0){
    for(size_t i{0}; i<v.size(); ++i){
       sum=sum+v.at(i); 
    }
    mean=sum/v.size();
    cout<<"The mean number is "<<mean<<endl;
    
  }
  else{
      cout<<"Unable to calculate the mean - no data"<<endl;
  }
}
void display_smallest(vector<int>&v){
   if(v.size()!=0){
       int small{v.at(0)};
       for(size_t i{0}; i<v.size(); ++i){
           if(small>v.at(i))
               small=v.at(i);
       }
       cout<<"The smallest number is "<<small<<endl;
   } 
   else{
        cout<<"Unable to determine the smallest number - list is empty";
        cout<<endl;
   }
}
void display_largest(vector<int>&v){
    if(v.size()!=0){
        int large{v.at(0)};
        for(size_t i{0}; i<v.size(); ++i){
            if(large<v.at(i))
                large=v.at(i);
        }
        cout<<"\nThe largest number is "<<large<<endl;
    }
    else{
        cout<<"\nUnable to determine the largest number - list is empty";
        cout<<endl;
    }
}
void switch_choice(char selection, vector<int>&v){
    switch(selection){
            case 'p':
            case 'P':
                print_numbers(v);
                break;
            case 'a':
            case 'A':
                add_number(v);
                break;
            case 'm':
            case 'M':
                display_mean(v);
                break;
            case 's':
            case 'S':
                display_smallest(v);
                break;
            case 'l':
            case 'L':
                display_largest(v);
                break;
            case 'q':
            case 'Q':
                cout<<"\nGoodbye!"<<endl;
                cout<<endl;
                break;
            default:
                cout<<"\nUnknown selection, please try again"<<endl;
                cout<<endl;
    }
}
void flow(vector<int>&v){
    bool done{false};
    do{
    display_menu();
    char selection{};
    cin>>selection;
    switch_choice(selection,v);
    if(selection=='q'||selection=='Q')
        done=true;
    }while(!done);
    
}
int main(){
    vector<int>list;
    flow(list);
    return 0;
}