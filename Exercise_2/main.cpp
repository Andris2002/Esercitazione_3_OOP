#include "ComplexNumber.hpp"
#include <iostream>

int main()
{
    class ComplexNumber c(1,-1);
    class ComplexNumber c2(1,2);

    std::cout<< "The first complex number is: ";
    c.print();

    std::cout<< "The second complex number is: ";
    c2.print();

    std::string answer;
    if (c.is_equal(c2)){
        answer = "True";
    } else {
        answer = "False";
    }

    std::cout << "The two numbers are equal: "<< answer << std::endl;
    c.add(c2);

    std::cout <<"Their sum is: ";
    c.print();

    std::cout << "The conjugate of the first one is: ";
    class ComplexNumber c3 = c.conj();
    c3.print();
    return 0;
}
