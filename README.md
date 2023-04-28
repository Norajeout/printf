<h1 align="center">

What did I make Original
![]( https://www.meme-arsenal.com/memes/06d855dcb15b089e23c1bd7e18c6b7b6.jpg)
# Printf()
## printf()
The printf project is a collaboration between nora jeout and charifa masbahi, actual students of Software Engineering at alx africa, were a function named "_printf" imitates the actual "printf" command located in the stdio.h library. It contains some of the basic features and functions found in the manual 3 of "printf".

_printf() is a function that performs formatted output conversion and print data. Its prototype is the following:

	int _printf(const char *format, ...)

Where **format** contains the string that is printed. As _printf() is variadic function, it can receives n arguments that replace by n tags written inside the string.

The format tags prototype is the following:

	%[flags][length]specifier

 ## Notes

1. What is Variadic Functions?
	> Variadic function takes indefinite size arity and a variable number of arguments as a parameter. Situations that you do not know how many parameters pass the function.
2. what is ellipses (...)?
	> The ellipsis (...) is part of the C language and indicates that there are 0 or more optional arguments.
2. What is va_list?
	> a complete object type suitable for holding the information needed by the macros va_start, va_copy, va_arg, and va_end
3. What is va_start?
	> gets the address of the first argument.
4. What is va_arg?
	> dereference the block address and type cast it to the appropriate type. then goes to the next block of memory.
	> What is a "Type Descriptor"?
5. What is va_end?
	> performs cleanup for an ap object initialized by a call to va_start or va_copy
### Supported Format Specifiers
The printf function supports a wide range of format specifiers that allow for the formatting of output in a variety of ways. Here are the format specifiers that are supported in this implementation of printf:

If the program runs successfully, the **return value** is the amount of chars printed.

| Specifier | Output |
| ------------- | ------------- |
| c  | Character  |
| d or i | Signed decimal integer |
| s  | String of characters  |
| b  | Signed binary  |
| o  | Signed octal  |
| u  | Unsigned integer  |
| x  | Unsigned hexadecimal  |
| X  | Unsigned hexadecimal (uppercase)  |
| p  | Pointer address  |
| r  | Reverse string of characters |
| R  | ROT13 translation of string |
| S  | String with special chars replaced by their ASCII value  |
| %  | Character  |

| Flags | Description | Specifiers |
| ------------- | ------------- | ------------- | 
| +  | Prints a plus sign (+) when the argument is a positive number. In other case, prints a minus sign (-). | i, d |
| (space) | Prints a blank space if the argument is a positive number | i, d |
| #  | Prints 0, 0x and 0X for o, x and X specifiers, respectively. It doesn't print anything if the argument is zero | o, x, X |

| Length | Description | Specifiers |
| ------------- | ------------- | ------------- | 
| l | Prints a long int or unsigned long int | i, d, o, u, x and X |
| h | Prints a short int or unsigned short int | i, d, o, u, x and X |

------------


### To create our custom printf function, We need to plan out how it will work. We can create a flowchart to help us visualize the logic of the function. Here is an example of a simple flowchart for printf:

- start -> read format string -> while format string not empty ->
- parse next format specifier -> output text before specifier ->
- if specifier is %d -> output decimal number
- if specifier is %s -> output string
- if specifier is %c -> output character
- if specifier is %% -> output %
- if specifier is unknown -> output error
- end loop -> output remaining text -> end
<p align="center">  
<img src ="https://www.google.com/url?sa=i&url=https%3A%2F%2Fwww.alxafrica.com%2Fsoftware-engineering%2F&psig=AOvVaw2zhHZyGrO2m5UK8UHyNdwG&ust=1682804180405000&source=images&cd=vfe&ved=0CBEQjRxqFwoTCPC1753Ezf4CFQAAAAAdAAAAABAH">
</p>
AUTHORS

> 1. [Norajeout](https://github.com/Norajeout)
> 2. [CANDELY001](https://github.com/CANDELY001)
