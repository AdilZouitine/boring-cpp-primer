#include "Chapter6.h"

int fact(int n)
{
    if (n < 1)
        return n;
    int val = n;
    while (--n)
        val *= n;
    return val;
}