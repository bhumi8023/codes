class LLParser: 
    def __init__(self, grammar): 
        self.grammar = grammar 
        self.first_sets = {} 
        self.follow_sets = {} 
        self.ll_table = {} 

    def compute_first_sets(self): 
        for non_terminal in self.grammar: 
            self.first_sets[non_terminal] = set() 
        
        while True: 
            updated = False 
            for non_terminal, productions in self.grammar.items(): 
                for production in productions: 
                    first_symbol = production[0] 
                    old_length = len(self.first_sets[non_terminal]) 
                    
                    if first_symbol in self.grammar: 
                        self.first_sets[non_terminal] |= self.first_sets[first_symbol]
                    else: 
                        self.first_sets[non_terminal].add(first_symbol) 
                    
                    if len(self.first_sets[non_terminal]) != old_length: 
                        updated = True 
            if not updated: 
                break 

    def compute_follow_sets(self, start_symbol): 
        for non_terminal in self.grammar: 
            self.follow_sets[non_terminal] = set() 
        self.follow_sets[start_symbol].add('$') 

        while True: 
            updated = False 
            for non_terminal, productions in self.grammar.items(): 
                for production in productions: 
                    for i in range(len(production)): 
                        symbol = production[i] 
                        if symbol in self.grammar: 
                            old_length = len(self.follow_sets[symbol]) 
                            if i == len(production) - 1: 
                                self.follow_sets[symbol] |= self.follow_sets[non_terminal] 
                            else: 
                                next_symbol = production[i + 1] 
                                if next_symbol in self.grammar: 
                                    first_of_next = self.first_sets[next_symbol].copy() 
                                    if 'ε' in first_of_next: 
                                        first_of_next.remove('ε') 
                                        self.follow_sets[symbol] |= first_of_next 
                                        self.follow_sets[symbol] |= self.follow_sets[non_terminal]
                                    else: 
                                        self.follow_sets[symbol] |= first_of_next 
                                else: 
                                    self.follow_sets[symbol].add(next_symbol) 
                            
                            if len(self.follow_sets[symbol]) != old_length: 
                                updated = True 
            if not updated: 
                break 

    def construct_ll_table(self): 
        for non_terminal, productions in self.grammar.items(): 
            for production in productions: 
                first_symbol = production[0] 
                if first_symbol in self.grammar: 
                    first_set = self.first_sets[first_symbol] 
                else: 
                    first_set = {first_symbol} 

                for terminal in first_set: 
                    if terminal != 'ε': 
                        self.ll_table[(non_terminal, terminal)] = production 
                
                if 'ε' in first_set: 
                    for terminal in self.follow_sets[non_terminal]: 
                        self.ll_table[(non_terminal, terminal)] = production 

    def parse(self, input_string): 
        stack = ['$', 'E'] 
        input_string += '$' 
        input_index = 0 
        print(f"{'Stack':<20} {'Input':<15} {'Action'}")
        print("-" * 50)
        
        while len(stack) > 0: 
            stack_content = ''.join(stack) 
            remaining_input = input_string[input_index:] 
            stack_top = stack[-1] 
            current_input = input_string[input_index] 

            if stack_top == '$' and current_input == '$': 
                print(f"{stack_content:<20} {remaining_input:<15} Accept") 
                print("\nString Accepted!") 
                return True 

            if stack_top == current_input: 
                print(f"{stack_content:<20} {remaining_input:<15} Match '{current_input}'") 
                stack.pop() 
                input_index += 1 
            elif (stack_top, current_input) in self.ll_table: 
                production = self.ll_table[(stack_top, current_input)] 
                print(f"{stack_content:<20} {remaining_input:<15} Apply {stack_top} -> {production}") 
                stack.pop() 
                if production != 'ε': 
                    for s in reversed(production):
                        stack.append(s)
            else: 
                print(f"{stack_content:<20} {remaining_input:<15} Error") 
                return False 

if __name__ == "__main__": 
    grammar = { 
        'E': ['TQ'], 
        'Q': ['+TQ', 'ε'], 
        'T': ['FR'], 
        'R': ['*FR', 'ε'], 
        'F': ['(E)', 'i'] 
    } 
    parser = LLParser(grammar) 
    parser.compute_first_sets() 
    parser.compute_follow_sets('E') 
    parser.construct_ll_table() 
    parser.parse("i+i*i")