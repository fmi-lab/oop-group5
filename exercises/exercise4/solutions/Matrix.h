
#ifndef MATRIX_H
#define MATRIX_H
class Matrix {
public:
    Matrix(int n);
    ~Matrix();
    Matrix(const Matrix &other);
    Matrix &operator=(const Matrix &other);
    const double &operator()(int i, int j) const;
    double &operator()(int i, int j);
    Matrix &operator+=(const Matrix &rhs);
    friend Matrix operator+(Matrix lhs, const Matrix &rhs);
    Matrix &operator*=(const Matrix &rhs);
    friend Matrix operator*(Matrix lhs, const Matrix &rhs);
    Matrix &operator*=(double scalar);
    friend Matrix operator*(Matrix lhs, double scalar);
    void transpose();
    void print() const;
    void fill();
private:
    void copyMatrix(const Matrix &other);
    void delMatrix();
    double **matrix;
    int n;
};
#endif
