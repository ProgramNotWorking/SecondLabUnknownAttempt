#include "Matrix.h"

Matrix::Matrix(const Matrix& someObj) {
    n = someObj.n;
    m = someObj.m;
    array = someObj.array;
}

Matrix::Matrix(int n, int m) {
    this->n = n;
    this->m = m;
}

Matrix::Matrix() {
    this->n = 0;
    this->m = 0;
    this->array = nullptr;
}

Matrix::~Matrix() {
    for (int i = 0; i < n; i++) {
        delete [] array[i];
    }
    delete[] array;
}

void Matrix::doDynamicArray() {
    array = new int* [n];
    for (int i = 0; i < n; i++) {
        array[i] = new int[m];
    }
}

void Matrix::fillMatrix() {
    srand(time(nullptr));
    doDynamicArray();

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            array[i][j] = -10 + rand() % 21;
        }
    }
}

int Matrix::getN() { return n; }

int Matrix::getM() { return m; }

Matrix &Matrix::operator=(const Matrix &someObj) {
    n = someObj.n;
    m = someObj.m;
    array = someObj.array;

    return *this;
}

Matrix operator+(Matrix firstObj, Matrix secondObj) {
    Matrix tempObj(firstObj.n, secondObj.m);

    for (int i = 0; i < firstObj.n; i++) {
        for (int j = 0; j < firstObj.m; j++) {
            tempObj.array[i][j] = firstObj.array[i][j] + secondObj.array[i][j];
        }
    }

    return tempObj;
}

Matrix operator-(Matrix firstObj, Matrix secondObj) {
    Matrix tempObj(firstObj.n, secondObj.m);

    for (int i = 0; i < firstObj.n; i++) {
        for (int j = 0; j < firstObj.m; j++) {
            tempObj.array[i][j] = firstObj.array[i][j] - secondObj.array[i][j];
        }
    }

    return tempObj;
}

Matrix operator*(Matrix firstObj, Matrix secondObj) {
    Matrix tempObj(firstObj.n, firstObj.m);

    for (int i = 0; i < firstObj.n; i++) {
        for (int j = 0; j < firstObj.m; j++) {
            for (int k = 0; k < firstObj.n; k++) {
                tempObj.array[i][j] += firstObj.array[i][k] * secondObj.array[k][j];
            }
        }
    }

    return tempObj;
}

void Matrix::displayMatrix() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}
