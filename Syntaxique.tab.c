
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "Syntaxique.y"

int nbligne=1;
int nbcolonne=1;
int sauvValue=0;
float sauvValueReel=0;
char* sauvValueStr="";
char type[20],constante[20],tmp[20];
char *ls_idf[20],*list_idf_exp[20];
int i=0,k=0;


/* Line 189 of yacc.c  */
#line 85 "Syntaxique.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     mc_import = 258,
     bib_io = 259,
     bib_lang = 260,
     pvg = 261,
     err = 262,
     mc_class = 263,
     mc_private = 264,
     mc_public = 265,
     mc_protected = 266,
     idf = 267,
     mc_entier = 268,
     mc_reel = 269,
     mc_chaine = 270,
     aco_ouv = 271,
     aco_ferm = 272,
     valeur = 273,
     valeur_reel = 274,
     idf_tab = 275,
     crochet_ferm = 276,
     crochet_ouv = 277,
     vrgl = 278,
     mc_const = 279,
     affect = 280,
     mc_somme = 281,
     mc_soust = 282,
     mc_multi = 283,
     mc_div = 284,
     mc_egal = 285,
     mc_inf = 286,
     mc_sup = 287,
     mc_inf_egal = 288,
     mc_sup_egal = 289,
     mc_not_egal = 290,
     mc_for = 291,
     parenth_ouv = 292,
     parenth_ferm = 293,
     mc_out = 294,
     mc_in = 295,
     mc_main = 296,
     mc_text = 297
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 12 "Syntaxique.y"

	int entier;
	float reel;
	char* str;



