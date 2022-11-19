#ifndef SECONDLABUNKNOWNATTEMPT_MATRIX_H
#define SECONDLABUNKNOWNATTEMPT_MATRIX_H

#include <iostream>
#include <ctime>

using namespace std;

class Matrix {
private:
    int n;
    int m;
    int** array;

public:
    Matrix(int n, int m);
    ~Matrix();
    void fillMatrix();
    Matrix& operator=(const Matrix&);
    friend Matrix operator+(Matrix, Matrix);
    friend Matrix operator-(Matrix, Matrix);
    friend Matrix operator*(Matrix, Matrix);
    void displayMatrix();
    int getN();
    int getArray();

private:
    void doDinamicArray();

};


#endif //SECONDLABUNKNOWNATTEMPT_MATRIX_H
