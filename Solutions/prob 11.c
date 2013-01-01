/*
	prob 11.c - Solution to Problem 11 of Project Euler
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

In the 20 X 20 grid below, four numbers along a diagonal line have been marked 
in red.

    08 02 22 97 38 15 00 40 00 75 04 05 07 78 52 12 50 77 91 08
    49 49 99 40 17 81 18 57 60 87 17 40 98 43 69 48 04 56 62 00
    81 49 31 73 55 79 14 29 93 71 40 67 53 88 30 03 49 13 36 65
    52 70 95 23 04 60 11 42 69 24 68 56 01 32 56 71 37 02 36 91
    22 31 16 71 51 67 63 89 41 92 36 54 22 40 40 28 66 33 13 80
    24 47 32 60 99 03 45 02 44 75 33 53 78 36 84 20 35 17 12 50
    32 98 81 28 64 23 67 10 26 38 40 67 59 54 70 66 18 38 64 70
    67 26 20 68 02 62 12 20 95 63 94 39 63 08 40 91 66 49 94 21
    24 55 58 05 66 73 99 26 97 17 78 78 96 83 14 88 34 89 63 72
    21 36 23 09 75 00 76 44 20 45 35 14 00 61 33 97 34 31 33 95
    78 17 53 28 22 75 31 67 15 94 03 80 04 62 16 14 09 53 56 92
    16 39 05 42 96 35 31 47 55 58 88 24 00 17 54 24 36 29 85 57
    86 56 00 48 35 71 89 07 05 44 44 37 44 60 21 58 51 54 17 58
    19 80 81 68 05 94 47 69 28 73 92 13 86 52 17 77 04 89 55 40
    04 52 08 83 97 35 99 16 07 97 57 32 16 26 26 79 33 27 98 66
    88 36 68 87 57 62 20 72 03 46 33 67 46 55 12 32 63 93 53 69
    04 42 16 73 38 25 39 11 24 94 72 18 08 46 29 32 40 62 76 36
    20 69 36 41 72 30 23 88 34 62 99 69 82 67 59 85 74 04 36 16
    20 73 35 29 78 31 90 01 74 31 49 71 48 86 81 16 23 57 05 54
    01 70 54 71 83 51 54 69 16 92 33 48 61 43 52 01 89 19 67 48

The product of these numbers is 26 X 63 X 78 X 14 = 1788696.

What is the greatest product of four adjacent numbers in any direction 
(up, down, left, right, or diagonally) in the 20 X '20 grid?

Ans - 70600674  Inverse DN - 89 x 94 x 97 x 87

*/

#include<stdio.h>

#define ROW 20
#define COL 20

