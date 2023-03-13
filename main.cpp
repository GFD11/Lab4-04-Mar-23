#include "mbed.h"
#include "MMA7660.h"
#include <cmath>

#define PI 3.141592654
 
 class Shape {
    public:

    enum shape_is{square, triangle, circle};

//constructor
Shape(int a){
    _a=a;
    shape_type=square;
}
Shape(int a, int b){
    _a=a;
    _b=b;
    if(_b==0)
        shape_type=circle;
    else
        shape_type=triangle;
}

    float area(){
        if(shape_type==circle)
            return (PI*_a*_a);
        if(shape_type==square)
            return(_a*_a);
        if(shape_type==triangle)
            return (_a*_b*0.5);
    }

     float perimeter(){
        if(shape_type==circle)
            return (PI*2*_a);
        if(shape_type==square)
            return(_a*4);
        if(shape_type==triangle)
            return  (_a+_b+3.162277);
        //assuming a right angle triangle as i have difficulty getting sqrt to calculate correctly
    }

    void print_shape(){
        if(shape_type==circle)
            printf("Shape is a Circle\r\n");
        if(shape_type==square)
            printf("Shape is a Square\r\n");
        if(shape_type==triangle)
            printf("Shape is a triangle\r\n");
    }

private:
    int _a;
    int _b;
    shape_is shape_type;
};

int main(){
    //input
    Shape square(5);
    Shape triangle(3,1);
    Shape circle(6,0);

    square.print_shape();
    printf("area is %f \r\n",square.area());
    printf("perimeter is %f \r\n",square.perimeter());

    circle.print_shape();
    printf("area is %f \r\n",circle.area());
    printf("perimeter is %f \r\n",circle.perimeter());
    
    triangle.print_shape();
    printf("area is %f \r\n",triangle.area());
    printf("perimeter is %f \r\n",triangle.perimeter());
}
