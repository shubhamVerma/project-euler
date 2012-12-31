/*

A palindromic number reads the same both ways. The largest palindrome made from 
the product of two 2-digit numbers is 9009 = 91 x 99.

Find the largest palindrome made from the product of two 3-digit numbers.

Ans - 906609

*/

#define TRUE 1
#define FALSE 0

int isPalindrome(int x)
{
    int rem, temp, ans;
    
    ans = 0;
    temp = x;
    
    while(temp!=0)
    {
        rem = temp%10;
        temp = temp/10;
        ans = ans*10 + rem;          
    }
    
    if(ans==x)
      return TRUE;
    else 
      return FALSE;  
}

int main()
{
    int i, j, ans, mul;
    
    ans = 1;
    
    for(i=100; i<1000; i++)
    {
        for(j=100; j<1000; j++)
        {
            mul = i*j;
            
            if( isPalindrome(mul) && mul > ans )
            {
               //printf("\nmul - %d  i - %d  j - %d", mul, i, j);
               ans = mul;
            }      
        }
    }

    printf("\n%d", ans);

    getch();
    
    return 0;
}
