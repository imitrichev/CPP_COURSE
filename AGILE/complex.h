#include <iostream>
using std::cout;
using std::ostream;
using std::istream;
//using namespace std;

class Complex
{
    private:
        friend ostream &operator<<(ostream&, const Complex&);
        friend istream &operator>>(istream&, Complex&);
        double real;
        double imaginary;
    public:
        Complex(double = 0.0, double = 0.0);
        Complex operator+(const Complex&) const;
        Complex operator-(const Complex&) const;
        Complex operator*(const Complex&) const;
        const Complex &operator=(const Complex &);
	Complex(const Complex &right);
        const bool operator==(const Complex&) const;
        const bool  operator!=(const Complex&) const;
		inline double Re(){return real;}
		inline double Im(){return imaginary;}
};
