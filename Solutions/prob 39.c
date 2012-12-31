/*

If p is the perimeter of a right angle triangle with integral length sides, {a,b,c}

Eg. - There are exactly three solutions for p = 120.

            {20,48,52}, {24,45,51}, {30,40,50}

For which value of p<=1000, is the number of solutions maximised?

Answer - 840

*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int a = 1,
        b = 1,
        c = 1,
        p = 12;

    int count = 0,
        maxS = 0,
        maxP = 0;

    while( p <= 1000 )
    {
        count = 0;

        printf("\n\nPerimeter - %d", p);

        for(a=1; a<=p; a++)
        {
            for(b=1; b<=p; b++)
            {
                 for(c=1; c<=p; c++)
                 {
                      if ( (a+b) < c )
                         break;
                      else if ( ( a*a + b*b == c*c ) && ( a+b+c == p ) )
                      {
                             printf("\nPythagorean triplet found { %d, %d, %d }.", a,b,c);
                             count = count + 1;
                      }
                 }
            }
        }

        printf("\nFor perimeter - %d, we got %d solutions.", p, count);

        if (count >= maxS)
        {
            maxS = count;
            maxP = p;
        }

        p = p + 1;

        printf("\nMaxP - %d, with %d solutions.", maxP, maxS);

    }

    printf("\nMax no. of soultions found - %d, with perimeter - %d", maxS, maxP);

    getch();

    return 0;
}
