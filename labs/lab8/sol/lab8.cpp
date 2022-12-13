#include <sstream>
#include <cmath>
#include <string>
#include <iostream>
using namespace std;

class Complex
{
public:
  Complex();
  Complex(double a, double b);
  Complex(double a);
  double getRealPart() const;
  double getImaginaryPart() const;
  Complex add(const Complex &secondComplex) const;
  Complex subtract(const Complex &secondComplex) const;
  Complex multiply(const Complex &secondComplex) const;
  Complex divide(const Complex &secondComplex) const;
  double abs() const;
  string toString() const;

  Complex &operator+=(Complex &secondComplex);
  Complex &operator-= (Complex &secondComplex);
  Complex &operator*=(Complex &secondComplex);
  Complex &operator/=(Complex &secondComplex);

  double &operator[](const int & index);

  Complex &operator++(); // Prefix ++
  Complex &operator--(); // Prefix ++

  Complex operator++(int dummy); // Postfix ++
  Complex operator--(int dummy); // Postfix --

  Complex operator+(); // Unary +  
  Complex operator-(); // Unary - 

  friend ostream &operator<<(ostream &stream, const Complex &complex);
  friend istream &operator>>(istream &stream, Complex &complex);

private:
  double a;
  double b;
};

Complex operator+(const Complex &cx1, const Complex &c2) 
{
  return cx1.add(c2);
}

Complex operator-(const Complex &cx1, const Complex &c2)  
{
  return cx1.subtract(c2);
}

Complex operator*(const Complex &cx1, const Complex &c2)  
{
  return cx1.multiply(c2);
}

Complex operator/(const Complex &cx1, const Complex &c2) 
{
  return cx1.divide(c2);
}

Complex::Complex()
{
  a = 0;
  b = 0;
}

Complex::Complex(double a, double b)
{
  this->a = a;
  this->b = b;
}

Complex::Complex(double a)
{
  this->a = a;
  this->b = 0;
}

double Complex::getRealPart() const 
{
  return a;
}

double Complex::getImaginaryPart() const 
{
  return b;
}

Complex Complex::add(const Complex &secondComplex) const 
{
  double newA = a + secondComplex.getRealPart();
  double newB = b + secondComplex.getImaginaryPart();
  return Complex(newA, newB);
}

Complex Complex::subtract(const Complex &secondComplex) const 
{
  double newA = a - secondComplex.getRealPart();
  double newB = b - secondComplex.getImaginaryPart();
  return Complex(newA, newB);
}

Complex Complex::multiply(const Complex &secondComplex) const 
{
  double newA = a * secondComplex.getRealPart() - b * secondComplex.getImaginaryPart();
  double newB = b * secondComplex.getRealPart() + a * secondComplex.getImaginaryPart();
  return Complex(newA, newB);
}

Complex Complex::divide(const Complex &secondComplex) const 
{
  double newA = (a * secondComplex.getRealPart() + b * secondComplex.getImaginaryPart()) / (pow(secondComplex.getRealPart(), 2.0) + pow(secondComplex.getImaginaryPart(), 2.0));
  double newB = (b * secondComplex.getRealPart() - a * secondComplex.getImaginaryPart()) / (pow(secondComplex.getRealPart(), 2.0) + pow(secondComplex.getImaginaryPart(), 2.0));
  return Complex(newA, newB);
}

double Complex::abs() const
{
  return sqrt(a * a + b * b);
}

string Complex::toString() const 
{
  stringstream ss;
  ss << a;
  if (b != 0)
    ss << " + " << b << "i";
  return ss.str();
}

Complex &Complex::operator+=(Complex &secondComplex)
{
  *this = this->add(secondComplex);
  return *this;
}

Complex &Complex::operator-=(Complex &secondComplex)
{
  *this = this->subtract(secondComplex);
  return *this;
}

Complex &Complex::operator*=(Complex &secondComplex)
{
  *this = this->multiply(secondComplex);
  return *this;
}

Complex &Complex::operator/=(Complex &secondComplex)
{
  *this = this->divide(secondComplex);
  return *this;
}

double &Complex::operator[](const int &index)
{
  if (index == 0)
    return a;
  else if (index == 1)
    return b;
  else
  {
    cout << "subscript error" << endl;
    exit(0);
  }
}

Complex &Complex::operator++() // Prefix ++
{
  a += 1;
  return *this;
}

Complex &Complex::operator--() // Prefix --
{
  a -= 1;
  return *this;
}

Complex Complex::operator++(int dummy) // Postfix ++
{
  Complex temp(a, b);
  a += 1;
  return temp;
}

Complex Complex::operator--(int dummy) // Postfix --
{
  Complex temp(a, b);
  a -= 1;
  return temp;
}

Complex Complex::operator+() // Unary +
{
  return *this;
}

Complex Complex::operator-() // Unary -
{
  a *= -1; b*= -1;
  return *this;
}

ostream &operator<<(ostream &str, const Complex &complex)
{
  if (complex.b == 0)
    str << complex.a;
  else
    str << complex.a << " + " << complex.b << "i";
  return str;
}

