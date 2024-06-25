def get_ascii_value(character):
    return ord(character)

def main():
   
    char = input("Enter a character: ")

    
    if len(char) == 1:
      ascii_value = get_ascii_value(char)
      print(f"The ASCII value of '{char}' is {ascii_value}.")
    else:
        
        print("Please enter a single character.")
    

main()