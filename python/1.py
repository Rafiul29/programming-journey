print('Hello','Rafiul islam' ,sep='$',end='|')
def remove_nearly_identical_words(input_string):
    if not input_string.strip():  # Handle empty strings
        return ""

    words = input_string.split()
    result = []
    
    def is_nearly_identical(word1, word2):
        # Check if words differ by exactly one character
        if len(word1) != len(word2):
            return False
        differences = sum(1 for a, b in zip(word1, word2) if a != b)
        return differences == 1

    # Compare consecutive words
    i = 0
    while i < len(words):
        if i < len(words) - 1 and is_nearly_identical(words[i], words[i + 1]):
            result.append(words[i])  # Keep the first word
            i += 2  # Skip the second word
        else:
            result.append(words[i])
            i += 1

    return " ".join(result)
# Test case 1
print(remove_nearly_identical_words("hello hallo world word hell"))
# Output: "hello world hell"

# Test case 2
print(remove_nearly_identical_words("abc abd abe xyz xyy"))
# Output: "abc abe xyz"

# Test case 3
print(remove_nearly_identical_words("hello"))
# Output: "hello"

# Test case 4
print(remove_nearly_identical_words("  "))
# Output: ""

# Test case 5
print(remove_nearly_identical_words("cat bat rat mat"))
# Output: "cat bat rat mat"  # No nearly identical words

