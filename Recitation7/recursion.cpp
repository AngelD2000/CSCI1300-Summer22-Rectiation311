#include <iostream>
using namespace std;

int addition(int num){
    if(num == 0){
        cout <<"HI"<<endl;
        return 0;
    }
    return 5 + addition(num - 1);
}

int main(){
    cout << addition(3)<<endl;
}