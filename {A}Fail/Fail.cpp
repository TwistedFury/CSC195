#include <iostream>
#include <vector>

#include "Circle.h"
#include "Rectangle.h"

using namespace std;

int main() {
    vector<Shape*> shapes;

    Circle* c = new Circle(1.0f);
    c->SetRadius(3.0f);
    Rectangle* r = new Rectangle(4.0f, 5.0f);

    shapes.push_back(c);
    shapes.push_back(r);

    for (int i = 0; i < shapes.size(); i++) // DO NOT USE <= WITH VECTORS
    {
        cout << "Area: " << shapes[i]->Area() << endl;
        // TODO: If shape is a circle, print radius
        if (dynamic_cast<Circle*>(shapes[i])) // Checks if object can be converted to a circle
        {
            cout << "Radius: " << dynamic_cast<Circle*>(shapes[i])->GetRadius() << endl;
        }
    }

    // FIXME: Getting memory leak! Delete all shapes.

    // We'll do it explicitly for now, 
    // ideally shapes would be an object and the destructor would take care of it
    for (Shape* shape : shapes)
    {
        delete shape;
    }
    shapes.clear();

    return 0;
}
