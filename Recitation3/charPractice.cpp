#include <iostream>
using namespace std;

int main(){
    int input = 0; 
    char ch = 'z'; 
    cout<<"How many letters in the alphabet would you like to print: ";
    cin >> input;

    for(int i = 0; i < input; i++){
        cout<<ch;
        ch -= 1; 

    }
    cout <<endl; 
}