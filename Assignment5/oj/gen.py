import random

# Function to generate a random string of given length
def generate_random_string(length):
    return ''.join(random.choice('abcdefghijklmnopqrstuvwxyz') for _ in range(length))

# Function to generate a random sequence of operations
def generate_random_operations():
    operations = []
    for _ in range(200000):
        op_type = random.choice([1, 2])
        if op_type == 1:
            operations.append((1,))
        else:
            op = (2, random.choice([1, 2]), random.choice('abcdefghijklmnopqrstuvwxyz'))
            operations.append(op)
    return operations

# Test Case
input_string = generate_random_string(100000)  # Change the length as needed
operations = generate_random_operations()

# Displaying the generated input
print(f"\n{input_string}\n{len(operations)}")
for op in operations:
    print(*op)

# Expected Output:
# Your expected output would depend on the generated input, and you need to run this in your C program.
