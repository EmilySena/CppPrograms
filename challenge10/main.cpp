#include <iostream>
#include <cstring>
using namespace std;

#include <iostream>
#include <cstring>
#include <string>
using namespace std;

void cpp_strings() {
    
    string unformatted_full_name {"StephenHawking"};
    string first_name{};
    string last_name{};
    first_name=unformatted_full_name.substr(0,7);
    last_name=unformatted_full_name.substr(7,7);
    string formatted_full_name{};
    formatted_full_name=first_name+last_name;
    formatted_full_name.insert(7, " ");
    
    cout << formatted_full_name;
}
using namespace std;

/*void strings_and_functions() {
    
    //----WRITE YOUR CODE BELOW THIS LINE----
    char first_name[20]{'B','j','a','r','n','e'};
    char last_name[20]{'S','t','r','o','u','s','t','r','u','p'};
    char whole_name[50]{};
    int first_name_length{strlen(first_name)};
    size_t last_name_length{strlen(last_name)};
    strcpy(whole_name,first_name);
    strcat(whole_name,last_name);
    size_t whole_name_length{strlen(whole_name)};
    
    
    
    
    //----WRITE YOUR CODE ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
    
    cout << "The length of the first name, " << first_name << ", is " << first_name_length << " letters long and the length of the last name, " << last_name << ", is " << last_name_length << " letters long. This means that the length of the whole name must be " << whole_name_length << " letters long.";
}*/
int main(){
    //strings_and_functions();
    cpp_strings();
    return 0;
}