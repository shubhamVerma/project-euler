/*

The following iterative sequence is defined for the set of positive integers:

n = n/2 (n is even)
n = 3n + 1 (n is odd)

Using the rule above and starting with 13, we generate the following sequence:
13  40  20  10  5  16  8  4  2  1

It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms. Although it has not been proved yet (Collatz Problem), it is thought that all starting numbers finish at 1.

Which starting number, under one million, produces the longest chain?

Ans - 837799 

*/

typedef unsigned long long ULNG;

int mySequence(ULNG num)
{
    int count=0;
            
    while(num!=1)
    {
         if(num%2==0)
           num = num/2;             
         else
           num = 3*num + 1;      

         count++;        
    }
    
    return count;
}

int main()
{
    int maxCount=0, iCount;
    
    ULNG i, ans;
    
    for(i=1; i<1000000; i++)
    {         
         iCount = mySequence(i);    
         
         if(iCount > maxCount)
         {
             maxCount = iCount;
             ans = i;
         }
         
          printf("\nmaxCount - %d  num - %llu  i - %llu", maxCount, ans, i);
    }

    getch();
    
    return 0;
}
