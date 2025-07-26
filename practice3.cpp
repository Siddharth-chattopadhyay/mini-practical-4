#include<iostream>
using namespace std;

int main(){
    int n;

    cout << "Enter the size of the row and column: ";
    cin >> n;

    if (n < 1){
        cout << "The size is too small. Size are to be at least 1" << endl;
    }
    else {
        int array[n][n];

        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                cout << "Enter value in array [" << i << "][" << j << "]: ";
                cin >> array[i][j];
            }
            cout << endl;
        }

        cout << "Printing the matrix now:" << endl;

        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                cout << array[j][i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}