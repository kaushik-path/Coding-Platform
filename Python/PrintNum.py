# Task 1: Print numbers from 1 to n using a while loop
# 1 2 3 4 5 6 7 8 9...
# Ask the user to input a number n. Your program should print 1 2 3 ... n (in one line).

def Num(n):
    i=1
    while i<=n :
        print(i, end=" ")
        i+=1
    
N= int(input())
Num(N)