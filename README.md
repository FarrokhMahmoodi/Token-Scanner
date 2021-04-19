# Token-Scanner

This token scanner implements a FSA table and driver where the FSA table are the char* arrays located in lines 4-8 in scanner.c
and the driver is function "void testScan()" declared in testScanner.h and defined in testScanner.c "void testScan(char* filename)".

Lexical definitions
Case sensitive
Each scanner error should display "SCANNER ERROR: " followed by details including the line number if counted

Alphabet
all English letters (upper and lower), digits, plus the extra characters as seen below, plus WS
No other characters allowed and they should generate errors

Identifiers
begin with a lower case letter or an underscore ( _ )
continue with any number of letters (uppercase or lowercase) or digits, 8 significant total
you may assume no identifier is longer than 8 characters (in testing)

Keywords (reserved, suggested individual tokens)
begin end loop whole void exit getter outter main if then assign data proc

Operators and delimiters group (all single character except ==  => := and =<)
= =>  =< ==  : :=  +  -  *  /   %  . (  ) , { } ; [ ]

Integers
any sequence of decimal digits, no sign, no decimal point, up to 8 significant
you may assume no number longer than 8 characters (in testing)

Comments start with $$ and end with $$

TEST FILES
test1.fs containing just one character (with standard \n at the end)
test2.fs containing a list of all the tokens listed, all separated by a space or new line.
test3.fs containing a mix of tokens without spaces and with spaces
test4.fs containing errors
