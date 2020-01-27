first = "Hello"
second = "World"

# Add two words
full_0 = first + " " + second
print(full_0)  # Otput: Hello World

# Formatted strings, you can put any valid expressions in between braces
full_1 = f"{first} {second}"
print(full_1)  # Otput: Hello World

test = f"{len(full_0)} {2 + 2}"
print(test)  # Output: 11 4
