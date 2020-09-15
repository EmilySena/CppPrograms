#include <iostream>
using namespace std;
int main()
{
    int small_rooms{0}, large_rooms{0};
    const int price_small{25};
    const int price_large{35};
    const double tax {0.06};
    
	cout<<"Hello, welcome to Frank's Carpet Cleaning Service"<<endl;
	cout<<"How many small rooms would you like cleaned?";
    cin>> small_rooms;
    cout<<"How many large rooms would you like cleaned?";
    cin>> large_rooms;
    cout<<endl<<"Estimate for carpet cleaning service"<<endl;
    cout<<"Number of small rooms:"<<small_rooms<<endl;
    cout<<"Number of large rooms:"<<large_rooms<<endl;
    cout<<"Price per small room: $"<<price_small<<endl;
    cout<<"Price per large room: $"<<price_large<<endl;
    int cost;
    cost= ((price_small*small_rooms)+(price_large*large_rooms));
    cout<<"Cost: $"<<cost<<endl;
    cout<<"Tax: $"<<cost*tax<<endl;
    cout<<"====================================="<<endl;
    cout<<"Total estimate: $"<<((cost*tax)+cost)<<endl;
    cout<<"This estimate is valid for 30 days"<<endl;
    cout<<endl;
    return 0;
}
