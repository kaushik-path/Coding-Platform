# You are given a string. Split the string on a " " (space) delimiter and join using a - hyphen.

# Function Description
# Complete the split_and_join function in the editor below.
# split_and_join has the following parameters:

# string line: a string of space-separated words
# Returns

# string: the resulting string
# Input Format
# The one line contains a string consisting of space separated words.

# Sample Input
#     this is a string [this,is,a,string]   
# Sample Output
#     this-is-a-string

def SplitAndJoin(S): #void/int/bool
    S = S.split(" ")  #its convert the String into list separate all the element which have space in between
    S = "-".join(S) # and joins with -
    return S

Str= str(input())
Res= SplitAndJoin(Str)
print(Res)