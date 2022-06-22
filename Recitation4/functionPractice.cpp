#include <iostream>
using namespace std;


/*

The return type of the function (declared) and the actual return type needs to match

Two functions that have the same name but different return types are not the same function
void type of a function means the function isn’t going to return anything

Before you use a function in main, make sure the function is declared before hand
    There are two ways to do this

Return values of functions, is just another value that could be used

*/

int func(int num1);



int main(){
    cout<<func(func(5))<<endl;
}

int func(int num1){
    if(num1 < 3){
        return num1;
    }
    return num1 + 4;
}