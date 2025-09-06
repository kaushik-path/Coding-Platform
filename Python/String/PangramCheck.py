# A pangram is a sentence that contains all 26 letters of the alphabet at least once.
# Example:
# "The quick brown fox jumps over the lazy dog" ✅ (pangram)
# "Hello world" ❌ (not pangram, missing many letters)
import string
def isPangram(s):
    s = s.replace(" ", "") #(h,e,l,l,o,W,o,r,l,d)
    letterInS = set(s) #(h,e,l,o,w,r,d) in short unique element
    alpha = set(string.ascii_lowercase)
    if alpha.issubset(letterInS):
        return True
    else: False
    
x = str(input().lower())
y = isPangram(x)
if y == 1:
    print("Pangram")
else:
    print("No Pangram Found")