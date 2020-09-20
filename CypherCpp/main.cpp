#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key  {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
    string encrypt_this{};
    cout<<"Enter what you want to encrypt: "<<endl;
    getline(cin,encrypt_this);
    cout<<"The encrypted message is : "<<endl;
    for(size_t i{0}; i<encrypt_this.length(); i++){
        string letter{encrypt_this[i]};
        size_t position=alphabet.find(letter);
       if (position != string::npos){
            cout<<key[position];
        }
        else{
            cout<<encrypt_this[i];
        }
        
    }
    cout << endl;
    string decrypted{};
    string encrypted{};
    for(char c : encrypt_this)
    {
         size_t position=alphabet.find(c);
       if (position != string::npos){
            char new_char {  key.at(position) };
            encrypted += new_char;
        }
        else{
            encrypted+= c;
        }
    }
     for(char c : encrypted)
    {
         size_t position=key.find(c);
       if (position != string::npos){
            char new_char {  alphabet.at(position) };
            decrypted += new_char;
        }
        else{
            decrypted+= c;
        }
    }
    
    cout<<"Decrypted message is "<<endl;
    cout<<decrypted<<endl;
    return 0;
}