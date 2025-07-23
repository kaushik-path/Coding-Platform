#Question 1: Print Numbers Divisible by 3 from 1 to 50
#
# Task: Write a Python program using a for loop to print all numbers between 1 and 50 that are divisible by 3.

for i in range(1,51):
    if (i % 3==0):
        print(i, end=" ") #<end=" " is used for print everyoutput in a single line>