#pragma once

class Overloading
{
public:
    int seconds;
    void display();
    void base();
    Overloading(int sec);

    Overloading& operator++() // operator overloading prefix
    {
        seconds += 5;
        return *this;
    }

    Overloading& operator++(int) // operator overloading postfix
    {
        Overloading prev = *this;
        this->seconds++;
        return prev;
    }

    Overloading operator+(Overloading& c2) // operator overloading
    {
        Overloading temp = *this;
        temp.seconds += c2.seconds;
        return temp;
    }

    Overloading& operator=(const Overloading& right)
    {
        if (this == &right)
        {
            return *this;
        }

        seconds = right.seconds;
        return *this;
    }

    void add(int a, int b); // func overloading
    void add(double a, double b); // func overloading
};
