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
    Matrix(const Matrix&);
    Matrix(int n, int m);
    ~Matrix();
    void fillMatrix();
    Matrix& operator=(const Matrix&);
    friend Matrix operator+(Matrix, Matrix);
    friend Matrix operator-(Matrix, Matrix);
    friend Matrix operator*(Matrix, Matrix);
    void displayMatrix();

private:
    void doDynamicArray();

};


#endif //SECONDLABUNKNOWNATTEMPT_MATRIX_H
