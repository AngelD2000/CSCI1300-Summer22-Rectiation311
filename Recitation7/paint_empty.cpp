#include<iostream>
#include <cmath>
#include <fstream>

using namespace std; 

const int SIZE = 2187;  // 3^8


void paint_empty(char a[][SIZE], int start_y, int height, int start_x, int width, int order) {
    //TODO: Paint a square given the starting points and heights 
    for(int i = start_y; i < start_y + height ; i++){
        for(int j = start_x; j < start_x + width; j++){
            a[i][j] = '0';
        }
    }
}

void cantor_iter(char a[][SIZE], int start_y, int height, int start_x, int width, int order){
    //TODO: Paint a black square giving starting points and heights
    for(int i = start_y; i < start_y + height ; i++){
        for(int j = start_x; j < start_x + width; j++){
            a[i][j] = 1;
        }
    }
}

void display(char a[][SIZE], int height, int order, ostream* out) {
   // Logic for outputting the 2D array as pixel values
   for(int i = 0; i < height* (order + 1); i++){
    for(int j = 0; j < SIZE; j++){
        cout << ((int)a[i][j] - 1) * 255 * (-1) <<" ";
    }
    cout <<endl;
   }
}


int main() {
    int height = 100;

    char arr[100 * 20][SIZE] = {0};

    int order = 1;
    int start_y = 0;
    int start_x = 0;


    ofstream fout;
    fout.open("paint_empty.pgm");

    // Output PGM file header
    fout << "P2" << endl;
    fout << SIZE << " " << height*(order+1) << endl;
    fout << 255 << endl; // Max pixel intensity

    //Paints the top
    cantor_iter(arr, 0, height, 0, SIZE, order);
    //Paints bottom 1/3
    cantor_iter(arr, start_y + height, height, 0, start_x + (SIZE/3), order);
    //Paints bottom 2/3
    paint_empty(arr, start_y + height, height, start_x +(SIZE/3), (SIZE/3), order);
    //Paints bottom 3/3
    cantor_iter(arr, start_y + height, height, start_x +(2*(SIZE/3)), (SIZE/3), order);

    display(arr, height, order, &fout);

}