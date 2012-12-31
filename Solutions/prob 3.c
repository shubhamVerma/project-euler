/*

The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?

Ans - 6857

*/

#define TRUE 1
#define FALSE 0

typedef unsigned long long ULNG;

int isPrime(ULNG x)
{
    ULNG i;
    int prime;

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
    ULNG num, temp, largestPrimeFactor, i;
    
    i=2;
    largestPrimeFactor = 0;
    
    printf("Enter a composite number :: ");
    scanf("%llu", &num);
    
    temp = num;
    
    printf("\nYou entered %llu.", num);
    
    if(isPrime(num))
    {
        printf("\nRe-run the program and enter a composite number.");
        getch();
        exit(1);
    }
    else
    {
        while( i <= (temp/2+1) )
        {
            //printf("\ntemp - %llu  i - %llu  largestPrimeFactor - %llu", temp, i, largestPrimeFactor);
            
            if(temp%i==0)
            {
                 temp = temp/i;
                
                 i=1;
                 
                 if(isPrime(temp))
                 {
                    largestPrimeFactor = temp;
                    break;
                 }                        
            } 
              
            i++;  
        }
    }

    //printf("\ntemp - %llu  i - %llu  largestPrimeFactor - %llu", temp, i, largestPrimeFactor);

    printf("\nLargest prime factor of %llu is %llu.", num, largestPrimeFactor);

    getch();
    
    return 0;
}
