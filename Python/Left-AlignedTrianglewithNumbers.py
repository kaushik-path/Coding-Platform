# Q3. Left-Aligned Triangle with Numbers
# Input: n = 4
# Output:
# 1
# 22
# 333
# 4444

def Pattern(n):
    for i in range(1, n+1):
        for j in range(i):
            print(i, end="")
        print()

x= int(input())
Pattern(x)

