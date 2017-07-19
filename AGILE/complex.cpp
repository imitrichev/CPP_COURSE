#include "complex.h"

Complex::Complex(double r, double i)
{
    this->real = r;
    this->imaginary = i;
    std::cout<<"Default constructor\n";
}

Complex Complex::operator+(const Complex& operando2) const
{
    return Complex(real + operando2.real,imaginary + operando2.imaginary);
}

Complex Complex::operator-(const Complex& operando2) const
{
    return Complex(real - operando2.real,imaginary - operando2.imaginary);
}

const Complex& Complex::operator=(const Complex &right)
{
    real = right.real;
    imaginary = right.imaginary;
    std::cout<<"Assignment operator\n";
    return *this;
}

Complex::Complex(const Complex &right)
{
    real = right.real;
    imaginary = right.imaginary;
    std::cout<<"Copy constructor\n";
}


Complex Complex::operator*(const Complex &operando2) const
{
    return Complex((real * operando2.real) - (imaginary * operando2.imaginary), (real * operando2.imaginary) + (imaginary*operando2.real));
}

const bool Complex::operator==(const Complex &right) const
{
    if((real == right.real) && (imaginary == right.imaginary))
        return true;
    else
        return false;
}

const bool Complex::operator!=(const Complex &right) const
{
    if((real != right.real) || (imaginary != right.imaginary))
        return true;
    else
        return false;
}

ostream &operator<<(ostream&output, const Complex &complex) 
{
    output << '(' << complex.real << "," << complex.imaginary << ')';
    return output;
}

istream &operator>>(istream&input, Complex &complex)
{
    input.ignore();
    input >> complex.real;
    input.ignore();
    input >> complex.imaginary;
    input.ignore();
    return input;
}
