<h1 align="center">

What did I make Original
![]( https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcTgy7yg3JxvSeqxA3LFLZIL60ci84jPsjbCdw&usqp=CAU)
# Write your own printf function.
Printf is a group project assignment of two, this project is aimed towards cloning the printf function in c programming, the project is in stages and each stage define and adds more features to our custom printf. The custom function will be named _printf. Following below are the names of the project contributors.
> 1. [NORA JEOUT](https://github.com/Norajeout)
> 2. [CANDELY001](https://github.com/CANDELY001)

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
<img src ="https://miro.medium.com/v2/resize:fit:720/format:webp/1*lX5wiJfKf1_1l8QqyGuaPQ.png">
</p>
