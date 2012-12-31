/*

By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that 
the 6th prime is 13.

What is the 10,001st prime number?

Ans - 104743

*/

#define TRUE 1
#define FALSE 0

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
    int counter, numToFind = 10001, i;
    
    counter = 0;
    
    for(i=2; counter < numToFind; i++)
    {
         if(isPrime(i))
         {
              counter++;         
              //printf("\ni - %d  counter - %d", i, counter);
         }    
    }   

    getch();
    
    return 0;
}
