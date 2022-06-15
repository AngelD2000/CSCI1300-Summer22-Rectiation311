#include<iostream>
using namespace std; 

int main(){
    int height = 0; 
    cout<<"Enter a height: ";
    cin >> height; 
    for(int i = 0; i < 5; i++){
        for(int j = 0; j <= i; j++){
            cout<<i + j;
        }
        cout<<endl;
    }
}