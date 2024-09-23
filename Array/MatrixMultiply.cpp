#include <iostream>

using namespace std;

class MatrixMultiplication {
public:
    void multiplyMatrices(int matrixA[][10], int matrixB[][10], int result[][10], int rowsA, int colsA, int rowsB, int colsB) {
        for (int i = 0; i < rowsA; ++i) {
            for (int j = 0; j < colsB; ++j) {
                result[i][j] = 0;
                for (int k = 0; k < colsA; ++k) {
                    result[i][j] += matrixA[i][k] * matrixB[k][j];
                }
            }
        }

        cout << "Result of Matrix Multiplication:" << endl;
        for (int i = 0; i < rowsA; ++i) {
            for (int j = 0; j < colsB; ++j) {
                cout << result[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int rowsA, colsA, rowsB, colsB;

    cout << "Enter rows and columns for Matrix A: ";
    cin >> rowsA >> colsA;
    cout << "Enter rows and columns for Matrix B: ";
    cin >> rowsB >> colsB;

    if (colsA != rowsB) {
        cout << "Matrix multiplication is not possible." << endl;
        return 1;
    }

    int matrixA[10][10], matrixB[10][10], result[10][10];

    cout << "Enter elements of Matrix A:" << endl;
    for (int i = 0; i < rowsA; ++i) {
        for (int j = 0; j < colsA; ++j) {
            cin >> matrixA[i][j];
        }
    }

    cout << "Enter elements of Matrix B:" << endl;
    for (int i = 0; i < rowsB; ++i) {
        for (int j = 0; j < colsB; ++j) {
            cin >> matrixB[i][j];
        }
    }

    MatrixMultiplication matrixMultiplication;
    matrixMultiplication.multiplyMatrices(matrixA, matrixB, result, rowsA, colsA, rowsB, colsB);

    return 0;
}
