# _PRINTF

_The printf function (which derives its name from "print formatted") prints a message per screen using a "format string" that includes instructions for mixing multiple strings into the final string to display per screen._

## Starting 🚀

%%:   
print a single %. - specifies that the function identifies the format start (%) as a string and prints it as such.

%c:   
Char format (character) - specifies that it will print a character corresponding to its ASCII code.

%s:   
String format (string) - specifies to print a character string.

%d, %i:   
int format (int) - specifies an integer. Signed decimal conversion of an integer

%r:
Reverse string - prints an inverted text string.

%u: 
Print an unsigned int number.

%x:
Convert a number in to a hexadecimal format in lowercase.

%X:
Convert a number in to a hexadecimal formato in uppercase.

%o:
Conert a number in to a octal format.

%b:
Conver a number in to a binary format.

%R: ROT13 - 
is a simple cipher used to hide a text by replacing each letter with the letter that is thirteen places ahead in the alphabet. A becomes N, B becomes O, and so on to M, which becomes Z. Then the sequence is reversed: N becomes A, O becomes B, and so on to Z, which becomes METER.

### Pre-requirements📋

_Linux distribution_
_C compiler_

### Instalation 🔧

_Clone repository_

```
https://github.com/AndresCallejasG/printf.git
```

_You can compile with your own main_

```
gcc -Wall -Werror -Wextra -pedantic *.c
```



### Code examples⌨️

_Explica que verifican estas pruebas y por qué_

```
int main()
{
    char character = 'x';
    char *name = "Holberton";
    int number = 15;

    _printf("%c, ", character);
    _printf("%s, ", name);
    _printf("%i.\\n", number);

}

OUTPUT: 
x, Holberton, 15.

This function print diferent types of variables, like char, int, or even character string.
in case the variable type is different, the format must correspond to the type of variable put in the function.

We should note that in the output the format is replaced by the value of the specified variable, in case there is more than a single variable there must be a type of format wherever it is printed, like this:

int main()
{
    char character = 'x';
    char *name = "Holberton";
    int number = 15;

    _printf("%c, %s, %i.\\n", character, name, number);

}

OUTPUT:
x, Holberton, 15.

It is the same output, only with one function call, in case we need to insert a new line, we can use the option '\\n' in the place where we need to jump, and the output prints a jump in the place where we find the option '\\n'.

Reverse a string

int main() {
    _printf("%r", "Hello");
    
}

OUTPUT: 
olleH


Print a unsigned int

int main() {
    unsigned int number = 100;
    _printf("%u", number );

}

OUTPUT
100


Convert a number in to hexadecimal form.

int main() {
    int number;
    _printf("Lowercase hexadecimal: %x.\n", number );
    _printf("Uppercase hexadecimal: %X.\n", number);
    _printf("Octal: %u.\n", number);
    _printf("Binary: %b.\n", number);
    
}

OUTPUT
Lowercase hexadecimal: a.
Uppercase exadecimal: A.
Octal: 12.
Binary: 1010.



ROT13 

int main() {
    char *p = 'Hello, World!';
    _printf("%R", p);

}


OUTPUT:
Uryyb, Jbeyq!
```

## Built with 🛠️

_C Lenguage_

## Authors ✒️

_Andrés Callejas_
_Juan Felipe Rodríguez_

