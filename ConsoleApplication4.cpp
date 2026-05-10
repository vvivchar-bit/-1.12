#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

class Color {
public:
    virtual string getColorName() = 0;
    virtual ~Color() = default;
};

class RedColor : public Color {
public:
    string getColorName() override {
        return "red";
    }
};

class BlueColor : public Color {
public:
    string getColorName() override {
        return "blue";
    }
};

class GreenColor : public Color {
public:
    string getColorName() override {
        return "green";
    }
};

class Shape {
protected:
    Color* color;

public:
    Shape(Color* shapeColor) {
        if (shapeColor == nullptr) {
            throw invalid_argument("Color implementation cannot be null.");
        }

        color = shapeColor;
    }

    virtual void draw() = 0;
    virtual ~Shape() = default;
};

class Circle : public Shape {
public:
    Circle(Color* shapeColor) : Shape(shapeColor) {}

    void draw() override {
        cout << "Circle is drawn with " << color->getColorName() << " color." << endl;
    }
};

class Square : public Shape {
public:
    Square(Color* shapeColor) : Shape(shapeColor) {}

    void draw() override {
        cout << "Square is drawn with " << color->getColorName() << " color." << endl;
    }
};

class Triangle : public Shape {
public:
    Triangle(Color* shapeColor) : Shape(shapeColor) {}

    void draw() override {
        cout << "Triangle is drawn with " << color->getColorName() << " color." << endl;
    }
};

int main() {
    try {
        RedColor red;
        BlueColor blue;
        GreenColor green;

        Circle circle(&red);
        Square square(&blue);
        Triangle triangle(&green);

        circle.draw();
        square.draw();
        triangle.draw();
    }
    catch (const exception& error) {
        cout << "Error: " << error.what() << endl;
    }

    return 0;
}
