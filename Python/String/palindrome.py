# Example 1:
# Input: Str =  “ABCDCBA”
# Output: Palindrome
# Explanation: String when reversed is the same as string.

# Example 2:
# Input: Str = “TAKE U FORWARD”
# Output: Not Palindrome
# Explanation: String when reversed is not the same as string.

def isPalindrome(str):
    s1 = str
    revStr = s1[::-1]
    if s1==revStr:
        return True
    else:
        return False
    
Str= str(input())
res = isPalindrome(Str)
if res== True:
    print(f"{Str} word is a Palindrome")
else:
    print(f"{Str} is not")