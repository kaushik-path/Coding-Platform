# Q4. Mirror Right-Angled Triangle (Stars)
# Input: n = 5
# Output
#     *
#    **
#   ***
#  ****
# *****

def Star(n):
    for i in range(1,n+1):
        print(" " * (n-i) + ("*" * (i)))

n = int(input())
Star(n)
    