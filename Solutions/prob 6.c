/*
	prob 6.c - Solution to Problem 6 of Project Euler
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

The sum of the squares of the first ten natural numbers is,
1^2 + 2^2 + ... + 10^2 = 385

The square of the sum of the first ten natural numbers is,
(1 + 2 + ... + 10)^2 = 552 = 3025

Hence the difference between the sum of the squares of the first ten natural 
numbers and the square of the sum is 3025 - 385 = 2640.

Find the difference between the sum of the squares of the first one hundred natural
 numbers and the square of the sum.

*/

int main()
{
    int sumOfSquares, squareOfSum, diff, max = 100, i;
    
    sumOfSquares = squareOfSum = 0;
    
    printf("Calculating sum of squares...");
    for(i=1; i<=max; i++)
    {
         sumOfSquares = sumOfSquares + (i*i);    
    }

    printf(" Its %d", sumOfSquares);

    printf("\nCalculating square of sum...");    
    for(i=1; i<=max; i++)
    {
         squareOfSum = squareOfSum + i;    
    }

    squareOfSum = squareOfSum*squareOfSum;

    printf(" Its %d", squareOfSum);    
    
    diff = squareOfSum - sumOfSquares;

    printf("\nDiff is - %d", diff);

    getch();
    
    return 0;
}
