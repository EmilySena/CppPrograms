#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int age{0};
    float height{0};
    float weight{0};
    double average{0.0};
    bool equal{false};
    bool not_equal {false};
    cout<<boolalpha;
    cout<<"Age: ";
    cin>>age;
    cout<<"height: ";
    cin>>height;
    cout<<"weight: ";
    cin>>weight;
    average= static_cast<double>(age*height)/(weight*weight);
    cout<<"+=======================+"<<endl;
    cout<<average<<endl;
    
    equal=(weight==weight);
    not_equal=(height!=height);
    cout<<"equal weight: "<<equal<<endl;
    cout<<"not equal: "<<not_equal<<endl;
    cout<<endl;
	return 0;
}
