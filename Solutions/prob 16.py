'''
	prob 16.py - Solution to Problem 16 of Project Euler
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

'''


'''

2^15 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.

What is the sum of the digits of the number 2^1000?

Ans - 1366

'''

from math import pow

two_to_thousand = int(pow(2,1000))

str_two_to_thousand = str(two_to_thousand)

j = ''
mySum = 0

for j in str_two_to_thousand:
    mySum += int(j)

print(mySum)
