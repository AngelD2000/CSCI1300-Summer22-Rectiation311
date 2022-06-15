#include <iostream>
#include <string>
using namespace std;

int main(){
    string strInput = "";
    int pos1 = 0; 
    int pos2 = 0; 
    cout<<"Enter a string: "<<endl;
    getline(cin, strInput);
    cout<<"Enter the positions you would like to switch seperated by space: " <<endl; 
    cin >> pos1; 
    cin >> pos2; 

    char tmp = strInput[pos1]; 
    strInput[pos1] = strInput[pos2]; 
    strInput[pos2] = tmp; 

    cout<<strInput<<endl; 



    
}