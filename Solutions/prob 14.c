/*
	prob 14.c - Solution to Problem 14 of Project Euler
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
