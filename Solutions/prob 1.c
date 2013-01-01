/*
	prob 1.c - Solution to Problem 1 of Project Euler
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
