#include "Square.h"
#include <string>
#include <vector>
using namespace std;

Square::Square(const string name, int px, int py, unsigned int side): Point(px, py)
{
    this->name = name;
    this->side = side;
}

unsigned int Square::getSide() const
{
    return side;
}

unsigned int Square::getArea() const
{
    return area;
}

string Square::getName() const
{
    return name;
}

void Square::setSide(unsigned int side)
{   
    this->side = side;
}

void Square::setArea(unsigned int side)
{
    area = side * side;
}

void Square::setName(string name)
{
    this->name = name;
}
