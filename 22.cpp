#include <iostream>
using namespace std;

class Shape {
protected:
    double d1, d2;  

public:
    virtual void displayArea() = 0; 
    void getdata(double x, double y) {
        d1 = x;
        d2 = y;
    }
};

class Rectangle : public Shape {
public:
    void displayArea() override {
        double area = d1 * d2;
        cout << "Area of Rectangle: " << area << endl;
    }
};

class Triangle : public Shape {
public:
    void displayArea() override {
        double area = 0.5 * d1 * d2;
        cout<<"Area of Triangle :"<<area<<endl;
    }
};

int main() {
    int choice;
    double a, b;  
    Rectangle rect;
    Triangle tri;
    
    do {
        cout<<"Enter the choice 1 for Triangle, 2 for Rectangle, 3 to exit: ";
        cin>>choice;
        
        if (choice == 1) {
            cout<<"Enter the base and height for the triangle: ";
            cin>>a>>b;
            tri.getdata(a, b);	
            tri.displayArea();
        } 
        else if (choice == 2) {
            cout<<"Enter the length and breadth for the rectangle: ";
            cin>>a>>b;
            rect.getdata(a, b);
            rect.displayArea();
        }
        
    } while (choice != 3); 
    
    return 0;
}
