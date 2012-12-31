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
