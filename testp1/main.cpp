#include <iostream>
#include <ctime>
int main() {
    int a,b;
    srand(time(0));
    a=rand();
    std::cin >> b;
    while (a!=b){
        if (b>a){
            std::cout << "less" << std::endl;
        } else {
            std::cout << "more" << std::
                endl;
        }
        std::cin >> b;
    }
    std::cout << "ura";
    return 0;
}
