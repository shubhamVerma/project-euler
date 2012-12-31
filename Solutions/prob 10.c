/*

The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.

Ans - 142913828922

*/

#define TRUE 1
#define FALSE 0

typedef unsigned long long ULNG;

int isPrime(int x)
{
    int i, prime;

    prime = TRUE;
    
    if(x==2)
      return prime;
    
    for(i=2; i<=(x/2+1); i++)
    {
         if(x%i==0)
         { 
             prime = FALSE;    
             break;
         }
    }
    
    return prime;
}

int main()
{
    int count = 0,i;
    ULNG sum;
    
    sum = 0;
    
    for(i=2; i<2000000; i++)
    {
        if(isPrime(i))
        {
           sum = sum + i;     
           printf("\nsum - %llu  i - %d", sum, i);
        }
    }

    printf("\nsum - %llu", sum);
    
    getch();
    
    return 0;
}
