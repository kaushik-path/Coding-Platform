# Q2. Inverted Number Triangle
# Input: n = 5
# Output:
# 12345
# 1234
# 123
# 12
# 1

def Triangle(n):
    for i  in range(n, 0, -1):
        for j in range(1,i+1):
            print(j, end="")
        print()

n= int(input())
Triangle(n)
