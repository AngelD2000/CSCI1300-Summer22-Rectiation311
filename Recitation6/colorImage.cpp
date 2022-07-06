#include <iostream>
#include <fstream>
#include <random>
using namespace std; 

int main(){
    ofstream fout;
    fout.open("color.ppm");

    int h = 300;
    int w = 300;

    int stripe_width = 10;

    fout<<"P3"<<endl;
    fout<<w << " "<<h<<endl;
    fout<<255<<endl; 

    for(int i = 0; i < h;i++){
        for(int j = 0; j < w; j++){
            fout << 60 << " "<< 60 <<" "<< 247 << " ";
        }
        fout<<endl;
    }
}