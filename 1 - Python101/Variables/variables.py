# Integer
students_count = 1000
print(students_count)
print(type(students_count))  # printf the type of variable || <class 'int'>

# Floating point
rating = 4.99
print(rating)

# Boolean
is_published = False
print(is_published)

# By adding """ """, the text will besaved in multiple lines
course_name = """
    Multiple
    Lines
    :)
    """
print(course_name)


# Assignation
x = 1
y = 2
print(x, y)

# Other options to assign values
x, y = 3, 4
print(x, y)

x = y = 5
print(x, y)

x = 1
print(id(x))

x = x + 1
print(id(x))  # New location for new value, at some point python releases the allocated memory for the older value

#int - unmutable
#array - mutable
