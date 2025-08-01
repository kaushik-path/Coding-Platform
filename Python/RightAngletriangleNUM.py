# Q1. Right-Angled Number Triangle
1
12
123
1234
12345
# Write a program to print the following pattern for n = 5:


def pattern(n):
    for i in range(1, n+1):
        for j in range(1, i+1):
            print(j, end=" ")
        print()

n= int(input())
pattern(n)



