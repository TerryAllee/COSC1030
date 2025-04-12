//
// Name Terry Allee
// Date: April 12, 2025
// Pointer Rewrite Programming Project
// COSC 1030
//

#include <iostream>
using namespace std;
int doSomething(int *x, int *y);

int main()
{
    int x = 5,  y = 2;

    cout << "Before calling the function:\n"
         << "x = " << x << endl;
         cout << "y = " << y << endl << endl;
    
    cout << "The functions returns " << doSomething(&x, &y) << endl << endl;

    cout << "After calling the function: \n"
         << "x = " << x << endl;
        cout << "y = " << y << endl;

    return 0;

}

int doSomething(int *x, int *y)
{
    int temp = *x;
    *x = *y + 10;
    *y = temp * 10;
    return *x + *y;
}