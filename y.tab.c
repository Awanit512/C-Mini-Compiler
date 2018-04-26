/* original parser id follows */
/* yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93" */
/* (use YYMAJOR/YYMINOR for ifdefs dependent on parser version) */

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20140715

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)
#define YYENOMEM       (-2)
#define YYEOF          0
#define YYPREFIX "yy"

#define YYPURE 0

#line 2 "ICG.y"
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#define LIMIT 1024

/*	extern int lineno = 0;*/
	void yyerror(const char*);
	int yylex();
	int temp_no = 0;
	int label = 0;
	FILE *outfile;

	void arithmetic_gen(char op[5]);
	void display_stack();
	void push(char *);
	char *pop();
	void label_push(int);
	char *label_pop();

	typedef struct Stack {
		char *items[LIMIT];
		int top;
	}Stack;
	Stack stack;
	Stack label_stack;

	

#line 31 "ICG.y"
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union
{
	char string[128];
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 62 "y.tab.c"

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define HASH 257
#define INCLUDE 258
#define DEFINE 259
#define STDIO 260
#define STDLIB 261
#define MATH 262
#define STRING 263
#define TIME 264
#define IDENTIFIER 265
#define INTEGER_LITERAL 266
#define STRING_LITERAL 267
#define HEADER_LITERAL 268
#define FLOAT_LITERAL 269
#define INC_OP 270
#define DEC_OP 271
#define LE_OP 272
#define GE_OP 273
#define EQ_OP 274
#define NE_OP 275
#define ADD_ASSIGN 276
#define SUB_ASSIGN 277
#define CHAR 278
#define INT 279
#define FLOAT 280
#define VOID 281
#define MAIN 282
#define STRUCT 283
#define FOR 284
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    1,    1,    2,    2,    2,    2,    2,    3,    3,    3,
    3,    3,    5,    5,    5,    5,    5,    5,    5,    6,
    6,    6,    7,    7,    7,    7,    8,    8,    8,    9,
    9,    9,    9,    9,   10,   10,   10,   11,   12,   13,
   11,   14,   14,   14,   14,    4,    4,   15,   16,   16,
   18,   18,   20,   19,   19,   17,   17,   17,   17,   21,
   21,   21,   22,   22,   23,   23,   24,   24,   25,   25,
   26,   26,   26,   27,   27,   27,   28,   28,   31,   31,
   32,   32,   29,   29,   33,   34,   35,   36,   30,    0,
    0,   37,   37,   37,
};
static const YYINT yylen[] = {                            2,
    3,    5,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    3,    1,    3,    3,    2,    2,    2,    2,    1,
    2,    2,    1,    3,    3,    3,    1,    3,    3,    1,
    3,    3,    3,    3,    1,    3,    3,    1,    0,    0,
    7,    1,    3,    3,    3,    1,    3,    1,    2,    3,
    1,    3,    0,    4,    1,    1,    1,    1,    1,    4,
    5,    2,    1,    2,    2,    3,    2,    1,    1,    3,
    2,    3,    1,    1,    1,    1,    2,    3,    1,    2,
    1,    1,    1,    2,    0,    0,    0,    0,   11,    1,
    2,    5,    1,    1,
};
static const YYINT yydefred[] = {                         0,
    0,   57,    0,   56,    0,    0,   94,   93,    0,   59,
   90,    0,    0,    0,    0,   91,    0,   49,    0,   51,
    1,    0,    0,    0,   58,    0,    0,   63,    0,    0,
    0,   50,    3,    4,    5,    6,    7,    0,    0,    0,
   67,   60,   64,    0,    0,   65,    0,   69,    0,   52,
    2,    0,   92,   61,    0,    8,    9,   11,   10,    0,
    0,    0,    0,    0,   13,    0,   23,    0,    0,    0,
    0,   48,   71,    0,   66,    0,   42,   54,    0,   83,
   77,    0,   46,   81,   82,   74,   75,   76,    0,   79,
   72,   18,   19,    0,   21,   22,   16,   17,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   70,    0,    0,    0,    0,    0,   84,   78,
   80,   12,   14,   15,   24,   25,   26,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   44,   45,   43,   85,
   47,    0,    0,    0,   86,    0,    0,   41,    0,    0,
   88,    0,   89,
};
static const YYINT yydgoto[] = {                          6,
    7,   38,   65,   82,   66,   76,   68,   69,   70,   71,
   77,  112,  144,   83,   73,    8,   26,   19,   20,   30,
   10,   27,   28,   29,   47,   48,   85,   86,   87,   88,
   89,   90,  143,  147,  150,  152,   11,
};
static const YYINT yysindex[] = {                      -224,
 -234,    0, -244,    0, -113, -224,    0,    0,  -42,    0,
    0,  -56,   23,  -33,   62,    0,    0,    0,  -28,    0,
    0,  102,   57,   62,    0,   62,   16,    0,  -47,   67,
 -123,    0,    0,    0,    0,    0,    0,   89,   30,   38,
    0,    0,    0,  113,   44,    0,  -22,    0,   44,    0,
    0,  -40,    0,    0,   44,    0,    0,    0,    0,  -13,
  -13,   44,   44,   44,    0,  -38,    0,   -2,   -9,  -53,
 -213,    0,    0,  -52,    0,  -60,    0,    0,  132,    0,
    0,   35,    0,    0,    0,    0,    0,    0,  -20,    0,
    0,    0,    0,  -12,    0,    0,    0,    0,  140,  -92,
   44,   44,   44,   44,   44,   44,   44,   44,   44,   44,
   44,  120,    0,   44,   44,   44,  163,   44,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   -2,   -2,   -9,
   -9,   -9,   -9,  -53,  -53,   44,    0,    0,    0,    0,
    0,  147,  163,  134,    0,   44,   44,    0,  147,  157,
    0,    1,    0,
};
static const YYINT yyrindex[] = {                         0,
    0,    0,  -41,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   74,    0,    0,   27,    0,    0,    0,
    0,    0,    0,    0,    0,  -44,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  138,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    6,    0,   56,   76,  136,
  233,    0,    0,    0,    0,   33,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   63,   86,   96,
  106,  116,  126,  146,  152,    0,    0,    0,    0,    0,
    0,  142,    0,    0,    0,    0,    0,    0,  160,    0,
    0,    0,    0,
};
static const YYINT yygindex[] = {                         0,
    0,    0,   12,  -34,    0,  339,  -23,    3,   51,    0,
   -3,    0,    0,  186,  159,  -31,  234,    0,  171,    0,
    0,  183,  -14,  202,    0,  162,   85,  203,  -87,    0,
    0,  166,    0,    0,    0,    0,  242,
};
#define YYTABLESIZE 485
static const YYINT yytable[] = {                         62,
  116,   99,   63,   22,   64,   45,  108,  100,  109,   15,
   45,   46,   43,   68,   68,   31,   18,   58,   80,   62,
   84,   74,   63,   12,   64,   43,   62,   94,  122,  140,
   32,  118,    1,  104,  103,  105,   75,   13,   80,  101,
   62,   72,   20,   63,  102,   64,   20,   20,   20,   20,
   20,   72,   20,    2,    3,  145,    4,   84,    5,   80,
  110,  111,   23,   20,   20,   20,   20,   20,   20,   23,
   55,   92,   93,   23,   23,   23,   23,   23,  118,   23,
  128,  129,   52,   62,   81,   55,   63,   53,   64,   24,
   23,   23,   23,  119,   23,   23,   27,   39,   27,   27,
   27,  142,   52,   28,  120,   28,   28,   28,  130,  131,
  132,  133,  149,   27,   27,   27,   30,   27,   27,   30,
   28,   28,   28,   52,   28,   28,   29,   49,   29,   29,
   29,   62,   62,   30,   30,   30,   33,   30,   30,   33,
   42,   17,  148,   29,   29,   29,   34,   29,   29,   34,
   51,   14,   52,   33,   33,   33,   31,   33,   33,   31,
  134,  135,   54,   34,   34,   34,   32,   34,   34,   32,
   55,  117,  124,   31,   31,   31,   35,   31,   31,   35,
  123,   73,  136,   32,   32,   32,   36,   32,   32,   36,
  118,  146,   37,   35,   35,   37,   73,  151,   35,   40,
   87,   50,   62,   36,   36,   63,   40,   64,   36,   37,
   37,   21,   44,   91,   37,  114,  115,   44,  106,  107,
   68,   80,   17,   58,   56,   57,   58,   41,   59,   60,
   61,   97,   98,    9,   78,  113,  153,    2,   25,    9,
    4,   53,    5,   79,   56,   57,   58,   16,   59,   60,
   61,   56,   57,   58,  121,   59,    0,    2,   25,    0,
    4,    0,    5,   79,    0,   56,   57,   58,    0,   59,
   60,   61,    0,   38,    0,    0,   38,   20,   20,   20,
   20,   20,   20,    0,   79,    9,    0,    0,    0,    0,
   38,   38,    0,    2,   25,   39,    4,    0,    5,  137,
  138,  139,    0,  141,   23,   23,   23,   23,   56,   57,
   58,    0,   59,   60,   61,    2,   25,    0,    4,    0,
    5,    0,    9,    0,    0,    0,    0,   27,   27,   27,
   27,    0,    0,    0,   28,   28,   28,   28,   62,    2,
   25,    0,    4,    0,    5,    0,    0,   30,   30,   30,
   30,   62,   62,    0,   62,    0,   62,   29,   29,   29,
   29,   33,   34,   35,   36,   37,    0,   33,   33,   33,
   33,    0,    0,    0,    0,    0,    0,   34,   34,   34,
   34,    0,    0,   67,    0,    0,    0,   31,   31,   31,
   31,    0,    0,   67,    0,    0,    0,   32,   32,   32,
   32,   95,   96,    0,    0,    0,    0,    0,    0,   35,
   35,    0,    0,    0,    0,    0,    0,    0,    0,   36,
   36,    0,    0,    0,    0,   37,   37,   56,   57,   58,
    0,   59,   60,   61,    0,    0,    0,    0,    0,  125,
  126,  127,   67,   67,   67,   67,   67,   67,   67,   67,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,   67,
};
static const YYINT yycheck[] = {                         40,
   61,   40,   43,   60,   45,   58,   60,   46,   62,  123,
   58,   59,   27,   58,   59,   44,   59,   59,   59,   40,
   52,   44,   43,  258,   45,   40,   40,   62,   41,  117,
   59,   44,  257,   43,   37,   45,   59,  282,   59,   42,
   40,   45,   37,   43,   47,   45,   41,   42,   43,   44,
   45,   55,   47,  278,  279,  143,  281,   89,  283,   59,
  274,  275,   40,   58,   59,   60,   61,   62,   63,   37,
   44,   60,   61,   41,   42,   43,   44,   45,   44,   47,
  104,  105,  123,   40,  125,   59,   43,   61,   45,  123,
   58,   59,   60,   59,   62,   63,   41,   41,   43,   44,
   45,  136,  123,   41,  125,   43,   44,   45,  106,  107,
  108,  109,  147,   58,   59,   60,   41,   62,   63,   44,
   58,   59,   60,  123,   62,   63,   41,   61,   43,   44,
   45,   58,   59,   58,   59,   60,   41,   62,   63,   44,
  125,  265,  146,   58,   59,   60,   41,   62,   63,   44,
   62,  265,  123,   58,   59,   60,   41,   62,   63,   44,
  110,  111,  125,   58,   59,   60,   41,   62,   63,   44,
   58,   40,  265,   58,   59,   60,   41,   62,   63,   44,
   41,   44,   63,   58,   59,   60,   41,   62,   63,   44,
   44,   58,   41,   58,   59,   44,   59,   41,   63,   58,
   41,   31,   40,   58,   59,   43,   24,   45,   63,   58,
   59,  268,  265,   55,   63,  276,  277,  265,  272,  273,
  265,   59,  265,  265,  265,  266,  267,   26,  269,  270,
  271,  270,  271,    0,   49,   74,  152,  278,  279,    6,
  281,   39,  283,  284,  265,  266,  267,    6,  269,  270,
  271,  265,  266,  267,   89,  269,   -1,  278,  279,   -1,
  281,   -1,  283,  284,   -1,  265,  266,  267,   -1,  269,
  270,  271,   -1,   41,   -1,   -1,   44,  272,  273,  274,
  275,  276,  277,   -1,  284,   52,   -1,   -1,   -1,   -1,
   58,   59,   -1,  278,  279,   63,  281,   -1,  283,  114,
  115,  116,   -1,  118,  272,  273,  274,  275,  265,  266,
  267,   -1,  269,  270,  271,  278,  279,   -1,  281,   -1,
  283,   -1,   89,   -1,   -1,   -1,   -1,  272,  273,  274,
  275,   -1,   -1,   -1,  272,  273,  274,  275,  265,  278,
  279,   -1,  281,   -1,  283,   -1,   -1,  272,  273,  274,
  275,  278,  279,   -1,  281,   -1,  283,  272,  273,  274,
  275,  260,  261,  262,  263,  264,   -1,  272,  273,  274,
  275,   -1,   -1,   -1,   -1,   -1,   -1,  272,  273,  274,
  275,   -1,   -1,   45,   -1,   -1,   -1,  272,  273,  274,
  275,   -1,   -1,   55,   -1,   -1,   -1,  272,  273,  274,
  275,   63,   64,   -1,   -1,   -1,   -1,   -1,   -1,  274,
  275,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  274,
  275,   -1,   -1,   -1,   -1,  274,  275,  265,  266,  267,
   -1,  269,  270,  271,   -1,   -1,   -1,   -1,   -1,  101,
  102,  103,  104,  105,  106,  107,  108,  109,  110,  111,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  146,
};
#define YYFINAL 6
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 284
#define YYUNDFTOKEN 324
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? YYUNDFTOKEN : (a))
#if YYDEBUG
static const char *const yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,"'%'",0,0,"'('","')'","'*'","'+'","','","'-'","'.'","'/'",0,0,0,0,0,0,0,0,
0,0,"':'","';'","'<'","'='","'>'","'?'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
"'{'",0,"'}'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"HASH","INCLUDE","DEFINE","STDIO","STDLIB",
"MATH","STRING","TIME","IDENTIFIER","INTEGER_LITERAL","STRING_LITERAL",
"HEADER_LITERAL","FLOAT_LITERAL","INC_OP","DEC_OP","LE_OP","GE_OP","EQ_OP",
"NE_OP","ADD_ASSIGN","SUB_ASSIGN","CHAR","INT","FLOAT","VOID","MAIN","STRUCT",
"FOR",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : translation_unit",
"headers : HASH INCLUDE HEADER_LITERAL",
"headers : HASH INCLUDE '<' libraries '>'",
"libraries : STDIO",
"libraries : STDLIB",
"libraries : MATH",
"libraries : STRING",
"libraries : TIME",
"primary_expression : IDENTIFIER",
"primary_expression : INTEGER_LITERAL",
"primary_expression : FLOAT_LITERAL",
"primary_expression : STRING_LITERAL",
"primary_expression : '(' expression ')'",
"postfix_expression : primary_expression",
"postfix_expression : postfix_expression '(' ')'",
"postfix_expression : postfix_expression '.' IDENTIFIER",
"postfix_expression : postfix_expression INC_OP",
"postfix_expression : postfix_expression DEC_OP",
"postfix_expression : INC_OP primary_expression",
"postfix_expression : DEC_OP primary_expression",
"unary_expression : postfix_expression",
"unary_expression : '+' unary_expression",
"unary_expression : '-' unary_expression",
"multiplicative_expression : unary_expression",
"multiplicative_expression : multiplicative_expression '*' unary_expression",
"multiplicative_expression : multiplicative_expression '/' unary_expression",
"multiplicative_expression : multiplicative_expression '%' unary_expression",
"additive_expression : multiplicative_expression",
"additive_expression : additive_expression '+' multiplicative_expression",
"additive_expression : additive_expression '-' multiplicative_expression",
"relational_expression : additive_expression",
"relational_expression : relational_expression '<' additive_expression",
"relational_expression : relational_expression '>' additive_expression",
"relational_expression : relational_expression LE_OP additive_expression",
"relational_expression : relational_expression GE_OP additive_expression",
"equality_expression : relational_expression",
"equality_expression : equality_expression EQ_OP relational_expression",
"equality_expression : equality_expression NE_OP relational_expression",
"conditional_expression : equality_expression",
"$$1 :",
"$$2 :",
"conditional_expression : equality_expression $$1 '?' expression $$2 ':' conditional_expression",
"assignment_expression : conditional_expression",
"assignment_expression : unary_expression '=' assignment_expression",
"assignment_expression : unary_expression ADD_ASSIGN assignment_expression",
"assignment_expression : unary_expression SUB_ASSIGN assignment_expression",
"expression : assignment_expression",
"expression : expression ',' assignment_expression",
"constant_expression : conditional_expression",
"declaration : type_specifier ';'",
"declaration : type_specifier init_declarator_list ';'",
"init_declarator_list : init_declarator",
"init_declarator_list : init_declarator_list ',' init_declarator",
"$$3 :",
"init_declarator : IDENTIFIER $$3 '=' assignment_expression",
"init_declarator : IDENTIFIER",
"type_specifier : VOID",
"type_specifier : CHAR",
"type_specifier : INT",
"type_specifier : struct_specifier",
"struct_specifier : STRUCT '{' struct_declaration_list '}'",
"struct_specifier : STRUCT IDENTIFIER '{' struct_declaration_list '}'",
"struct_specifier : STRUCT IDENTIFIER",
"struct_declaration_list : struct_declaration",
"struct_declaration_list : struct_declaration_list struct_declaration",
"struct_declaration : specifier_qualifier_list ';'",
"struct_declaration : specifier_qualifier_list struct_declarator_list ';'",
"specifier_qualifier_list : type_specifier specifier_qualifier_list",
"specifier_qualifier_list : type_specifier",
"struct_declarator_list : struct_declarator",
"struct_declarator_list : struct_declarator_list ',' struct_declarator",
"struct_declarator : ':' constant_expression",
"struct_declarator : IDENTIFIER ':' constant_expression",
"struct_declarator : IDENTIFIER",
"statement : compound_statement",
"statement : expression_statement",
"statement : iteration_statement",
"compound_statement : '{' '}'",
"compound_statement : '{' block_item_list '}'",
"block_item_list : block_item",
"block_item_list : block_item_list block_item",
"block_item : declaration",
"block_item : statement",
"expression_statement : ';'",
"expression_statement : expression ';'",
"$$4 :",
"$$5 :",
"$$6 :",
"$$7 :",
"iteration_statement : FOR '(' expression_statement $$4 expression_statement $$5 expression $$6 ')' $$7 statement",
"translation_unit : external_declaration",
"translation_unit : translation_unit external_declaration",
"external_declaration : INT MAIN '(' ')' compound_statement",
"external_declaration : declaration",
"external_declaration : headers",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#define YYINITSTACKSIZE 200

