# Q1. Pyramid of Stars
# Input: n = 5
#     *
#    ***
#   *****
#  *******
# *********
# Expected Output:

def Star(n):
    for i in range(1,n+1):
        print((" " * (n-i))+ ("*" * (2*i-1)))


n= int(input())
Star(n)