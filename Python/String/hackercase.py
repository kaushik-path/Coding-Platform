# You are given a string and your task is to swap cases. In other words, convert all lowercase letters to uppercase letters and vice versa.

# For Example:

# Www.HackerRank.com → wWW.hACKERrANK.COM
# Pythonist 2 → pYTHONIST 2  

def HackerCase(s):
    out = ""
    for i in s:
        if i.islower():
            out += i.upper()
        elif i.isupper():
            out += i.lower()
        else:
            out += i
    return out

s= str(input())
result= HackerCase(s)
print(result)