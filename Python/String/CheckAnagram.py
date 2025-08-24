# Check Anagram
# Task:Write a function that checks if two strings are anagrams (same letters, different order).
# Example:
# in > "listen", "silent"
# out > True

# in > "hello", "world"
# out > False

def isAnagram(s1,s2):
    countT=0
    countF=0
    Letter1= s1
    Letter2= s2
    for i in Letter1:
        if i in Letter2:
            countT+=1
        else:
            countF+=1
    if countF >=1 :
        return False
    else:
        return True
    
Str1 = str(input().lower())
Str2 = str(input().lower())
res = isAnagram(Str1,Str2)
if res == True:
    print("Yes the both words are anagram")
else:
    print("No")