#include <iostream>
#include <iomanip>
using namespace std;

int function_activation_count {0};

double a_penny_doubled_everyday(   int, double         );

void amount_accumulated() {


    double total_amount{};
    int days{25};
    double penny{0.01};
    total_amount=a_penny_doubled_everyday(days, penny);
    cout <<  "If I start with a penny and doubled it every day for 25 days, I will have $" << setprecision(10) << total_amount;
}

double a_penny_doubled_everyday(  int n, double   total_amount      ) {//----WRITE THE FUNCTION PARAMETER LIST WITHIN THE PARENTHESES
    function_activation_count++;

    if(n==1){
        return total_amount=0.01;
    }
    total_amount= 2*a_penny_doubled_everyday((n-1),total_amount);
    return total_amount;
 
}

int test_function_activation_count() {
    return function_activation_count;
}
int main(){
    amount_accumulated();
    cout<<endl;
    return 0;
}