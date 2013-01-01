/*
	prob 5.c - Solution to Problem 5 of Project Euler
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
