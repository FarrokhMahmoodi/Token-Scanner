#pragma once
#include <stdio.h>

typedef enum
{ NO_tk = 0, IDENT_tk = 1, NUM_tk = 2, KW_tk =3, OPER_tk = 4, COMMENT_tk=5, EOF_tk=6 } tokenID;

typedef struct
{
	tokenID id;
	char* str;
//    char str[50];
} token;

void checkToken(char* str);
int checkNumber(char* str);
int checkKeyword(char* str);
int checkOperator(char* str);
int checkIdentifier(char* str);
int checkEOF(char* str);
