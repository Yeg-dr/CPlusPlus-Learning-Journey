#include <iostream>

//entities can share the same name as long as they are in different namespaces

namespace first{

    int x = 1;
}

namespace second{

    int x = 2;
}

int main(){
    
    //using namespace first;

    int x = 0;

    std::cout << x; //uses the local version
    std::cout << second::x; //reffering to the first namespace

    return 0;
}