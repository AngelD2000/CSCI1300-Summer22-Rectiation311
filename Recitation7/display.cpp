#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

// Use a power of 3 as width to avoid rounding issues, order 8 max
const int WIDTH = 10;  // 3^8

void display(char a[][WIDTH], int height, int order, ostream* out) {
    for(int i = 0; i < (height * (order + 1)); i++) {
        for(int j = 0; j < WIDTH; j++) {
            *out << ((int)a[i][j]) << " ";
        }
        *out << endl;
    }
}

int main(){
    int height = 100;

    char arr[100 * 20][WIDTH] = {0};

    int order = 0;

    ofstream fout;
    fout.open("display.pgm");

    // Output PGM file header
    fout << "P2" << endl;
    fout << WIDTH << " " << height*(order+1) << endl;
    fout << 255 << endl; // Max pixel intensity

    display(arr, height, order, &fout);
    
}