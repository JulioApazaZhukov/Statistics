namespace intEx {
    int NthPower (int number, int power)
    {
        int i = power-1;
        int j = number;
        while (i > 0) {
            j *= number;
            i--;
        }
        return j;
    }

    int square (int number)
    {
        return number * number;
    }

    int cube (int number)
    {
        return number * number * number;
    }
}

namespace floatEx {
    float NthPower (float number, int power)
    {
        int i = power-1;
        float j = number;
        while (i > 0) {
            j *= number;
            i--;
        }
        return j;
    }

    float square (float number)
    {
        return number * number;
    }

    float cube (float number)
    {
        return number * number * number;
    }
}

namespace doubleEx {
    double NthPower (double number, int power)
    {
        int i = power-1;
        double j = number;
        while (i > 0) {
            j *= number;
            i--;
        }
        return j;
    }

    double square (double number)
    {
        return number * number;
    }

    double cube (double number)
    {
        return number * number * number;
    }
}