#include <iostream>
#include "LB/Functions/Lambda.h"
#include "LB/Functions/Overloading.h"

using namespace std;

int main(int argc, char* argv[])
{
    Lambda lambdaFunc;
    Overloading overloading(12);
    
    lambdaFunc.baza();
    overloading.base();
    
    return 0;
}