int main()
{
    int nums[ROW][COL] = 
    {
        { 8, 2,22,97,38,15,00,40,00,75, 4, 5, 7,78,52,12,50,77,91, 8},
        {49,49,99,40,17,81,18,57,60,87,17,40,98,43,69,48, 4,56,62,00},
        {81,49,31,73,55,79,14,29,93,71,40,67,53,88,30, 3,49,13,36,65},
        {52,70,95,23, 4,60,11,42,69,24,68,56, 1,32,56,71,37, 2,36,91},
        {22,31,16,71,51,67,63,89,41,92,36,54,22,40,40,28,66,33,13,80},
        {24,47,32,60,99, 3,45, 2,44,75,33,53,78,36,84,20,35,17,12,50},
        {32,98,81,28,64,23,67,10,26,38,40,67,59,54,70,66,18,38,64,70},
        {67,26,20,68, 2,62,12,20,95,63,94,39,63, 8,40,91,66,49,94,21},
        {24,55,58, 5,66,73,99,26,97,17,78,78,96,83,14,88,34,89,63,72},
        {21,36,23, 9,75,00,76,44,20,45,35,14,00,61,33,97,34,31,33,95},
        {78,17,53,28,22,75,31,67,15,94, 3,80, 4,62,16,14, 9,53,56,92},
        {16,39, 5,42,96,35,31,47,55,58,88,24,00,17,54,24,36,29,85,57},
        {86,56,00,48,35,71,89, 7, 5,44,44,37,44,60,21,58,51,54,17,58},
        {19,80,81,68, 5,94,47,69,28,73,92,13,86,52,17,77, 4,89,55,40},
        { 4,52, 8,83,97,35,99,16, 7,97,57,32,16,26,26,79,33,27,98,66},
        {88,36,68,87,57,62,20,72, 3,46,33,67,46,55,12,32,63,93,53,69},
        { 4,42,16,73,38,25,39,11,24,94,72,18, 8,46,29,32,40,62,76,36},
        {20,69,36,41,72,30,23,88,34,62,99,69,82,67,59,85,74, 4,36,16},
        {20,73,35,29,78,31,90, 1,74,31,49,71,48,86,81,16,23,57, 5,54},
        { 1,70,54,71,83,51,54,69,16,92,33,48,61,43,52, 1,89,19,67,48}    
    };     
    
    int mulU, mulD, mulL, mulR, mulDN, mulID, ans, i, j;
    
    mulU = mulD = mulL = mulR = mulDN = mulID = 0;
    ans = 1;

    for(i=0; i<ROW; i++)
    {
        for(j=0; j<COL; j++)
        {
             //For Up
             if( j-3 >= 0 )
             {
                 mulU = nums[j][i]*nums[j-1][j]*nums[j-2][i]*nums[j-3][i];
                 if(mulU > ans)
                 {
                     ans = mulU;
                     //printf("\nmulU - %d  Up - %d %d %d %d", mulU, nums[j][i], nums[j-1][i], nums[j-2][i], nums[j-3][i]);                       
                 }
             }
             
             //For Down
             if( j+3 < ROW )
             {
                 mulD = nums[j][i]*nums[j+1][i]*nums[j+2][i]*nums[j+3][i];
                 if(mulD > ans)
                 {
                     ans = mulD;
                     //printf("\nmulD - %d  Down - %d %d %d %d", mulD, nums[j][i], nums[j+1][i], nums[j+2][i], nums[j+3][i]);    
                 }
             }
             
             //For Left
             if( i-3 >= 0 )
             {
                 mulL = nums[j][i]*nums[j][i-1]*nums[j][i-2]*nums[j][i-3];
                 if(mulL > ans)
                 {
                     ans = mulL;
                     //printf("\nmulL - %d  Left - %d %d %d %d", mulL, nums[j][i], nums[j][i-1], nums[j][i-2], nums[j][i-3]);    
                 }
             }
             
             //For Right
             if( i+3 < COL )
             {
                 mulR = nums[j][i]*nums[j][i+1]*nums[j][i+2]*nums[j][i+3];
                 if(mulR > ans)
                 {
                     ans = mulR;
                     //printf("\nmulR - %d  Right - %d %d %d %d", mulR, nums[j][i], nums[j][i+1], nums[j][i+2], nums[j][i+3]);    
                 }
             }
                         
             //For Diagonal
             if( (i+3 < ROW) && (j+3 < COL) )
             {
                 mulDN = nums[j][i]*nums[j+1][i+1]*nums[j+2][i+2]*nums[j+3][i+3];
                 if(mulDN > ans)
                 {
                     ans = mulDN;
                     //printf("\nmulDN - %d Diagonal - %d %d %d %d", mulDN, nums[j][i], nums[j+1][i+1], nums[j+2][i+2], nums[j+3][i+3]);    
                 }
             }
             
             //For IDiagonal
             if( (i-3 >= 0 ) && (j+3 < ROW ) )
             {
                 mulID = nums[j][i]*nums[j+1][i-1]*nums[j+2][i-2]*nums[j+3][i-3];
                 if(mulID > ans)
                 {
                     ans = mulID;
                     //printf("\nmulID - %d IDiagonal - %d %d %d %d", mulID, nums[j][i], nums[j+1][i-1], nums[j+2][i-2], nums[j+3][i-3]);    
                 }
             }
        }        
    }

    printf("\n\nAns - %d", ans);

    getch();
    
    return 0;
}
