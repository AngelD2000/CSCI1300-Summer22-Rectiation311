#include  <iostream>
#include <fstream>

using namespace std;

int main(){
    int numStripes = 9;

    int h;
    int w;

    int h_stripe = 0;
    cout << "Enter the height of the strip of pixles"<<endl;
    cin >> h_stripe;

    h = numStripes * h_stripe;
    w = h * 1.9; //Given 

    int square = 0.4 * w; 

    ofstream fout; 
    fout.open("tryFlag.ppm");

    fout<<"P3"<<endl;
    fout<<w<<" "<<h<<endl;
    fout<<255<<endl;

    //White: fout << 255 <<" "<<255<<" "<<255<<" ";
    //Blue: fout << 0 <<" "<<0<<" "<<255<<" ";

    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            if(((i / h_stripe) < 5) && (j < square) ){
                fout << 255 <<" "<<255<<" "<<255<<" ";
            }
            else{
               if( (i/h_stripe) % 2 == 0 ){
                 fout << 255 <<" "<<255<<" "<<255<<" ";
               }
               else{
                fout << 0 <<" "<<0<<" "<<255<<" ";
               }
            }
        }
        fout<<endl;
    } 
}