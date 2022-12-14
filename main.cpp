#include "Matrix/Matrix.h"

#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int n, m;
    cout << "Enter number of lines: ";
    cin >> n;
    cout << "Enter number of columns: ";
    cin >> m;

    Matrix firstMatrix(n, m);
    firstMatrix.fillMatrix();
    Matrix secondMatrix(n, m);
    secondMatrix.fillMatrix();
    Matrix resultMatrix(n, m);
    resultMatrix.fillMatrix();

    int menuPoint;
    cout << "Enter what u want to do:" << endl;
    cout << "1) add matrix" << endl
         << "2) subtract one matrix from another" << endl
         << "3) multiply matrices" << endl
         << "4) multiply a matrix by a number" << endl;
    cout << "Enter another symbol to exit" << endl;
    cin >> menuPoint;

    if (menuPoint == 1) {
        try {
            if (resultMatrix.getN() == resultMatrix.getM()) {
                resultMatrix = firstMatrix + secondMatrix;
                resultMatrix.displayMatrix();
            } else {
                throw (resultMatrix.getN() - resultMatrix.getM());
            }
        } catch(int n) {
            cout << "Your matrix is not square" << endl;
            cout << "Difference your lines and columns are: " << abs(n);
        }
    } else if (menuPoint == 2) {
        try {
            if (resultMatrix.getN() == resultMatrix.getM()) {
                resultMatrix = firstMatrix - secondMatrix;
                resultMatrix.displayMatrix();
            } else {
                throw (resultMatrix.getN() - resultMatrix.getM());
            }
        } catch (int n) {
            cout << "Your matrix is not square" << endl;
            cout << "Difference your lines and columns are: " << abs(n);
        }
    } else if (menuPoint == 3) {
        try {
            if (resultMatrix.getN() == resultMatrix.getM()) {
                resultMatrix = firstMatrix * secondMatrix;
                resultMatrix.displayMatrix();
            } else {
                throw (resultMatrix.getN() - resultMatrix.getM());
            }
        } catch (int n) {
            cout << "Your matrix is not square" << endl;
            cout << "Difference your lines and columns are: " << abs(n);
        }
    } else return 0;
}
