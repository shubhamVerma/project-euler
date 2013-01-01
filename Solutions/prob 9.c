/*
	prob 9.c - Solution to Problem 9 of Project Euler
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

A Pythagorean triplet is a set of three natural numbers, a  b  c, for which,
a^2 + b^2 = c^2

For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.

Find the product abc.

Ans - 31875000

*/

int main()
{
    int a,b,c,ans;
    
    for( a=3; a<=1000; a++)
    {
        for( b=4; b<=1000; b++)
        {
             for( c=5; c<=1000; c++)
             {
                  if( (a*a + b*b) == (c*c)) 
                  {
                      //printf("\na - %d  b - %d  c - %d", a, b, c);
                      if( (a+b+c) == 1000 )
                      { 
                          //printf("\n%d + %d + %d - 1000", a, b, c);
                          ans = a*b*c;
                          printf("\n%d x %d x %d - %d", a, b, c, ans);
                          getch();
                          exit(1);
                      }
                  }
             }
        }     
    }

    getch();
    
    return 0;
}
