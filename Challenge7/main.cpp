#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> vector1;
    vector <int> vector2;
    vector1.push_back(10);
    vector1.push_back(20);
    cout<<"\nVector1"<<endl;
    cout<<vector1.at(0)<<endl;
    cout<<vector1.at(1)<<endl;
    cout<<"size of vector 1 is "<<vector1.size()<<endl;
    vector2.push_back(100);
    vector2.push_back(200);
    cout<<"\nVector2"<<endl;
    cout<<vector2.at(0)<<endl;
    cout<<vector2.at(1)<<endl;
    cout<<"size of vector 2 is "<<vector2.size()<<endl;
    vector<vector<int>> vector_2d;
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    cout<<"\nVector2d before"<<endl;
    cout<<vector_2d.at(0).at(0)<<"   "
    <<vector_2d.at(0).at(1)<<endl;
    cout<<vector_2d.at(1).at(0)<<"   "
    <<vector_2d.at(1).at(1)<<endl;
    vector1.at(0)=1000;
    cout<<"Vector2d after"<<endl;
    cout<<vector_2d.at(0).at(0)<<"   "
    <<vector_2d.at(0).at(1)<<endl;
    cout<<vector_2d.at(1).at(0)<<"   "
    <<vector_2d.at(1).at(1)<<endl;
    cout<<endl;
    cout<<"Vector1 now"<<endl;
    cout<<vector1.at(0)<<endl;
    cout<<vector1.at(1)<<endl;
    cout<<"size of vector 1 is "<<vector1.size()<<endl;
    cout<<endl;
    
	return 0;
}
