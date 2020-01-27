
course = "      Python programming     "

""" Prints string to upper cases """
print(course.upper())  # PYTHON PROGRAMMING    .

""" Prints string to lower cases """
print(course.lower())  # python programming    .

""" Prints the first letter of every word to upper case """
print(course.title())  # Python Programming    .

""" Gets rid of the blanck spaces at the beggining or the end of the string. """
print(course.strip())  # Python programming.

""" If not specified, gets rid of the blank spaces at the end of the string... """
print(course.rstrip())  # Python programming.

""" If specified, gets rid of the spesified string if the oiginal string ends
    with some spesified parameters and stops until it finds a character that is not a parameter """
print(course.rstrip('ming '))  # Python programming.

""" Characters before 'pro' """
print(course.find("pro"))           # 13

""" Characters before 'pro' """
print(course.find("Pro"))           # -1 ('Pro' was not in the string)

""" Replaces every 'o' with '-' """
print(course.replace("o", "-"))     # Pyth-n pr-gramming   .

print("programming" in course)      # True
print("programming" not in course)  # False

print("Programming" in course)      # False
print("Programming" not in course)  # True
