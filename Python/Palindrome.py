# Reverse a Number and Check for Palindrome
# Input: 121
# Output: Palindrome Number

# Input: 123
# Output: Not Palindrome

def isPalindrome(num):
    n=num
    rev=0
    while (num>0):
        rem = num % 10
        rev = rev*10 + rem
        num= num//10
    print(rev)

    if n == rev:
        print("Palindrome")
    else:
        print("not Palindrome")

n= int(input())
isPalindrome(n)
