#include <iostream>
using namespace std;

// Base class Shape
class Shape
{
  public:
    void setWidth(int w)
    {
        width = w;
    }
    void setHeight(int h)
    {
        height = h;
    }

  protected:
    int width;
    int height;
};

// Base class PaintCost
class PaintCost{
public:
    int getCost(int area){
        return area*70;
    }
};

// Derived class
class Rectangle : public Shape, public PaintCost
{
  public:
    int getArea()
    {
        return width * height;
    }
};

int main(void){
    Rectangle Rect;

    Rect.setHeight(10);
    Rect.setWidth(5);
    cout << "Area is: " << Rect.getArea() << endl;
    cout << "Paint cost is: " << Rect.getCost(Rect.getArea()) << endl;
}