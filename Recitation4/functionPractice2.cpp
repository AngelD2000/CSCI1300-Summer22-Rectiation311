#include <iostream>
using namespace std;

double addFunc(double num1, double num2){
    return (num1 + num2);
}
double multFunc(double num1, double num2){
    return (num1 * num2);
}

int main(){
    double x = 3.5;
    double y = 2.0;
    double z = 1.2;

    cout<<multFunc(addFunc(x, y), z)<<endl;
}