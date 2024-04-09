#ifndef ComplexNumber_H
#define ComplexNumber_H

class ComplexNumber{

    double real;
    double imaginary;
public:
    ComplexNumber();
    ComplexNumber(double r, double i);
    void print();
    bool is_equal(ComplexNumber& c);
    void add(ComplexNumber& c);
    ComplexNumber conj();
};

#endif