/* Line 214 of yacc.c  */
#line 171 "Syntaxique.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 183 "Syntaxique.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   157

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  26
/* YYNRULES -- Number of rules.  */
#define YYNRULES  63
/* YYNRULES -- Number of states.  */
#define YYNSTATES  145

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   297

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,    15,    18,    19,    23,    25,    27,    31,
      33,    35,    37,    38,    40,    43,    44,    48,    52,    59,
      64,    68,    70,    77,    82,    84,    86,    88,    91,    92,
      94,    96,    98,   100,   104,   106,   114,   122,   128,   133,
     141,   149,   157,   159,   163,   167,   171,   175,   178,   180,
     184,   186,   188,   190,   202,   206,   210,   214,   218,   220,
     222,   224,   226,   228
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      44,     0,    -1,    45,    48,    16,    51,    41,    37,    38,
      16,    50,    17,    17,    -1,    46,    45,    -1,    -1,     3,
      47,     6,    -1,     4,    -1,     5,    -1,    49,     8,    12,
      -1,     9,    -1,    11,    -1,    10,    -1,    -1,    56,    -1,
      52,    51,    -1,    -1,    55,    53,     6,    -1,    55,    54,
       6,    -1,    24,    55,    12,    25,    18,     6,    -1,    24,
      55,    12,     6,    -1,    12,    23,    53,    -1,    12,    -1,
      20,    22,    18,    21,    23,    54,    -1,    20,    22,    18,
      21,    -1,    15,    -1,    13,    -1,    14,    -1,    57,    56,
      -1,    -1,    61,    -1,    64,    -1,    59,    -1,    60,    -1,
      12,    23,    58,    -1,    12,    -1,    40,    37,    42,    23,
      58,    38,     6,    -1,    39,    37,    42,    23,    58,    38,
       6,    -1,    39,    37,    42,    38,     6,    -1,    12,    25,
      62,     6,    -1,    20,    22,    12,    21,    25,    62,     6,
      -1,    20,    22,    18,    21,    25,    62,     6,    -1,    20,
      22,    62,    21,    25,    62,     6,    -1,    63,    -1,    62,
      29,    62,    -1,    62,    26,    62,    -1,    62,    27,    62,
      -1,    62,    28,    62,    -1,    27,    62,    -1,    12,    -1,
      37,    62,    38,    -1,    18,    -1,    19,    -1,    42,    -1,
      36,    37,    65,     6,    66,     6,    67,    38,    16,    56,
      17,    -1,    12,    25,    63,    -1,    12,    68,    63,    -1,
      12,    68,    12,    -1,    12,    26,    26,    -1,    30,    -1,
      31,    -1,    32,    -1,    33,    -1,    34,    -1,    35,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    35,    35,    38,    39,    42,    45,    52,    62,    70,
      71,    72,    73,    77,    81,    82,    86,    87,    88,   101,
     113,   122,   134,   144,   157,   158,   159,   163,   164,   168,
     169,   170,   171,   177,   188,   202,   217,   227,   238,   270,
     276,   282,   297,   303,   311,   314,   317,   320,   322,   333,
     337,   340,   341,   347,   351,   355,   356,   360,   364,   365,
     366,   367,   368,   369
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "mc_import", "bib_io", "bib_lang", "pvg",
  "err", "mc_class", "mc_private", "mc_public", "mc_protected", "idf",
  "mc_entier", "mc_reel", "mc_chaine", "aco_ouv", "aco_ferm", "valeur",
  "valeur_reel", "idf_tab", "crochet_ferm", "crochet_ouv", "vrgl",
  "mc_const", "affect", "mc_somme", "mc_soust", "mc_multi", "mc_div",
  "mc_egal", "mc_inf", "mc_sup", "mc_inf_egal", "mc_sup_egal",
  "mc_not_egal", "mc_for", "parenth_ouv", "parenth_ferm", "mc_out",
  "mc_in", "mc_main", "mc_text", "$accept", "S", "LISTE_BIB", "BIB",
  "NOM_BIB", "CLASS", "MODIFCATEUR", "CORPS", "LISTE_DEC", "PARTIE_DEC",
  "LISTE_IDF", "LISTE_IDF_TAB", "TYPE_VARIABLE", "LISTE_INST", "INSTRU",
  "LISTE_IDF_IO", "IN", "OUT", "LISTE_AFFECT", "EXPRESSION", "TYPE_VALEUR",
  "BOUCLE", "INIT", "CONDITION", "INCREMENT", "LISTE_CONDITION", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    43,    44,    45,    45,    46,    47,    47,    48,    49,
      49,    49,    49,    50,    51,    51,    52,    52,    52,    52,
      53,    53,    54,    54,    55,    55,    55,    56,    56,    57,
      57,    57,    57,    58,    58,    59,    60,    60,    61,    61,
      61,    61,    62,    62,    62,    62,    62,    62,    62,    62,
      63,    63,    63,    64,    65,    66,    66,    67,    68,    68,
      68,    68,    68,    68
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,    11,     2,     0,     3,     1,     1,     3,     1,
       1,     1,     0,     1,     2,     0,     3,     3,     6,     4,
       3,     1,     6,     4,     1,     1,     1,     2,     0,     1,
       1,     1,     1,     3,     1,     7,     7,     5,     4,     7,
       7,     7,     1,     3,     3,     3,     3,     2,     1,     3,
       1,     1,     1,    11,     3,     3,     3,     3,     1,     1,
       1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,    12,     4,     6,     7,     0,     1,     9,
      11,    10,     0,     0,     3,     5,    15,     0,    25,    26,
      24,     0,     0,    15,     0,     8,     0,     0,    14,    21,
       0,     0,     0,     0,     0,     0,     0,    16,    17,    19,
       0,     0,    20,     0,     0,    28,    23,    18,     0,     0,
       0,     0,     0,     0,    13,    28,    31,    32,    29,    30,
       0,     0,     0,     0,     0,     0,     0,    27,    22,    48,
      50,    51,     0,     0,    52,     0,    42,    48,    50,     0,
       0,     0,     0,     0,     2,    47,     0,    38,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      49,    44,    45,    46,    43,     0,     0,     0,    54,     0,
       0,    34,     0,    37,     0,     0,     0,     0,    58,    59,
      60,    61,    62,    63,     0,     0,     0,     0,     0,    39,
      40,    41,    56,    55,     0,     0,    33,    36,    35,     0,
       0,    57,    28,     0,    53
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,     7,    12,    13,    53,    22,    23,
      31,    32,    24,    54,    55,   112,    56,    57,    58,    75,
      76,    59,    81,   110,   135,   124
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -94
static const yytype_int16 yypact[] =
{
      14,     1,    10,    79,    14,   -94,   -94,    30,   -94,   -94,
     -94,   -94,    22,    42,   -94,   -94,    39,    44,   -94,   -94,
     -94,    94,    17,    39,    28,   -94,    50,    27,   -94,    69,
      43,    87,    88,    -2,    62,    98,    93,   -94,   -94,   -94,
      95,    96,   -94,    97,   108,    21,    92,   -94,    91,    99,
      80,    82,    83,   105,   -94,    21,   -94,   -94,   -94,   -94,
     103,    -5,    -3,   112,    84,    85,   111,   -94,   -94,   -94,
     -94,   -94,    -5,    -5,   -94,    41,   -94,   104,   109,    70,
     106,   123,   -20,   110,   -94,    -8,    57,   -94,    -5,    -5,
      -5,    -5,   107,   113,   114,    24,   122,   124,   129,   124,
     -94,    -8,    -8,   -94,   -94,    -5,    -5,    -5,   -94,    71,
     131,   117,   115,   -94,   116,    45,    49,    53,   -94,   -94,
     -94,   -94,   -94,   -94,     7,   130,   124,   135,   137,   -94,
     -94,   -94,   -94,   -94,   118,   119,   -94,   -94,   -94,   120,
     132,   -94,    21,   128,   -94
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -94,   -94,   143,   -94,   -94,   -94,   -94,   -94,   126,   -94,
     121,    90,   134,   -55,   -94,   -91,   -94,   -94,   -94,   -61,
     -93,   -94,   -94,   -94,   -94,   -94
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      67,    79,   108,    97,    39,     5,     6,    69,   114,    77,
       8,    85,    86,    70,    71,    78,    71,     1,    98,   132,
      90,    91,    72,    40,    72,    70,    71,   101,   102,   103,
     104,   133,    73,    48,    73,   136,    15,    74,    16,    74,
      29,    49,    70,    71,   115,   116,   117,    87,    30,    74,
      17,   129,    18,    19,    20,   130,    25,    50,    27,   131,
      51,    52,    33,    21,    34,    36,    74,    88,    89,    90,
      91,    88,    89,    90,    91,    88,    89,    90,    91,    88,
      89,    90,    91,    88,    89,    90,    91,   143,     9,    10,
      11,    94,    35,    37,    38,   100,    88,    89,    90,    91,
      41,   118,   119,   120,   121,   122,   123,    18,    19,    20,
      29,    43,    45,    44,    47,    60,    61,    63,    46,    64,
      65,    62,    66,    30,    80,    92,    82,    83,    84,    96,
      93,    95,   105,    99,   109,   113,   111,   125,   106,   107,
     126,   137,   134,   138,   139,   144,   141,    14,   142,    28,
      68,     0,     0,   127,   128,    26,    42,   140
};

