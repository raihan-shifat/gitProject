#include <iostream>
#include <math.h>                 // C math library
using namespace std;

int main ()
{
    float a, b, result;
    while ((a > 0) & (b > 0)); 
       {
       cout << "\n Please input side the two side lengths";
       cin >> a >> b;
       result = sqrt((a*a)+(b*b));
       cout << "\n The hypotenuse length is: " << (result);
       }
       return 0;
}