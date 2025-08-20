# Read a given string, change the character at a given index and then print the modified string.
# Function Description
# Complete the mutate_string function in the editor below.
# mutate_string has the following parameters:

# string string: the string to change
# int position: the index to insert the character at
# string character: the character to insert
# Returns

# string: the altered string
# Input Format

# The first line contains a string, .
# The next line contains an integer , the index location and a string , separated by a space.

# Sample Input
# STDIN           Function
# -----           --------
# abracadabra     s = 'abracadabra'
# 5 k             position = 5, character = 'k'
# Sample Output
#     abrackdabra

def MutateSting(Str, N, Char):
    l = list(Str) # l is a list which stores Str element
    l[N] = Char # put char in l nth position
    Str = ''.join(l) # joins all the l element in one string
    return Str

Str = str(input())
N, Ch = input().split()
res= MutateSting(Str, int(N), Ch)
print(res)
