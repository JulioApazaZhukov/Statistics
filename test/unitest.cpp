#include "..\lib\declarations.hpp"
#include <windows.h>
#include <cmath>
#include <iomanip>

int i = 1;
int* iptr = &i;

void setConsoleColor (int color) 
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
}

bool compareFloats (double a, double b, double epsilon = 1e-5) 
{
    return fabs(a - b) < epsilon;
}

void validation (double output, double expected_output) 
{
    cout << "#" << i << ": ";
    i++;
    if (compareFloats(output, expected_output)) {
        setConsoleColor(10);  // Green
        cout << "Ok" << endl;
    } else {
        setConsoleColor(12);  // Red
        cout << "Failed: " << std::fixed << std::setprecision(10) << output << " != " << expected_output << endl;
    }
    setConsoleColor(7);
}

int main (void) 
{
    validation(intEx::NthPower(5, 8), 390625);
    validation(intEx::square(9), 81);
    validation(intEx::cube(5), 125);

    validation(floatEx::NthPower(5, 8), 390625);
    validation(floatEx::square(5.5), 30.25);
    validation(floatEx::cube(5.1), 132.651);

    validation(doubleEx::NthPower(5, 8), 390625);
    validation(doubleEx::square(5.5), 30.25);
    validation(doubleEx::cube(2.2), 10.648);

    return 0;
}