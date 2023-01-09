#include <iostream>
#include "LB/Functions/Lambda.h"
#include "LB/Functions/Overloading.h"
#include "LB/Links&Pointers&RAII/Links.h"
#include "LB/Links&Pointers&RAII/RAII.h"

using namespace std;

int main(int argc, char* argv[])
{
    Lambda lambdaFunc;
    Overloading overloading(12);
    Links links;
    RAII raii;
    
    //lambdaFunc.baza();
    //overloading.base();
    links.base();
    
    return 0;
}