static const yytype_int16 yycheck[] =
{
      55,    62,    95,    23,     6,     4,     5,    12,    99,    12,
       0,    72,    73,    18,    19,    18,    19,     3,    38,    12,
      28,    29,    27,    25,    27,    18,    19,    88,    89,    90,
      91,   124,    37,    12,    37,   126,     6,    42,    16,    42,
      12,    20,    18,    19,   105,   106,   107,     6,    20,    42,
       8,     6,    13,    14,    15,     6,    12,    36,    41,     6,
      39,    40,    12,    24,    37,    22,    42,    26,    27,    28,
      29,    26,    27,    28,    29,    26,    27,    28,    29,    26,
      27,    28,    29,    26,    27,    28,    29,   142,     9,    10,
      11,    21,    23,     6,     6,    38,    26,    27,    28,    29,
      38,    30,    31,    32,    33,    34,    35,    13,    14,    15,
      12,    18,    16,    18,     6,    23,    25,    37,    21,    37,
      37,    22,    17,    20,    12,    21,    42,    42,    17,     6,
      21,    25,    25,    23,    12,     6,    12,     6,    25,    25,
      23,     6,    12,     6,    26,    17,    26,     4,    16,    23,
      60,    -1,    -1,    38,    38,    21,    35,    38
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    44,    45,    46,     4,     5,    47,     0,     9,
      10,    11,    48,    49,    45,     6,    16,     8,    13,    14,
      15,    24,    51,    52,    55,    12,    55,    41,    51,    12,
      20,    53,    54,    12,    37,    23,    22,     6,     6,     6,
      25,    38,    53,    18,    18,    16,    21,     6,    12,    20,
      36,    39,    40,    50,    56,    57,    59,    60,    61,    64,
      23,    25,    22,    37,    37,    37,    17,    56,    54,    12,
      18,    19,    27,    37,    42,    62,    63,    12,    18,    62,
      12,    65,    42,    42,    17,    62,    62,     6,    26,    27,
      28,    29,    21,    21,    21,    25,     6,    23,    38,    23,
      38,    62,    62,    62,    62,    25,    25,    25,    63,    12,
      66,    12,    58,     6,    58,    62,    62,    62,    30,    31,
      32,    33,    34,    35,    68,     6,    23,    38,    38,     6,
       6,     6,    12,    63,    12,    67,    58,     6,     6,    26,
      38,    26,    16,    56,    17
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 36 "Syntaxique.y"
    {printf("syntaxe correcte\n");;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 45 "Syntaxique.y"
    {
	insert((yyvsp[(1) - (1)].str),"idf_bib");
	insertType((yyvsp[(1) - (1)].str),"Sans_type");
	insertTaille((yyvsp[(1) - (1)].str),0);
	insertValue((yyvsp[(1) - (1)].str),"0");
	insertIsConst((yyvsp[(1) - (1)].str),"non_const");
;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 52 "Syntaxique.y"
    {
	insert((yyvsp[(1) - (1)].str),"idf_bib");
	insertType((yyvsp[(1) - (1)].str),"Sans_type");
	insertTaille((yyvsp[(1) - (1)].str),0);
	insertValue((yyvsp[(1) - (1)].str),"0");
	insertIsConst((yyvsp[(1) - (1)].str),"non_const");
;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 63 "Syntaxique.y"
    {
		insertType((yyvsp[(3) - (3)].str),"sans_type");
		insertTaille((yyvsp[(3) - (3)].str),0);
		;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 89 "Syntaxique.y"
    {	
				if(doubleDeclaration((yyvsp[(3) - (6)].str))== 0){
					insertType((yyvsp[(3) - (6)].str),type);
					insertTaille((yyvsp[(3) - (6)].str),1);
					sprintf(tmp, "%d", (yyvsp[(5) - (6)].entier));
					insertValue((yyvsp[(3) - (6)].str),tmp);
					insertIsConst((yyvsp[(3) - (6)].str),"Const");
				}else{
					printf("erreur, la variable est deja declarer : %d !!!! \n",nbligne);
					YYACCEPT;
				}
			;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 102 "Syntaxique.y"
    {	if(doubleDeclaration((yyvsp[(3) - (4)].str))== 0){
					insertType((yyvsp[(3) - (4)].str),type);
					insertTaille((yyvsp[(3) - (4)].str),1);
					insertIsConst((yyvsp[(3) - (4)].str),"Const");
				}else{
					printf("erreur, la variable est deja declarer : %d !!!! \n",nbligne);
					YYACCEPT;
				}
			;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 114 "Syntaxique.y"
    {	if(doubleDeclaration((yyvsp[(1) - (3)].str))== 0){
					insertType((yyvsp[(1) - (3)].str),type);
					insertTaille((yyvsp[(1) - (3)].str),1);
				}else{
					printf("erreur, la variable est deja declarer : %d !!!! \n",nbligne);
					YYACCEPT;
				}
			;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 123 "Syntaxique.y"
    {	if(doubleDeclaration((yyvsp[(1) - (1)].str))== 0){
					insertType((yyvsp[(1) - (1)].str),type);
					insertTaille((yyvsp[(1) - (1)].str),1);
				}else{
					printf("erreur, la variable est deja declarer : %d !!!! \n",nbligne);
					YYACCEPT;
				}
			;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 135 "Syntaxique.y"
    {
					if(doubleDeclaration((yyvsp[(1) - (6)].str))== 0){
						insertType((yyvsp[(1) - (6)].str),type);
						insertTaille((yyvsp[(1) - (6)].str),(yyvsp[(3) - (6)].entier));
					}else{
						printf("erreur, la variable est deja declarer : %d !!!! \n",nbligne);
						YYACCEPT;
					}
				;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 145 "Syntaxique.y"
    {
					if(doubleDeclaration((yyvsp[(1) - (4)].str))== 0){
						insertType((yyvsp[(1) - (4)].str),type);
						insertTaille((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].entier));
					}else{
						printf("erreur, la variable est deja declarer : %d !!!! \n",nbligne);
						YYACCEPT;
					}
				;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 157 "Syntaxique.y"
    {strcpy(type,(yyvsp[(1) - (1)].str));;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 158 "Syntaxique.y"
    {strcpy(type,(yyvsp[(1) - (1)].str));;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 159 "Syntaxique.y"
    {strcpy(type,(yyvsp[(1) - (1)].str));;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 177 "Syntaxique.y"
    {
	if(idfNotDeclared(strdup((yyvsp[(1) - (3)].str)))==0){
					
					ls_idf[i]=(yyvsp[(1) - (3)].str);
							i++;
							
				} else{
					printf("Erreur semantique : variable inexistante");
					YYACCEPT;
				}
;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 188 "Syntaxique.y"
    {
				if(idfNotDeclared(strdup((yyvsp[(1) - (1)].str)))==0){
					
					ls_idf[i]=(yyvsp[(1) - (1)].str);
							i++;
							
				} else{
					printf("Erreur semantique : variable inexistante");
					YYACCEPT;
				}
			;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 202 "Syntaxique.y"
    {
	if(recherche("ISIL.io")==0){
		printf("Erreur semantique: absence de bibiliotheque \"ISIL.io \"");
		YYACCEPT;
	}
	if(formatage((yyvsp[(3) - (7)].str),ls_idf,i)==0){
		printf("Erreur semantique de formatage\n");
		YYACCEPT;
	}


;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 217 "Syntaxique.y"
    {
	if(recherche("ISIL.io")==0){
		printf("Erreur semantique: absence de bibiliotheque \"ISIL.io \"");
		YYACCEPT;
	}
	if(formatage((yyvsp[(3) - (7)].str),ls_idf,i)==0){
		printf("Erreur semantique de formatage\n");
		YYACCEPT;
	}
;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 227 "Syntaxique.y"
    {
	if(formatage((yyvsp[(3) - (5)].str),ls_idf,i)==0){
		printf("Erreur semantique de formatage\n");
		YYACCEPT;
	}
;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 238 "Syntaxique.y"
    {			
				if(ModifyConst((yyvsp[(1) - (4)].str)) == 1){
					printf("Erreur semantique : impossible de changer la  valeur d'une constante !!!!\n");
					YYACCEPT;
				}
				if(idfNotDeclared((yyvsp[(1) - (4)].str))== 1){
					printf("Erreur semantique : Variable non Declarer !!!!\n");
					YYACCEPT;
				}
				if(strcmp(getType((yyvsp[(1) - (4)].str)),"Entier") == 0){
					sprintf(tmp,"%d",(int)(yyvsp[(3) - (4)].reel));
					insertValue((yyvsp[(1) - (4)].str),tmp);
					sauvValue = 0;
				}else{
					if(strcmp(getType((yyvsp[(1) - (4)].str)),"reel") == 0){
						sprintf(tmp,"%f",(yyvsp[(3) - (4)].reel));
						insertValue((yyvsp[(1) - (4)].str),tmp);
						sauvValueReel = 0;
					}else{
						insertValue((yyvsp[(1) - (4)].str),sauvValueStr);
						sauvValueStr = "";
					}

				}

				if(typeMismatch(list_idf_exp,(yyvsp[(1) - (4)].str),k)== 1){
					printf("Erreur semantique :  Non compatibilite de type !!!!\n");
					YYACCEPT;
				}
				printf("[%f]",(yyvsp[(3) - (4)].reel));
				
			;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 270 "Syntaxique.y"
    {
				if(indexOutOfBoundV2((yyvsp[(1) - (7)].str),(yyvsp[(3) - (7)].str))==1){
					printf("Erreur semantique : Index superierur a la taille du tableau ou inferierur a 0 !!!!\n");
					YYACCEPT;
				}
			;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 276 "Syntaxique.y"
    {
				if(indexOutOfBound((yyvsp[(1) - (7)].str),(yyvsp[(3) - (7)].entier))==1){
					printf("Erreur semantique : Index superierur a la taille du tableau ou inferierur a 0 !!!!\n");
					YYACCEPT;
				}
			;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 282 "Syntaxique.y"
    {
				if((yyvsp[(3) - (7)].reel) < 0 ){
					printf("Erreur semantique : Index inferierur a la taille du tableau ou inferierur a 0 !!!!\n");
					YYACCEPT;
				}
				if(indexOutOfBoundV2((yyvsp[(1) - (7)].str),(yyvsp[(3) - (7)].reel))==1){
					printf("Erreur semantique : Index superierur a la taille du tableau ou inferierur a 0 !!!!\n");
					YYACCEPT;
				}
			;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 297 "Syntaxique.y"
    {
				if(sauvValue != 0)
					(yyval.reel)=sauvValue;
				if(sauvValueReel != 0)
					(yyval.reel)=sauvValueReel;
			;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 303 "Syntaxique.y"
    {
				if(sauvValue==0){
					printf ("Erreur semantique : division par zero !!!!!\n");
					YYACCEPT;
				}else{
					(yyval.reel)=(yyvsp[(1) - (3)].reel)/(yyvsp[(3) - (3)].reel);
				}
            ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 311 "Syntaxique.y"
    {
						(yyval.reel)=(yyvsp[(1) - (3)].reel)+(yyvsp[(3) - (3)].reel);
            ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 314 "Syntaxique.y"
    {
						(yyval.reel)=(yyvsp[(1) - (3)].reel)-(yyvsp[(3) - (3)].reel);
            ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 317 "Syntaxique.y"
    {
						(yyval.reel)=(yyvsp[(1) - (3)].reel)*(yyvsp[(3) - (3)].reel);
            ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 320 "Syntaxique.y"
    { (yyval.reel)=-(yyvsp[(2) - (2)].reel); ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 322 "Syntaxique.y"
    {
				if(valueNotInitialized((yyvsp[(1) - (1)].str))){
					printf ("Erreur semantique : valeur de %s n'est pas intialiser !!!!!\n",(yyvsp[(1) - (1)].str));
					YYACCEPT;
				}
				float value;
				sscanf(getValue((yyvsp[(1) - (1)].str)),"%f",&value);
				(yyval.reel)=value;
				list_idf_exp[k]=(yyvsp[(1) - (1)].str);
				k++;
			;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 337 "Syntaxique.y"
    {
				sauvValue=(yyvsp[(1) - (1)].entier);
			;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 340 "Syntaxique.y"
    {sauvValueReel=(yyvsp[(1) - (1)].reel);;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 341 "Syntaxique.y"
    {sauvValueStr=strdup((yyvsp[(1) - (1)].str));;}
    break;



/* Line 1455 of yacc.c  */
#line 1913 "Syntaxique.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 373 "Syntaxique.y"

main(){
	yyparse();
	Afficher();
}

yywrap()
{}

yyerror(char*msg){
    printf("Erreur Syntaxique dans votre code dans la ligne : %d , colonne : %d!!!! ",nbligne,nbcolonne);
}

