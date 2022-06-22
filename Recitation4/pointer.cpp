#include<iostream>
using namespace std;

int main(){
    double x = 3;
    double y = 5.3;
    double *ptr1 = &x;
    double *ptr2 = &y;

    cout<<*ptr1<<endl;
    cout<<*ptr2<<endl;

    ptr2 = ptr1;

    cout<<ptr2<<endl; 
    cout<<*ptr2<<endl;


}