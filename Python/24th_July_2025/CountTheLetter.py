# Question 2: Count How Many Times a Letter Appears in a Word

# Task: Ask the user to input a word. Then, using a for loop, count how many times the letter 'a' appears in that word.

name = str(input().lower())
count = 0
for i in name:
    if i == 'a':
        count+=1
print(f"A repeats {count}x Times")