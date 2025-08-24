# Reverse Words
# Task: Take a sentence input and reverse the order of the words.
# Example:
# in > "I love Python"
# out > "Python love I"

def revWord(s):
    w= s.split(" ")  # split the word when space triggered w = ["I", "am", "Kaushik"]
    rev_word= w[::-1] # slicing and reverse start : end : -1(print from back)
    # we can use reverse() to reverse w, rev_word = w.reverse() so we skip the join
    rev_word = " ".join(rev_word)
    return rev_word

Sent = str(input())
reversWord = revWord(Sent)
print(reversWord)
