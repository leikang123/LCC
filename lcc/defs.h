#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>


// token
enum {
    PLUS,MINUS,STAR,SLASH,INTLIT
};

struct token
{
 int token;
 int intvalue;
};
