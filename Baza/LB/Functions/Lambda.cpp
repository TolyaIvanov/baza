#include <iostream>
#include <algorithm>
#include "Lambda.h"


void Lambda::baza()
{
    //[ capture clause ] (parameters) -> return-type  
    //{   
    //    definition of method   
    //} 


    auto greet = []()
    {
        std::cout << "Hello it's lambda function" << std::endl;
    };

    greet();

    auto operation = [](int a, int b, std::string op) -> double
    {
        if (op == "sum")
        {
            // returns an 'int'
            return a + b;
        }
        else
        {
            // returns a 'double'
            return (a + b) / 2.0;
        }
    };

    auto sum = operation(firstValue, secondValue, "sum");
    auto avg = operation(firstValue, secondValue, "avg");

    std::cout << "sum = " << sum << std::endl;
    std::cout << "avg = " << avg << std::endl;


    int evenCount = count_if(nums.begin(), nums.end(), [](int num)
    {
        return num % 2 == 0;
    });

    std::cout << "There are " << evenCount << " even numbers.";
}
