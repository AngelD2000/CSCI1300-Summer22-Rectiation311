#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream fout;
    fout.open("black.ppm");

    int h = 100;
    int w = 100;

    fout<<"P3"<<endl;
    fout<<w << " "<<h<<endl;
    fout<<255<<endl; 

    for(int i = 0; i < h;i++){
        for(int j = 0; j < w; j++){
            fout<< 145 << " " << 134 <<" "<< 0<<" ";
        }
        fout<<endl;
    }
}