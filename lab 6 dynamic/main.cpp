#include <iostream>
#include <Windows.h>
using namespace std;



void printMatrix(int** matrix, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int N= 0;
    cout<< "N = ";
    double k = 0;
    double* p_N = &k;
    cout <<endl<< p_N <<endl<<p_N+1<< endl;;
    cin >> N;
   
    int** matrix = new int* [N];
    for (int i = 0; i < N; i++) {
        matrix[i] = new int[N];
    }

    cout << "Введіть елементи верхньої половини матриці" << endl;
    for (int i = 0; i < N / 2; i++) {
        for (int j = 0; j < N; j++) {
            cin >> matrix[i][j];
        }
    }

    for (int i = N / 2; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matrix[i][j] = matrix[N - 1 - i][j];
        }
    }

    cout << "Матриця після дзеркального відображення:" << endl;
    printMatrix(matrix, N);

    for (int i = 0; i < N; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}
