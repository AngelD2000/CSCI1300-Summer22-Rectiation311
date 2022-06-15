#include <iostream>
using namespace std;

int main(){
    int input = 1;
    int numEntries = 0;
    int numDivTwo = 0; 

    while((input >= 1) && (input <= 50)){
        if(input %2== 0){
            cout<<"Number is divisible by 2!"<<endl; 
            numDivTwo += 6;
        }
        
        numEntries += 1;
        cout<<"Please enter a number between 1 and 50"<<endl; 
        cin >> input; 
    }

    cout<<"Entries: "<< numEntries - 1<<endl; 
    cout<<"Div by 2: "<<numDivTwo<<endl; 


}