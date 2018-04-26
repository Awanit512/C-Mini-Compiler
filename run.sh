echo "---------------"
echo "MINI C COMPILER"
echo "---------------"
echo "Supported constructs : For loop, Ternary Operators and Structures"
yacc -d AST.y
lex AST.l
gcc -g y.tab.c lex.yy.c -ll -o AST
yacc -d ICG.y
lex ICG.l
gcc -g y.tab.c lex.yy.c -ll -o ICG
echo "Use ./SymbolTable < filename to generate symbol table"
echo "Use ./AST < filename to generate abstract syntax tree"
echo "Use ./ICG < filename to generate intermediate code"
echo "python3 optimize.py to optimize the generated intermediate code"
