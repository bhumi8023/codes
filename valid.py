import re

def is_valid_identifier(identifer):
    pattern = r'^[a-zA-Z_][a-zA-Z0-9_]*$'

    if re.match(pattern,identifer):
     return True
    else:
     return False
identifer1 = "my_variable"
identifer2 = "123abc"
identifer3 = "_invalid$"

if is_valid_identifier(identifer1):
    print(f"{identifer1} is a valid identifer")
else:
     print(f"{identifer1} is not a valid identifer")   

if is_valid_identifier(identifer2):
    print(f"{identifer2} is a valid identifer")
else:
     print(f"{identifer2} is not a valid identifer")   

if is_valid_identifier(identifer3):
    print(f"{identifer3} is a valid identifer")
else:
     print(f"{identifer3} is not a valid identifer")        
