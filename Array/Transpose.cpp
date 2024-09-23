#include <iostream>

using namespace std;

class MatrixTranspose {
public:
    void transposeMatrix(int matrix[][10], int rows, int cols) {
        cout << "Transpose of the matrix:" << endl;
        for (int j = 0; j < cols; ++j) {
            for (int i = 0; i < rows; ++i) {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int rows, cols;

    cout << "Enter the number of rows and columns of the matrix: ";
    cin >> rows >> cols;

    int matrix[10][10];

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix[i][j];
        }
    }

    MatrixTranspose matrixTranspose;

    matrixTranspose.transposeMatrix(matrix, rows, cols);

    return 0;
}
