# Sum of Digits Until Single Digit
# Input: 9875  
# Step 1: 9 + 8 + 7 + 5 = 29  
# Step 2: 2 + 9 = 11  
# Step 3: 1 + 1 = 2  
# Output: 2

def single(n):
    while(n>=10):
        out=0
        for i in str(n):
            out = out + int(i)
        n=out
    print(n)

n=int(input())
single(n)