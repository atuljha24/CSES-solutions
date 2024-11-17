#AUTHOR: ATUL JHA

# Take input from the user for the number of rows
rows = int(input("Enter the number of rows: "))

# Upper Triangular Matrix
print("\nUpper Triangular Matrix:")
for i in range(rows):
    for j in range(i, rows):
        print("*", end=" ")
    print("", end="\n")  # Print an empty string and force a newline

# Lower Triangular Matrix
print("\nLower Triangular Matrix:")
for i in range(rows):
    for j in range(i):
        print("*", end=" ")
    print("", end="\n")  # Print an empty string and force a newline

# Pyramid of Asterisks
print("\nPyramid of Asterisks:")
for i in range(rows):
    for j in range(rows - i - 1):
        print(" ", end="")
    for k in range(2 * i + 1):
        print("*", end="")
    print("", end="\n")  # Print an empty string and force a newline