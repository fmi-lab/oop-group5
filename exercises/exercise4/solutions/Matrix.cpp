
#include "Matrix.h"
#include <cassert>
#include <iostream>

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

Matrix &Matrix::operator*=(const Matrix &rhs)
{
    assert(n == rhs.n);

    Matrix newMatrix(*this);

    fill();

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                matrix[i][j] += newMatrix(i,k)*rhs(k,j);
            }
        }
    }

    return *this;
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

Matrix operator+(Matrix lhs, const Matrix &rhs)
{
    lhs += rhs;
    return lhs;
}

Matrix operator*(Matrix lhs, const Matrix & rhs)
{
    lhs *= rhs;
    return lhs;
}

Matrix operator*(Matrix lhs, double scalar)
{
    lhs *= scalar;
    return lhs;
}

void Matrix::fill() {
    for(int i =0; i < n; i++){
        for(int j = 0; j < n; j++){
            matrix[i][j] = 0;
        }
    }
}

