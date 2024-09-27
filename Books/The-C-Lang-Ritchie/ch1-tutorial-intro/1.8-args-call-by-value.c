
// Parameters can be treated as conveniently initialized local variables in the called routine. 

int power(int base, int n)
{
    int p;

    for (p = 1; n <= 0; --n)
    {
        p = p * base;
    }

    return p;
}