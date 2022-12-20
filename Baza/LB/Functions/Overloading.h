#pragma once

class Overloading
{
public:
    int seconds;
    void display();
    void base();
    Overloading(int sec);

    Overloading& operator++ ()              // operator overloading prefix
    {
        seconds += 5;
        return *this;
    }

    Overloading operator++ (int)            // operator overloading postfix
    {
        Overloading prev = *this;
        ++*this;
        return prev;
    }

    Overloading operator+(Overloading c1, Overloading c2)    // operator overloading
    {
        return Overloading(c1.seconds + c2.seconds);
    }

    void add(int a, int b);         // func overloading
    void  add(double a, double b);  // func overloading
    
};
