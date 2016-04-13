#include <cassert>
#include <iostream>
#include <cstdlib>
#include <ctime>

#include "Matrix.h"

Matrix::Matrix(int n): n(n)
{
    matrix = new double* [n];
    for (int i = 0; i < n; i++) {
        matrix[i] = new double[n];
    }
}

Matrix::~Matrix()
{
    delMatrix();
}

Matrix::Matrix(const Matrix &other)
{
    copyMatrix(other);
}

Matrix &Matrix::operator=(const Matrix &other)
{
    if (this != &other) {
        delMatrix();
        copyMatrix(other);
    }
    return *this;
}

const double &Matrix::operator()(int i, int j) const
{
    assert("Index out of bounds!" && i >= 0 && j >= 0 && i < n && j < n);
    return matrix[i][j];
}

double &Matrix::operator()(int i, int j)
{
    assert("Index out of bounds!" && i >= 0 && j >= 0 && i < n && j < n);
    return matrix[i][j];
}

Matrix &Matrix::operator+=(const Matrix &rhs)
{
    assert(n == rhs.n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] += rhs(i, j);
        }
    }

    return *this;
}


// friend
Matrix operator+(Matrix lhs, const Matrix &rhs)
{
    lhs += rhs;
    return lhs;
}


Matrix &Matrix::operator*=(const Matrix &rhs)
{
    assert(n == rhs.n);

    Matrix newMatrix(*this);

    // fill();

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = 0;
            for (int k = 0; k < n; k++) {
                matrix[i][j] += newMatrix(i,k)*rhs(k,j);
            }
        }
    }

    return *this;
}

// friend
Matrix operator*(Matrix lhs, const Matrix & rhs)
{
    lhs *= rhs;
    return lhs;
}

Matrix &Matrix::operator*=(double scalar)
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] *= scalar;
        }
    }
    return *this;
}

// friend
Matrix operator*(Matrix lhs, double scalar)
{
    lhs *= scalar;
    return lhs;
}

void Matrix::transpose()
{
    Matrix newMatrix(*this);

    for (int i = 0; i<n; i++) {
        for (int j = 0; j<n; j++) {
            matrix[i][j] = newMatrix(j, i);
        }
    }
}

void Matrix::print() const
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void Matrix::sort() {
    bool swapped = false;
    double temp = 0;

    do
    {
        swapped = false;

        // Traversing two dimensions as one
        for (size_t i = 1; i < n * n; i++) {
            if (matrix[(i - 1)/n][(i - 1)%n] > matrix[i/n][i%n])
            {
                temp = matrix[(i-1)/n][(i - 1)%n];
                matrix[(i - 1)/n][(i - 1)%n] = matrix[i/n][i%n];
                matrix[i/n][i%n] = temp;

                swapped = true;
            }
        }
    } while (swapped);
}

void Matrix::randomize() {

    srand(time(NULL));

    for (int i = 0; i < n; i++) {
        for (int j = 0; i < n; j++) {
            matrix[i][j] = rand() % 100;
        }
    }
}

void Matrix::fill() {
    for(int i =0; i < n; i++){
        for(int j = 0; j < n; j++){
            matrix[i][j] = 0;
        }
    }
}

void Matrix::copyMatrix(const Matrix &other)
{
    n = other.n;
    matrix = new double* [n];
    for (int i = 0; i < n; i++) {
        matrix[i] = new double[n];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = other(i,j);
        }
    }
}

void Matrix::delMatrix()
{
    for (int i = 0; i < n; i++) {
        delete[] matrix[i];
    }
    delete matrix;
}

