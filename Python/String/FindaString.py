# In this challenge, the user enters a string and a substring. You have to print the number of times that the substring occurs in the given string. String traversal will take place from left to right, not from right to left.
# NOTE: String letters are case-sensitive.
# Sample Input
    # ABCDCDC
    # CDC
# Sample Output
    # 2

def Find_a_String(s1, s2):
    l1 = len(s1)
    l2 = len(s2)
    Count = 0
    for i in range(l1-l2+1):
        if s1[i:i+l2]== s2:
            Count+=1
    return Count

s1= str(input())
s2= str(input())
Res = Find_a_String(s1, s2)
print(Res)