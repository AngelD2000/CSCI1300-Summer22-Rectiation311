#include <iostream>
using namespace std;

void print1DArray(int arr[], int size){
    cout<<"Print 1D array"<<endl;
    for(int i = 0; i < size; i++){
        cout<<arr[i] << " ";
    }
    cout<<endl;
    cout<<endl;
}

void print2DArray(int arr[][4], int rowSize){
    cout<<"Print 2D array"<<endl;
    for(int i = 0; i < rowSize; i++){
        for(int j = 0; j < 4; j++){
            cout<<arr[i][j]<< " ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void array_1d(){
    cout<<"Input 4 numbers seperated by space "<<endl;
    int arr[4];
    
    for(int i = 0; i < 4; i++){
        cin >> arr[i];
    }

    print1DArray(arr, 4);
}

void array_2d(){
    cout<<"Input a 2 by 4 matrix on row at a time "<<endl;
    int arr[2][4];
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 4; j++){
            cin >> arr[i][j];
        }
    }

    print2DArray(arr, 2);

}

void passing_arrays1D(int arr[], int size){
    //Loop through array
    for(int i = 0 ; i < size; i++){
        arr[i] *= 5;
    }
}

void passing_arrays2D(int arr[][4], int rowSize){
    for(int i = 0; i < rowSize; i++){
        for(int j = 0; j < 4; j++){
            arr[i][j] *= 3;
        }
    }
}

// void swap(int arr[], int ind1, int ind2){
//     int temp = arr[ind1];
//     arr[ind1] = arr[ind2];
//     arr[ind2] = temp;

// }

// void reverse(int arr[], int size){
//     int start = 0;
//     int end = size - 1;

//     // 2 3 6 2 2 7
//     // 0 1 2 3 4 5
//     //start = 0
//     //end = 5

//     while(start <= end){
//         //swap 
//         start++;
//         end--;
//     }
// }

int main(){
    //array_1d();
    // array_2d();

    // int arr1D[] = {1,2,3,4};
    // passing_arrays1D(arr1D, 4);
    // print1DArray(arr1D, 4);

    int arr2D[2][4] ={
        {1,2,3,4},
        {2,3,4,5}
    };

    int array2D[2][4] = {
        {2,5,7,3},
        {1,6,8,3}
    };
    passing_arrays2D(arr2D, 2);
    print2DArray(arr2D, 2);
}