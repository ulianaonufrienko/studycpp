#include <iostream>

using namespace std;

int main()
{
    int x,y;
    cout << "int / int = " << x / y << "\n";
    cout << "double / int = " << (double) x / y << "\n";
    cout << "int / double = " << x / (double) y << "\n";
    cout << "double / double = " << (double) x / (double)y << "\n";
    return 0;
}
