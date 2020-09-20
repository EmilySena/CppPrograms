#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main()
{   
    char full_name[50]{};
    char last_name[20]{};
    char first_name[20]{};
    char copy[50];
    cout<<"Enter your first name: ";
    cin>>first_name;
    cout<<"Enter your last name: ";
    cin>>last_name;
    cout<<"Hello, "<<first_name<<" your first name has "<< strlen(first_name)<<" characters"<<endl;
    cout<<"and your last name, "<<last_name<<" has "<< strlen(last_name)<<" characters"<<endl;
    strcpy(full_name, first_name); //copy first_name to full_name
    strcat(full_name," "); //concartenate full_name and a space
    strcat(full_name, last_name); //concartenate last name to full_name
    cout<<"Your full name is "<<full_name<<endl;
    //cout<<"Enter your full name: ";
    //cin.getline(full_name,50);
    //cout<<"Your full name is "<<full_name<<endl;
    cout<<"-----------------------"<<endl;
    strcpy(copy, full_name);
    if(strcmp(copy, full_name)==0)
        cout<<copy<<" and "<<full_name<< " are the same"<<endl;
    else
        cout<<copy<<" and "<<full_name<<" are different"<<endl;
    for(size_t i{ 0 }; i < strlen(full_name); ++i) {
        if(isalpha(full_name[i]))
            full_name[i] = toupper(full_name[i]);
    }
    cout << "Your full name is " << full_name << endl;
    cout<<"Name = "<<full_name<<endl;
    
    
	
	return 0;
}
