#include <iostream>

//returns the result of a spicific arithmic operator
// + - * /

int main (){

    int number = 20;
    //int number = (2 + 5 * 3 - 1) / 4

    //number = number + 1;
    //number += 1;
    //number++;

    //number = number + 5;
    //number += 5;
    //number--;

    //number = number * 2;
    //number *= 2;

    //number = number / 2;
    //number /= 3;

    int reminder = number % 3;

    std::cout << reminder;

    return 0;
}