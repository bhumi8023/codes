def is_comment(line):
    if line.strip().startswith('#'):
        return True 
    return False

def main():
    line = input("Enter a line: ")
    # Check if the line is a comment
    if is_comment(line):
        print("The given line is a comment.")
    else:
         print("The given line is not a comment.")    

if __name__ =="__main__":
    main()

    