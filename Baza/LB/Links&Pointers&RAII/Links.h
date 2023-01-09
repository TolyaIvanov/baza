#pragma once

struct Point {
    double x, y, z;
};

class Links
{
public:
    int number = 42;
    int* number_ptr = &number;
    int& number_link = number;
    Point point = {3.0, 4.0, 5.0};
    Point* point_ptr = &point;

    
    void base();
};
