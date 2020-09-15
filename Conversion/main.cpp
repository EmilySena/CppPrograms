#include <iostream>
using namespace std;

int main()
{   
    int aux;
    double real {0.0};
    double dollar{0.0};
    double result{0.0};
    const double dollar_to_real {5.32};
	cout<<"Hello, I'm going to help you"<<endl;
    cout<<"Here we can convert dollar to real or vice versa"<<endl;
    cout<<"So type 1 if you want to convert real to dollar\n"
    <<"Or type 0 if you want dollar to real\n";
    cin>>aux;
    cout<<"==================================="<<endl;
    if(aux==1){
     cout<<"Real: R$";
     cin>>real;
     result=real/dollar_to_real;
     cout<<"R$ "<<real<<" is USD "<<result<<endl;
    }
    if(aux==0){
        cout<<"Dollar: USD";
        cin>>dollar;
        result=dollar*dollar_to_real;
        cout<<"USD "<<dollar<<" is R$ "<<result<<endl;
    }

    
	return 0;
}
