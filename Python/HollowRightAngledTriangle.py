# Q2: Hollow Right-Angled Triangle
# For n = 5, print:
# *
# * *
# *   *
# *     *
# * * * * *

def Hollow(n):
    for i in range(n):
        for j in range(i+1):
            if j==0 or j==i or i==n-1:
                print("*", end=" ")
            else:
                print(" ", end=" ")
        print()

n= int(input())
Hollow(n)