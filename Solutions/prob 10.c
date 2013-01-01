/*
	prob 10.c - Solution to Problem 10 of Project Euler
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
