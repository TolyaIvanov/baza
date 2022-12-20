#include <iostream>
#include "Overloading.h"

Overloading::Overloading(int sec)
{
    seconds = sec;
}




void Overloading::base()
{
    Overloading c1(20);
    Overloading c2(10);
    Overloading c3 = c1 + c2;
    c3.display();
}

void Overloading::add(int a, int b)
{
    std::cout << "sum = " << (a + b) << std::endl;
}

void Overloading::add(double a, double b)
{
    std::cout << "sum = " << (a + b) << std::endl;
}

void Overloading::display()
{
    std::cout << seconds << " seconds" << std::endl;

}

/*
 * Здесь функция оператора не является частью класса Counter и определена вне его.
 * Данная функция перегружает оператор сложения для типа Counter.
 * Она является бинарной, поэтому принимает два параметра.
 * В данном случае мы складываем два объекта Counter.
 * Возвращает функция также объект Counter, который хранит общее количесто секунд.
 * То есть по сути здесь операция сложения сводится к сложению секунд обоих объектов:
 */
