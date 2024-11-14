#include "..\lib\declarations.hpp"

int main ()
{
    int opt;
    cout << "Select option 1 or 2: ";
    cin >> opt;

    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    switch (opt)
    {
    case 1:
        arithmeticMean();
        break;
    case 2:
        weightedArithmeticMean();    
    default:
        break;
    }

    return 0;
}