#include<iostream>
using namespace std;

int main(){
    int row, col, max;
    cout << "Enter the array's row size: ";
    cin >> row;

    cout << "Enter the array's column size: ";
    cin >> col;

    if (row + col < 2){
        cout << "The size is too small. Both are to be at least 1" << endl;
    }
    else {
        int array[row][col];
        for (int i = 0; i < row; i++){
            for (int j = 0; j < col; j++){
                cout << "Enter value in array[" << i << "][" << j << "]: ";
                cin >> array[i][j];
            }
            cout << endl;
        }
    
        max = array[0][0];

        for (int i = 0; i < row; i++){
            for (int j = 0; j < col; j++){
                if (max < array[i][j]){
                    max = array[i][j];
                }
            }
        }

        cout << "Largest number is: " << max << endl;
    }
    return 0;
}