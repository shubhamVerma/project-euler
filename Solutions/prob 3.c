/*
	prob 3.c - Solution to Problem 3 of Project Euler
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

The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?

Ans - 6857

*/

#define TRUE 1
#define FALSE 0

typedef unsigned long long ULNG;

int isPrime(ULNG x)
{
    ULNG i;
    int prime;

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
    ULNG num, temp, largestPrimeFactor, i;
    
    i=2;
    largestPrimeFactor = 0;
    
    printf("Enter a composite number :: ");
    scanf("%llu", &num);
    
    temp = num;
    
    printf("\nYou entered %llu.", num);
    
    if(isPrime(num))
    {
        printf("\nRe-run the program and enter a composite number.");
        getch();
        exit(1);
    }
    else
    {
        while( i <= (temp/2+1) )
        {
            //printf("\ntemp - %llu  i - %llu  largestPrimeFactor - %llu", temp, i, largestPrimeFactor);
            
            if(temp%i==0)
            {
                 temp = temp/i;
                
                 i=1;
                 
                 if(isPrime(temp))
                 {
                    largestPrimeFactor = temp;
                    break;
                 }                        
            } 
              
            i++;  
        }
    }

    //printf("\ntemp - %llu  i - %llu  largestPrimeFactor - %llu", temp, i, largestPrimeFactor);

    printf("\nLargest prime factor of %llu is %llu.", num, largestPrimeFactor);

    getch();
    
    return 0;
}
