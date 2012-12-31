/*

2520 is the smallest number that can be divided by each of the numbers from 
1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the 
numbers from 1 to 20?

Ans - 232792560

*/

typedef unsigned long long ULNG;

int main()
{
    ULNG num=232792000;
    int i;

    for(i=2; i<=20; i++)
    {
         printf("\n num - %llu  i - %d", num, i);
         if(num%i!=0)
         {
             num++;
             i=1;      
         }    
    }
    
    printf("\n%llu", num);

    getch();
    
    return 0;
}
