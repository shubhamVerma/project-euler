/*
	prob 4.c - Solution to Problem 4 of Project Euler
	Copyright (C) 2012, Shubham Verma

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.

*/


/*

Problem -

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
