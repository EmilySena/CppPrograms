#include <iostream>
#include <string>
using namespace std;

int main()
{
	string generator_key{};
    string pyramid_line{};
    getline(cin,generator_key);
    size_t lines {generator_key.length()};
    size_t end_line{(lines*2)-1};
    cout<<end_line;
    cout<<"\n"<<lines<<endl;
    for(size_t i{0}; i<lines; ++i){
        char new_char{generator_key[i]};
        pyramid_line+=new_char;
        if(pyramid_line.length()<end_line){
            for(size_t i{0}; i<lines-1; ++i){
            cout<<" ";
            }
        }
        
        cout<<pyramid_line<<endl;
        if(pyramid_line.length()<end_line){
            for(size_t i{0}; i<lines-1; ++i){
                cout<<" ";
            }
        }
        
        
    }
    
    
    
	return 0;
}
//total lines = size of generator key
/*
cada linha da piramide =
 * linha 0 = word.at(0)


*/