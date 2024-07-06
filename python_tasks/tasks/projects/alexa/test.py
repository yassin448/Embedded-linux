# Sample list and string
items = ['apple', 'banana', 'cherry']
my_string = "I have a banana and an orange."

# Check if the string contains any item from the list
for item in items:
    if item in my_string:
        print(f"The string contains: {item}")