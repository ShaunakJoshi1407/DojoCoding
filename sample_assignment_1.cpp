#include <iostream>
using namespace std;

class shape
{
protected:
    long ar, prmtr;

public:
    virtual void area() = 0;
    virtual void parimeter() = 0;
};

class square : public shape
{
private:
    long side;

public:
    square()
    {
        ar = prmtr = side = 0;
    }
    void get()
    {
        cout << "Enter a side of square:";
        cin >> side;
    }
    void area()
    {
        ar = side * side;
        cout << "Area of the square is:" << ar;
    }
    void parimeter()
    {
        prmtr = 4 * side;
        cout << endl
             << "The perimeter of the square is:" << prmtr;
    }
};

class rectangle : public shape
{
private:
    long length;
    long width;

public:
    rectangle()
    {
        ar = prmtr = length = width = 0;
    }
    void get()
    {
        cout << endl;
        cout << "Enter length and width of rectangle:";
        cin >> length >> width;
    }
    void area()
    {
        ar = length * width;
        cout << "Area of the rectangle is:" << ar;
    }
    void parimeter()
    {
        prmtr = 2 * (length + width);
        cout << endl
             << "The perimeter of the rectangle is:" << prmtr;
    }
};

class triangle : public shape
{
private:
    long base, height, hyp;

public:
    triangle()
    {
        ar = prmtr = base = height = hyp = 0;
    }
    void input()
    {
        cout << endl
             << "Enter three sides of Right triangle:";
        cin >> base >> height >> hyp;
    }
    void area()
    {
        ar = 0.5 * base * height;
        cout << endl
             << "The area of Right Triangle is:" << ar;
    }
    void parimeter()
    {
        prmtr = base + height + hyp;
        cout << endl
             << "The parimeter of Right Triangle id:" << prmtr;
    }
};
int main()
{
    square s1;
    triangle t1;
    rectangle r1;

    s1.get();
    s1.area();
    s1.parimeter();

    r1.get();
    r1.area();
    r1.parimeter();

    t1.input();
    t1.area();
    t1.parimeter();
    return 0;
}