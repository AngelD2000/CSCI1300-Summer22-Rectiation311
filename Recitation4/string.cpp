#include <iostream>
using namespace std;

void countRepeatedChar(string str){
    int i = 0;
    char currChar = str.at(i);
    int countRepeatChar = 0;
    for(i = 1; i < str.length(); i++){
        if(str.at(i) == currChar){
            countRepeatChar += 1;
        }
        else{
            cout<<currChar<< ": "<<countRepeatChar<<endl;
            currChar = str.at(i);
            countRepeatChar = 0;
        }
    }
    cout<<currChar<< ": "<<countRepeatChar<<endl;
}


int main(){
    string input;
    cout <<"Please enter a string: "<<endl;
    getline(cin, input);
    countRepeatedChar(input);
}