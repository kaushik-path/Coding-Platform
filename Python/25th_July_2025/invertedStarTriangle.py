# Inverted Star Triangle*****
# ****
# ***
# **
# *
'''hint use increment decrement using this syntax for i in range(start, stop, step)'''
# Write a program to print the following pattern:

def pattern(n):
    for i in range(n, 0, -1):
        for j in range(i):
            print("*", end=" ")
        print()

n= int(input())
pattern(n)