istream &operator>>(istream & str, Complex &complex)
{
  cout << "Enter a and b for (a + bi): ";
  str >> complex.a;
  str >> complex.b;
  return str;
}

int main()
{
  double a, b; 

  cout << "1. Test constructors:" << endl;
  cout << "1.1  Create a complex number c0 with no-arg constructor Complex():" << endl;
  Complex c0;
  cout << "c0 = " << c0 << ", its real part Re(c0) = " << c0.getRealPart() << ", its imaginary part Im(c0) = " << c0.getImaginaryPart() << ", its absolute value |c0| = " << c0.abs() << endl;

  cout << "1.2  Create a complex number c1 with constructor Complex(a):" << endl;
  cout << "Enter number a: ";
  cin >> a;
  Complex c1(a);
  cout << "c1 = " << c1 << ", its real part Re(c1) = " << c1.getRealPart() << ", its imaginary part Im(c1) = " << c1.getImaginaryPart() << ", its absolute value |c1| = " << c1.abs() << endl; 

  cout << "1.3  Create a complex number c2 with constructor Complex(a,b):" << endl;
  cout << "Enter number a b: ";
  cin >> a >> b;
  Complex c2(a,b);
  cout << "c2 = " << c2 << ", its real part Re(c2) = " << c2.getRealPart() << ", its imaginary part Im(c2) = " << c2.getImaginaryPart() << ", its absolute value |c2| = " << c2.abs() << endl;
  cout << endl; 

  cout << "2. Test overloaded stream insertion operator >> and extraction operator <<:" << endl;
  cout << "Enter two complex nubmers following the prompts:" << endl;
  Complex cx1;
  cout << "Enter the first complex number cx1 with (cin >> cx1): ";
  cin >> cx1;
  cout << "'cout << cx1' prints " << cx1 << endl;

  Complex cx2;
  cout << "Enter the second complex number cx2 with (cin >> cx2): ";
  cin >> cx2;
  cout << "'cout << cx2' prints " << cx2 << endl;
  cout << endl;

  cout << "3. Test overloaded arithmetic operators +,-,*,/: " << endl;
  cout << "(" << cx1 << ")" << " + " << "(" << cx2 
	<< ") = " << (cx1 + cx2) << endl;
  cout << "(" << cx1 << ")" << " - " << "(" << cx2 
	<< ") = " << (cx1 - cx2) << endl;
  cout << "(" << cx1 << ")" << " * " << "(" << cx2 
	<< ") = " << (cx1 * cx2) << endl;
  cout << "(" << cx1 << ")" << " / " << "(" << cx2 
	<< ") = " << (cx1 / cx2) << endl;
  // cout << "|" << cx1 << "|" << " = " << cx1.abs() << endl;
  cout << endl;


  cout << "4. Test overloaded augmented arithmetic operators +=,-=,*=,/=: " << endl;
  cout << "cx1 = " << cx1 <<"; cx2 = " << cx2 << endl;
  cout << "(cx2 += cx1); cx2 = " << (cx2 += cx1) << endl;
  cout << "(cx2 -= cx1); cx2 = " << (cx2 -= cx1) << endl;
  cout << "(cx2 *= cx1); cx2 = " << (cx2 *= cx1) << endl;
  cout << "(cx2 /= cx1); cx2 = " << (cx2 /= cx1) << endl;
  cout << endl;

  cout << "5. Test overloaded unary operators:" << endl;
  cout << "5.1 Test overloaded sign operators  +,-: " << endl;
  cout << "cx1 = " << cx1 << endl;
  cout << "+cx1 = " << +cx1 << endl;
  cout << "-cx1 = " << -cx1 << endl;

  cout << "5.2 Test overloaded prefixes ++, --:" << endl;
  cout << "cx1 = " << cx1 << endl;
  cout << "++cx1; cx1 = " << ++cx1 << endl;
  cout << "--cx1; cx1 = " << --cx1 << endl;

  cout << "5.2 Test overloaded postfixes ++, --:" << endl;
  cout << "cx1 = " << cx1 << endl;
  cout << "'cout << cx1++;' prints" << cx1++ << endl;
  cout << "'cout << cx1--' prints " << cx1-- << endl;
  cout << "cx1 = " << cx1 << endl;
  cout << endl;

  cout << "6. Test overloaded subsrcipt operator []:" << endl;
  cout << "cx1 = " << cx1 << endl;
  cout << "cx1[0] = " << cx1[0] << endl;
  cout << "cx1[1] = " << cx1[1] << endl;
  cout << "(cx2[0] == cx2.getRealPart()) = " << (cx2[0] == cx2.getRealPart()) << endl;
  cout << "(cx2[1] == cx2.getImaginaryPart()) = " << (cx2[1] == cx2.getImaginaryPart()) << endl;
  cout << endl;

  cout << "7. Test implicit conversion from double to Complex:" << endl;
  cout << "cx2 = " << cx2 << endl;
  cout << "3 + cx2 = " << (3 + cx2) << endl;
  cout << "3.4 + cx2 = " << (3.4 + cx2) << endl;

  return 0;
}
