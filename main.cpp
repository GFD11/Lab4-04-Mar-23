#include "mbed.h"
#include "MMA7660.h"
#include <cmath>

#define PI 3.141592654
 
 class Shape {
    public:

    enum shape_is{square, Triangle, Circle};

//constructor
Shape(int a){
    _a=a;
}
Shape(int a, int b){
    _a=a;
    _b=b;
};

private:
    int _a;
    int _b;
    int shape_type;
};

int main(){
    //input
    Shape square(5);
    Shape triangle(3,1);
}
