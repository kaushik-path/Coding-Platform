# Question 1: Leap Year Checker
# Take a year as input and check if it’s a leap year.

# A leap year is divisible by 4, but not by 100 unless also divisible by 400.

def Leap(y):
    if y>0:
        if (y % 400==0) or (y % 4==0 and y % 100 != 0):
            print("Leap Year")
    else:
        print("Not a Leap year")

n= int(input())
Leap(n)