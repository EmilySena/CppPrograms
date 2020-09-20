#include <iostream>
#include <cmath>
using namespace std;
double fahrenheit_to_celsius(double fahrenheit){
    double celsius{};
    celsius=round((5.0/9.0)*(fahrenheit-32));
    return celsius;
}
double fahrenheit_to_kelvin(double fahrenheit){
    double kelvin{};
    kelvin=round((5.0/9.0)*(fahrenheit-32)+273);
    return kelvin;
}


void temperature_conversion(double fahrenheit_temperature) {
    

    double celsius_temperature{};
    double kelvin_temperature{};
    celsius_temperature=fahrenheit_to_celsius(fahrenheit_temperature);
    kelvin_temperature=fahrenheit_to_kelvin(fahrenheit_temperature);
    
    cout << "The fahrenheit temperature " << fahrenheit_temperature << " degrees is equivalent to " << celsius_temperature << " degrees celsius and " << kelvin_temperature << " degrees kelvin.";
}
int main(){
    double fahrenheit_temperature{};
    cout<<"Enter a temperature in Fahrenheit: ";
    cin>>fahrenheit_temperature;
    cout<<endl;
    temperature_conversion(fahrenheit_temperature);
    cout<<endl;
    return 0;
}