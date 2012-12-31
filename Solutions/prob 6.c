/*

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
