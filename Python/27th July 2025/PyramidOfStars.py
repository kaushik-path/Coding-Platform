# Q1. Pyramid of Stars
# Input: n = 5
#     *
#    ***
#   *****
#  *******
# *********
# Expected Output:

def Star(n):
    for i in range(n-1,0,-1):
        for j in range(i):
            print(" ", end="")
        print()
        
        for j in range(i):
            print("*", end="")
        print()

n= int(input())
Star(n)