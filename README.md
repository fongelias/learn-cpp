# learn-cpp
repo for learning c++

## Notes
### Files and compilation
`.cpp` is the extension for source files

it is translated to a machine language file, called an object file, with either an `.o` or `.obj` extension

then, object files and libraries are linked by a `linker` to create an executable file

you can choose to use a makefile, which describes how to build the executable

`g++` is a linux binary that can be used to compile source code on the cli. You can compile a file like this: `g++ -pedantic-errors [source.cpp] -o [executable]`. `[source.cpp]` should be a whitespace delimited list of relevant files to be linked. The `-pedantic-errors` flag removes compiler exetnsions so that your compiler will enforce c++ standards.

addition of the `-Werror` flag will show all warnings as errors.

### Versioning
c++ standards are numbered after the year they are finialized (i.e. `c++20` is finalized 2020)

you can specify the standard you want to use by adding the `-std=[version]` flag

### Language
#### Preprocessor Directives
preprocessor directives are denoted by a leading `#` and are instructions for the preprocessor to perform specific task before the rest of the compilation.
##### #include
`#include <[filename]>` includes the preprocessed contents of a file
##### #define
`#define [identifier] [substitution text]` allows you to define a macro, which can replace the identifier with the given text. This does not affect other macros

You can also define blocks that conditionally compile:
```
#define SOME_IDENTIFIER

#ifdef SOME_IDENTIFIER
doSomething();
#endif
```
The block above will compile the line for `SOME_IDENTIFIER`. Using `#if 0` is the accepted way to not compile a block.

Directives are resolved before compilation, from top to bottom, and by file.

#### Header Files
Typically seen with an `.h` or `.hpp` extension (or no extension at all), header files are used to propogate declarations to code files.

In `#include <iostream>`, iostream is the name of the headerfile that contains all the forward declarations that are subsequently added to the program during the linker phase.

Double quotes tell the preprocessor that this is a user-defined header file, and that it should look for the file in the current directory. Angle brackets reference a header file included with the compiler, and tell the preprocessor to look for it in the system directories.

The compiler can use the `-I` option to specify a directory where it can find header files: `g++ -o main -I/source/includes main.cpp`

Headers may include other headers.

Best practice: include user-defined headers first, then librarys, then standard libraries. Give your header files the same name as the source files they’re associated with.

Header files include a header guard, which


#### Variables
##### Initialization
Copy Initialization: copies the value on the right hand side to the created variable
`int width = 5;`

Direct Initialization: 
`int width(5);`

List Initialization:
```
int width{ 5 }; // Direct List Initialization
int height = { 6 }; // Copy List Initialization
```
This form of initialization disallows "Narrowing conversions"
```
int width = 4.5; // sets width to 4
int width{ 4.5 }; // error: not all double values fit into int
```
#### Special Operators
`<<`: Insertion
`>>`: Extraction
`::`: Scope Resolution Operator

#### Functions
When a function is called, parameters of a function are created as variables, and then the values of the arguments are copied into the matching parameter (this is called pass by value).

The C++ specification does not specify the order of evaluation of arguments (which may be relevant if you are passing expressions of functions as arguments).

Functions that share an identifier but have different parameters are considered to be distinct functions (function overloading)

##### Forward Declaration
Forward Declaration allows us to tell the compiler about an identifier before defining it. You use a function prototype to define it:
```
int funcName(int someVariable);
// or alternatively, since they dont require variable names:
int funcName(int);
```

#### Namespacing
The scope resolution operator, `::`, is used to access identifiers within a namespace.

Additionally, you can use `using namespace [namespaceName]`, which tells the compiler to check the namespace for undeclared identifiers for a given file

### Libraries References
#### iostream
`std::cout` variable that allows printing to console
`std::endl` endline and flush output
`std::cin` extractable user input as a variable

## References
[learncpp.com](https://www.learncpp.com/)
