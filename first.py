import re

# Define the tokens using regular expressions
token_patterns = [
    ('STRING', r'\".*?\"'),
    ('CHARACTER', r'[a-zA-Z]'),
    ('NUMBER', r'\d+'),
    ('ADD', r'\+'),
    ('SUB', r'\-'),
    ('MUL', r'\*'), # New tuple for the "MUL" token
    ('DIV', r'\/'),
    ('WHITESPACE', r'\s+'),
    # My token patterns
    ('HINDI CHARACTER', r'[\u0900-\u097F]')
]

# Lexical analyzer function
def lex(input_string):
    tokens = []
    while input_string:
        for token_name, pattern in token_patterns:
            match = re.match(pattern, input_string)
            if match:
                value = match.group(0)
                tokens.append((token_name, value))
                input_string = input_string[len(value):]
                break
        else:
            raise ValueError("Invalid input at: {}".format(input_string))
    return tokens

# Example usage
input_expr = "12 + 34 - 5 * \"azad\""
tokens = lex(input_expr)
print("Input Expression:", input_expr)
for char in tokens:
    print(char)