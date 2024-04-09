#include "ComplexNumber.hpp"
#include <iostream>
#include <limits>
#include <cmath>

float DBL_EPSILON = std::numeric_limits<double>::epsilon();
bool AlmostEqualRelative(double A, double B);




ComplexNumber::ComplexNumber(){
    real = 0;
    imaginary = 0;
}

ComplexNumber::ComplexNumber(double r, double i){
    real = r;
    imaginary = i;

}

void ComplexNumber::print(){
    if (imaginary < 0){
        std::cout << real  <<'-' << std::abs(imaginary)<< 'i'<< std::endl;
    } else {
        std::cout << real<< '+'<< std::abs(imaginary)<< 'i'<< '\n';
    }

}

bool ComplexNumber::is_equal(ComplexNumber& c){

    return AlmostEqualRelative(real, c.real) & AlmostEqualRelative(imaginary,c.imaginary);
}

void ComplexNumber::add(ComplexNumber& c){
    real += c.real;
    imaginary += c.imaginary;
}

ComplexNumber ComplexNumber::conj(){
    double c_imaginary = -imaginary;
    class ComplexNumber c(real, c_imaginary);
    return c;
}

// https://randomascii.wordpress.com/2012/02/25/comparing-floating-point-numbers-2012-edition/
bool AlmostEqualRelative(double A, double B)
{

    double maxRelDiff = DBL_EPSILON;
    // Calculate the difference.
    double diff = fabs(A - B);
    A = fabs(A);
    B = fabs(B);
    // Find the largest
    double largest = (B > A) ? B : A;

    if (diff <= largest * maxRelDiff)
        return true;
    return false;
}

