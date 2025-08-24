# Count Vowels & Consonants
# Task:Take a string input and count how many vowels and consonants are in it.
# Example:
# in > "hello"
# out > vowels = 2, consonants = 3

def CountV(s):
    v =0
    c =0 
    for i in s:
        if i in "aeiou": # we can use as a variable of vowels = {"a","e","i","o","u"}
            v+=1
        elif i.isalpha(): # only aplhabet can count not space or number
            c+=1
    return v, c

w = str(input().lower())
res= CountV(w)
print(res)