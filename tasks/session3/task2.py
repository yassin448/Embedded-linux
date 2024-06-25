def getasciivalue(character):
    return ord(character)

def main():
   
    char = input("Enter a character: ")

    
    if len(char) == 1:
      ascii_value = getasciivalue(char)
      print(f"The ASCII value of '{char}' is {ascii_value}.")
    else:
        
        print("Please enter a single character.")
    

main()