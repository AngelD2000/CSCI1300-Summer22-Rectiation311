#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream fout;
    fout.open("test.ppm");

    int h = 100;
    int w = 100;
    int r = 30;

    fout<< "P3" <<endl;
    fout << w <<" "<<h <<endl;
    fout<<255<<endl;

    // int side_len = 5;
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            int x = j - (w/ 2);
            int y = i - (h/2);
            if( ){
                fout<<255 <<" "<< 255 <<" "<< 255 <<" ";
            }
            else{
               fout<<0 <<" "<< 0 <<" "<< 0 <<" ";
            }
        }
        fout<<endl;
    }
}





























// int x = j - (10/2);
// int y = i - (10/2);
// cout<<"( "<<x<<","<<y<<")"<<" ";