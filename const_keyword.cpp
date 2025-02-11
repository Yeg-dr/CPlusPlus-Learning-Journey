#include <iostream>

int main (){

    //read only and can't change

    const double PI = 3.14;
    //PI = 3.14159;  Error
    double radius = 10;
    double circumference = 2 * PI * radius;

    std::cout << circumference << " cm";

    return 0;
}