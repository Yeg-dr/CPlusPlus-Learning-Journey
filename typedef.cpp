#include <iostream>
#include<vector>

//it's a nickname
//a new identifire for an existing type

//typedef std::vector<std::pair<std::string, int>> pairlist_t;
typedef std::string text_t;
typedef int number_t;

//using text_t = std::string;
//using number_t = int;
//it's the same but more usual

int main(){

//  pairlist_t pairlist;
    text_t firstname = "Yeg";
    number_t age = 21;

    std::cout << firstname << '\n';
    std::cout << age << '\n';

    return 0;
}