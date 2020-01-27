numbers = [9, 8, 4, 7, 4, 3, 1, 6, 5]

max = numbers[0]

for x in range(0, 9):
    if (max < numbers[x]):
        max = numbers[x]


print(max)
