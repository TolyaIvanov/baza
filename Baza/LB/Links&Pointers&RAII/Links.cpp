#include <iostream>
#include "Links.h"



void Links::base()
{
    std::cout << "number = " << number << std::endl;
    std::cout << "number_ptr = " << number_ptr << std::endl;
    std::cout << "number_link = " << number_link << std::endl;

    std::cout << "(*point_ptr).x = " << (*point_ptr).x << "\n";  // обращение через * и . требует скобок
    std::cout << "point_ptr->x = " << point_ptr->x << "\n";  // то же самое, но чуть короче
    std::cout << "point_ptr = " << point_ptr << "\n";  // то же самое, но чуть короче
    
    number += 10;

    std::cout << "number = " << number << std::endl;
    std::cout << "number_ptr = " << number_ptr << std::endl;
    std::cout << "number_link = " << number_link << std::endl;

    *number_ptr = 10;

    std::cout << "number = " << number << std::endl;
    std::cout << "number_ptr = " << number_ptr << std::endl;
    std::cout << "number_link = " << number_link << std::endl;
}
