#include <iostream>
using namespace std; 

int main(){
    string strInput = "";
    cout<<"Enter a string: "; 
    getline(cin, strInput);
    string output = "";
    int len = strInput.length();

    for(int i = 0; i < len; i++){
        output = output + strInput.at(i) + "|";
    }
    
    cout<<output<<endl;


    
}