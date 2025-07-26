# Q1. Number Pyramid
# For n = 4:
#    1
#   121
#  12321
# 1234321

def pyramid(n):
    for i in range(1,n+1):
        print(" " * (n-i) + (i * (n-i)))

n= int(input())
pyramid(n)