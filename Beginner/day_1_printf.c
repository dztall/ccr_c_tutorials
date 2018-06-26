#include <stdio.h>

int main(int argc, char *argv[])
{
	printf("Hello world!!\n");
	return 0;
}

//This is single line comment. 
//Comments does not affect program itself but used to 
//describe the intention of the chunk of code to the reader.

/*This is multi line comment.
You can't nest multi line comments.*/

//main() is a special function which is the entry point of the program.
//Function is a block of code which receives multiple values and returns 
//the result of the function. This is similar to mathematical functions.
//Simply you can think of a program a collection of functions which is 
//related to each other.

//printf is a function of C standard library,
//which outputs formatted text to standard output( typically console/terminal ).

//First line of the example above is C preprocessor statement for header file inclusion.
//stdio.h file is compiler provided header file and located in compiler installation folder.
//Inside stdio.h, many functions / types / variable / macros are declared.

//printf() scanf() are examples of function declarations.
//stdin stdout are examples of variable declarations.
//EOF FILENAME_MAX are examples of macro definitions. Macros are typically all capitalized.
//fpos_t FILE are examples of type declarations.

//You can navigate stdio.h file by placing cursor to #include <stdio.h> statement
//and press Jump button in custom keyboard page in Mobile C built-in soft keyboard.

//Now, run the program watch the result.
