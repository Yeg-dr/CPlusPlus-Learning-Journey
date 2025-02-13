#include <iostream>

//could be implicit or explicit

int main(){

    //double x = (int) 3.14;
    //std::cout << x << '\n';

    //char y = 100;
    //std::cout << y;
    //std::cout << (char) 100;

    int correct = 17;
    int questions = 20;
    double score = correct / (double)questions * 100;

    std::cout << score << "%";

    return 0;
}