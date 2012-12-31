/*

If we list all the natural numbers below 10 that are multiples of 3 or 5,
we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.

Ans - 233168

*/

int main()
{
    int i, sum;
   
    sum=0;
    
    for(i=1; i<1000; i++)
    {
        if(i%3==0 || i%5==0)
        {
            sum = sum+i;     
            //printf("\nsum - %d  i - %d", sum, i);
        }
    }
    
    printf("\n%d", sum);

    getch();
    
    return 0;
}
