#Question 1: Print Numbers Divisible by 3 from 1 to 50
#
# Task: Write a Python program using a for loop to print all numbers between 1 and 50 that are divisible by 3.
# 3 6 9 12 15 18 21 24 27 30 33 36 39 42 45 48 

for i in range(1,51):
    if (i % 3==0):
        print(i, end=" ") 
        #<end=" " is used for print every output in a single line>