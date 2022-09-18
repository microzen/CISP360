// This Program is used to calculate the area of geometry shapes.

#include <cmath>
#include <iostream>
using namespace std;

class Shape
{
protected:
    double width, height, area = 0;

public:
    Shape(double width = 0, double height = 0)
    {
        this->width = width;
        this->height = height;
    }
    virtual int getArea()
    {
        return area;
    };
};
class Circl : public Shape
{
public:
    Circl(double radius = 0) : Shape(width, 0)
    {
        if (radius <= 0)
            throw "Radius much bigger than 0.";
        area = (M_PI * pow(radius, 2));
    }
    int getArea()
    {
        cout << "The area of the circl is:\t" << area << endl;
        return Shape::getArea();
    }
};
class Rectangle : public Shape
{
public:
    Rectangle(double width = 0, double height = 0) : Shape(width, height)
    {
        if (width <= 0)
            throw "Width much bigger than 0.";
        if (height <= 0)
            throw "Height much bigger than 0.";
        area = (width * height);
    }
    int getArea()
    {
        cout << "The area of the rectangle is:\t" << (width * height) << endl;
        return Shape::getArea();
    }
};
class Triangle : public Shape
{
public:
    Triangle(double base = 0, double height = 0) : Shape(base, height)
    {
        if (base <= 0)
            throw "Base much bigger than 0.";
        if (height <= 0)
            throw "Height much bigger than 0.";
        area = (base * height / 2.0);
    }
    int getArea()
    {
        cout << "The area of the triangle is:\t" << area << endl;
        return Shape::getArea();
    }
};
int main(int argc, char const *argv[])
{
    int number = 0;
    double result = 0.0;

    cout << "This Program is used to calculate the area of geometry shapes." << endl;
    cout << "1. Calculate the area of a Circle" << endl;
    cout << "2. Calculate the area of a Rectangle" << endl;
    cout << "3. Calculate the area of a Triangle" << endl;
    cout << "4. Quit" << endl;

    do
    {
        cout << "Please input a number to choose a kind of shapes, than press [Enter]" << endl;
        cin >> number;

        if (number == 4)
        {
            cout << "Thank you for using. Program ends!" << endl;
            break;
        }
        else if (number < 1 || number > 4)
        {
            cout << "The valid choices are 1 through 4. Run the program again and select one of those." << endl;
            continue; // or brack to end;
        }
        Shape *shape = NULL;

        double height, width;
        try
        {
            switch (number)
            {
            case 1:
                cout << "Please input a radius of the circl, than press [Enter]" << endl;
                cout << "The radius of the circl: \t";
                cin >> width;
                shape = new Circl(width);
                break;
            case 2:
                cout << "Please input the height and width of the rectangle, than press [Enter]" << endl;
                cout << "The width of the rectangle: \t";
                cin >> width;
                cout << "The height of the rectangle: \t";
                cin >> height;
                shape = new Rectangle(width, height);
                break;
            case 3:
                cout << "Please input the a height of the triangle's base and its height, than press [Enter]" << endl;
                cout << "The base of the rectangle: \t";
                cin >> width;
                cout << "The length of the rectangle: \t";
                cin >> height;
                shape = new Triangle(width, height);
                break;
            }
        }
        catch (const char *msg)
        {
            cerr << msg << endl;
        }
        if (shape != NULL)
        {
            shape->getArea();
            delete shape;
        }

        break;
        // Asking for loop it again if you want
    } while (true);

    return 0;
}
