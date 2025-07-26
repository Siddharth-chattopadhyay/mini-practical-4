#include<iostream>
using namespace std;

int main(){
    int row, col, a, sum;
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

        cout << "Enter row number: ";
        cin >> a;

        if (a >= row || a < 0){
            cout << "Invlid row" << endl;
        }
        else {
            sum = 0;
            cout << "Elements of row: ";
            for (int i = 0; i < col; i++){
                cout << array[a][i] << " ";
                sum += array[a][i];
            }
            cout << endl;
            cout << "Sum of row is " << sum << endl;
        }

        cout << "Enter column number: ";
        cin >> a;

        if (a >= col || a < 0){
            cout << "Invlid row" << endl;
        }
        else {
            sum = 0;
            cout << "Elements of column: ";
            for (int i = 0; i < row; i++){
                cout << array[i][a] << " ";
                sum += array[i][a];
            }
            cout << endl;
            cout << "Sum of column is " << sum << endl;
        }
    }
    return 0;
}