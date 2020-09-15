#include <iostream>
#include <vector>
using namespace std;
int calculate_pairs(vector<int> vec) {
    int result{};
    if(vec.size()<=1){
        result = {};
    }else{
        int sum{};
      for(size_t i=0; i<vec.size(); ++i){
          for (size_t j=i+1; j<vec.size(); ++j){
                sum=sum + vec.at(i)*vec.at(j);  
          }
      }
        result = sum;
    }
    return result;
}

int main()
{   vector<int> vec1{1,2,3};
    vector<int> vec2{2,4,6,8,7};
    cout<<"Vec1 result = "<<calculate_pairs(vec1)<<endl;
    cout<<"Vec2 result = "<<calculate_pairs(vec2)<<endl;
    double average{};
    double sum{};
    int size{};
    for(size_t i{0}; i<vec2.size(); i++){
        sum=sum+vec2.at(i);
        size++;
    }
    
    average=sum/size;
    cout<<"the average is "<<average<<endl;
	
	return 0;
}
