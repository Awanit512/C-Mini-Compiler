# C-Mini-Compiler
## Compiler Design Lab Project, PES University
### Implement the front end of the compiler for C language using Lex and Yacc for the following constructs :
1. Structs
2. Ternary Operators
3. For Loops


### How to run
Clone this repository and execute `sh run.sh`. After execution of various phases of the compiler you may use ```sh clean.sh``` to remove output files.

### Project details

Following output files are generated upon execution of ```run.sh``` :

1. Symbol Table : ```./SymbolTable < filename``` <br>
Symbol table contains keywords and identifiers, their datatypes and values with some preliminary evaluation of simple expressions. The output of this file will be in ```symbol_table.txt``` and the errors while creating the symbol table are stored in ```errors.txt```.
The errors handled by the symbol table are
- Undeclared variables
- Multiple declarations of a variable within the same scope
- Invalid value for given datatype

2. Abstract Syntax Tree : ```./AST < filename``` <br>
Uses ```graph.c``` and ```header.h``` to display the abstract syntax tree.

3. Intermediate Code Generation : ```./ICG < filename``` <br>
Generates an ```if-goto``` form of intermediate representation of code in ```output_file.txt```. Handles nested for loops, nested ternary operators too.

4. Code Optimization : ```python3 optimize.py``` or ``` python3 optimize.py filename``` <br>
Requires ```if-goto``` form of intermediate representation of code as input. If ```filename``` is not specified, it takes the intermediate code from ```output_file.txt``` by default. <br>
Following code optimizations were performed
- Dead code elimination
- Constant folding

### References
1. [Grammar for C in Lex and Yacc](https://www.lysator.liu.se/c/ANSI-C-grammar-y.html)
2. [Tutorial (Lex and Yacc) and code for drawing abstract syntax tree](http://epaperpress.com/lexandyacc/download/LexAndYaccTutorial.pdf)
