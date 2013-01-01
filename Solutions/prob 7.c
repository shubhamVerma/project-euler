/*
	prob 7.c - Solution to Problem 7 of Project Euler
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
