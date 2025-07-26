#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of the array elements: ";
    cin >> n;

    int array[n];

    for (int i = 0; i < n; i++){
        cout << "Enter value in array[" << i << "]: ";
        cin >> array[i];
    }


    cout << "Negative values in array are: ";
    for (int i = 0; i < n; i++){
        if (array[i] < 0){
            cout << array[i] << " ";
        }
    }
    cout << endl;
    return 0;
}