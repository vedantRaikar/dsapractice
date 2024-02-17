#include <stdio.h>
int main()
{
    int n1, n2, i, gcd;

    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);
    int small = (n1 < n2)?n1:n2;
    int opcount = 0;

    for(i=1; i <=small; ++i)
    {
        // Checks if i is factor of both integers
        opcount++;
        if(n1%i==0 && n2%i==0)
            gcd = i;
    }
    printf("Num BAsic operation: %d" , opcount);
    printf("G.C.D of %d and %d is %d", n1, n2, gcd);

    return 0;
}