typedef struct {
    unsigned stacksize;
    YYINT    *s_base;
    YYINT    *s_mark;
    YYINT    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 198 "ICG.y"
void yyerror(const char *str)
{
	fflush(stdout);
	fprintf(stderr, "%s at line\n", str);
}
int main(){
	stack.top = -1;
	push("$");
	outfile = fopen("output_file.txt", "w");
	if (yyparse() != 0)
	{
		printf("Parse failed\n");
		exit(0);
	}
	printf("success\n");
	int i = 0;
	fclose(outfile);
	system("cat output_file.txt");
	return 0;
}
void push(char *str)
{
	stack.items[++stack.top] = (char*)malloc(LIMIT);
	strcpy(stack.items[stack.top], str);
}
char *pop()
{
	if (stack.top <= -1) {
		printf("\nError in evaluating expression\n");
		exit(0);
	}
	char *str = (char*)malloc(LIMIT);
	strcpy(str, stack.items[stack.top--]);
	free(stack.items[stack.top+1]);
	return str;
}
char *top(int off)
{
	return stack.items[stack.top-off];
}
void arithmetic_gen(char op[5])
{
	char temp[5];
	sprintf(temp,"t%d",temp_no++);
  	fprintf(outfile,"%s = %s %s %s\n",temp,top(1),op,top(0));
	pop(); pop(); push(temp);
}

void display_stack()
{
	int i;
	for(i=0; i<=stack.top; i++)
		printf("%s ", stack.items[i]);
		printf("\n");
}
void gen_true_code()
{
	if (stack.top > -1)
	{
		fprintf(outfile, "%s = %s\ngoto L%d\n", top(0), pop(), label+1);
		label_push(label+1);
		fprintf(outfile, "L%d :\n", label);
		label_push(label+1);
	}
	else
		fprintf(outfile, "%s\ngoto L%d\n", pop(), ++label);
}
void gen_false_code()
{
	if (stack.top > -1)
	{
		fprintf(outfile, "%s = %s\ngoto %s\n", top(0), pop(), label_pop());
		fprintf(outfile, "%s :\n", label_pop());
	}
	else
		fprintf(outfile, "%s\ngoto L%d\n", pop(), label-1);
}
void label_push(int label)
{
	char temp[5];
	sprintf(temp, "L%d", label);
	label_stack.items[++label_stack.top] = malloc(LIMIT);
	strcpy(label_stack.items[label_stack.top], temp);
	
}
char *label_pop()
{
	if (label_stack.top <= -1) {
		printf("\nError in evaluating expression\n");
		exit(0);
	}
	char *str = (char*)malloc(LIMIT);
	strcpy(str, label_stack.items[label_stack.top--]);
	free(label_stack.items[label_stack.top+1]);
	return str;
}

#line 573 "y.tab.c"

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    YYINT *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return YYENOMEM;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (YYINT *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return YYENOMEM;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return YYENOMEM;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = YYEOF;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    YYERROR_CALL("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == YYEOF) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
case 8:
#line 57 "ICG.y"
	{push(yystack.l_mark[0].string); yyval = yystack.l_mark[0];}
break;
case 9:
#line 58 "ICG.y"
	{push(yystack.l_mark[0].string); yyval = yystack.l_mark[0];}
break;
case 10:
#line 59 "ICG.y"
	{push(yystack.l_mark[0].string); yyval = yystack.l_mark[0];}
break;
case 11:
#line 60 "ICG.y"
	{push(yystack.l_mark[0].string); yyval = yystack.l_mark[0];}
break;
case 12:
#line 61 "ICG.y"
	{yyval=yystack.l_mark[-2];}
break;
case 13:
#line 64 "ICG.y"
	{yyval=yystack.l_mark[0];}
break;
case 16:
#line 67 "ICG.y"
	{push(yystack.l_mark[-1].string); push("1"); arithmetic_gen("+"); fprintf(outfile, "%s = %s\n", pop(), pop());}
break;
case 17:
#line 68 "ICG.y"
	{push(yystack.l_mark[-1].string); push("1"); arithmetic_gen("-"); fprintf(outfile, "%s = %s\n", pop(), pop());}
break;
case 18:
#line 69 "ICG.y"
	{push(yystack.l_mark[0].string); push("1"); arithmetic_gen("+"); fprintf(outfile, "%s = %s\n", pop(), pop());}
break;
case 19:
#line 70 "ICG.y"
	{push(yystack.l_mark[0].string); push("1"); arithmetic_gen("-"); fprintf(outfile, "%s = %s\n", pop(), pop());}
break;
case 20:
#line 73 "ICG.y"
	{yyval=yystack.l_mark[0];}
break;
case 21:
#line 74 "ICG.y"
	{char temp[5]; strcpy(temp, pop()); push("0"); push(temp); arithmetic_gen("+");}
break;
case 22:
#line 75 "ICG.y"
	{char temp[5]; strcpy(temp, pop()); push("0"); push(temp); arithmetic_gen("-");}
break;
case 24:
#line 79 "ICG.y"
	{arithmetic_gen("*");}
break;
case 25:
#line 80 "ICG.y"
	{arithmetic_gen("/");}
break;
case 26:
#line 81 "ICG.y"
	{arithmetic_gen("%");}
break;
case 28:
#line 85 "ICG.y"
	{arithmetic_gen("+");}
break;
case 29:
#line 86 "ICG.y"
	{arithmetic_gen("-");}
break;
case 31:
#line 90 "ICG.y"
	{arithmetic_gen("<");}
break;
case 32:
#line 91 "ICG.y"
	{arithmetic_gen(">");}
break;
case 33:
#line 92 "ICG.y"
	{arithmetic_gen("<=");}
break;
case 34:
#line 93 "ICG.y"
	{arithmetic_gen(">=");}
break;
case 36:
#line 97 "ICG.y"
	{arithmetic_gen("==");}
break;
case 37:
#line 98 "ICG.y"
	{arithmetic_gen("!=");}
break;
case 39:
#line 102 "ICG.y"
	{fprintf(outfile, "ifFalse %s goto L%d\n", pop(), ++label); char temp[5]; sprintf(temp, "t%d", temp_no++); push(temp);}
break;
case 40:
#line 102 "ICG.y"
	{gen_true_code();}
break;
case 41:
#line 102 "ICG.y"
	{gen_false_code();}
break;
case 43:
#line 106 "ICG.y"
	{fprintf(outfile, "%s = %s\n", pop(), pop());}
break;
case 44:
#line 107 "ICG.y"
	{arithmetic_gen("+"); fprintf(outfile, "%s = %s\n", yystack.l_mark[-2].string, pop());}
break;
case 45:
#line 108 "ICG.y"
	{arithmetic_gen("-"); fprintf(outfile, "%s = %s\n", yystack.l_mark[-2].string, pop());}
break;
case 53:
#line 127 "ICG.y"
	{push(yystack.l_mark[0].string); yyval=yystack.l_mark[0];}
break;
case 54:
#line 127 "ICG.y"
	{fprintf(outfile, "%s = %s\n", yystack.l_mark[-3].string, pop());}
break;
case 55:
#line 129 "ICG.y"
	{push(yystack.l_mark[0].string); yyval=yystack.l_mark[0];}
break;
case 85:
#line 186 "ICG.y"
	{fprintf(outfile, "L%d :\n", ++label);}
break;
case 86:
#line 186 "ICG.y"
	{fprintf(outfile, "ifFalse %s goto L%d\ngoto L%d\nL%d : \n", pop(), label+3, label+1, label+2); label_push(label+2); label_push(label+3); label_push(label+1); label_push(label);}
break;
case 87:
#line 186 "ICG.y"
	{fprintf(outfile, "goto %s\n", label_pop()); label += 3;}
break;
case 88:
#line 186 "ICG.y"
	{fprintf(outfile, "%s :\n", label_pop());}
break;
case 89:
#line 186 "ICG.y"
	{fprintf(outfile, "goto %s\n%s : \n", label_pop(), label_pop());}
break;
#line 927 "y.tab.c"
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = YYLEX) < 0) yychar = YYEOF;
#if YYDEBUG
            if (yydebug)
            {
                yys = yyname[YYTRANSLATE(yychar)];
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == YYEOF) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (YYINT) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    YYERROR_CALL("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
