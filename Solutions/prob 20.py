'''
Python3

n! means n  (n  1)  ...  3  2  1

For example, 10! = 10  9  ...  3  2  1 = 3628800,
and the sum of the digits in the number 10! is 3 + 6 + 2 + 8 + 8 + 0 + 0 = 27.

Find the sum of the digits in the number 100!

Ans - 648

'''

def myFact(num):
    fact = 1
    for i in range(num):
        fact = fact * (i+1)

    return fact


ff = myFact(100)
mySum = 0

sh = str(ff)

j=""

for j in sh:
    mySum += int(j)

print(mySum)
input()
