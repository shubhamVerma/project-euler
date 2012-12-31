/*

A Pythagorean triplet is a set of three natural numbers, a  b  c, for which,
a^2 + b^2 = c^2

For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.

Find the product abc.

Ans - 31875000

*/

int main()
{
    int a,b,c,ans;
    
    for( a=3; a<=1000; a++)
    {
        for( b=4; b<=1000; b++)
        {
             for( c=5; c<=1000; c++)
             {
                  if( (a*a + b*b) == (c*c)) 
                  {
                      //printf("\na - %d  b - %d  c - %d", a, b, c);
                      if( (a+b+c) == 1000 )
                      { 
                          //printf("\n%d + %d + %d - 1000", a, b, c);
                          ans = a*b*c;
                          printf("\n%d x %d x %d - %d", a, b, c, ans);
                          getch();
                          exit(1);
                      }
                  }
             }
        }     
    }

    getch();
    
    return 0;
}
