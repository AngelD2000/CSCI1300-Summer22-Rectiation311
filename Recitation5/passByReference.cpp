#include <iostream>
using namespace std;

void passByValue(int num1, int num2){
    num1 = num1 + 10;
    num2 += 5;
   
}


void passByPointer(int* num1Ptr, int* num2Ptr){ 
    *num1Ptr += 10;
    *num2Ptr += 5;
}

int main(){
    int num1 = 1;
    int num2 = 1;
    
    //Call passByValue
    passByValue(num1, num2);
    cout<<"num1: "<<num1<<endl;
    cout<<"num2: "<<num2<<endl;

    //Call passByPointer
    passByPointer(&num1, &num2);
    cout<<"num1: "<<num1<<endl;
    cout<<"num2: "<<num2<<endl;

}