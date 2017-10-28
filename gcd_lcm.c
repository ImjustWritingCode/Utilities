#include<stdio.h>
int gcd(int big,int small)
{
        if(!(big % small))
                return small;
        else
                return gcd(small, big % small);
}
int lcm(int big, int small)
{
        return big * small / gcd(big, small);
}
