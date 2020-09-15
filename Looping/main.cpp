#include <iostream>
#include <vector>
using namespace std;

int main()
{   
   /* cout<<"Display numbers between 0 and 11\n";
    for(int i{1}; i<=10; ++i){
        cout<<i<<endl;
        
    }
    cout<<"Display odd numbers between 0 and 11\n";
    for(int i{1}; i<=10; i+=2){
        cout<<i<<endl;
        
    }
    cout<<"Display numbers between 11 and 0\n";
    for(int i{10}; i>0; --i){
        cout<<i<<endl;
        
    }
    cout<<"Display dozens between 11 and 101\n";
    for(int i{10}; i<=100; i+=10){
        cout<<i<<endl;
        
    }*/
    /*for(int i{0}, j{10}; (i=j); ++i, --j){
        cout<<i<<" + "<<j<<" = "<<i+j<<endl;
    }*/
    for(int i{1}; i<=100; ++i){
        cout<<i<< ((i%10==0) ? "\n" : " ");
    }
    vector<int> nums{10,20,30,40,50};
    for(unsigned i{0}; i<nums.size(); ++i){
        cout<<nums[i]<<endl;
    }
    
    cout<<endl;
    
	
	return 0;
}
