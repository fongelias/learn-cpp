# learn-cpp
repo for learning c++

## Notes
### Files and compilation
`.cpp` is the extension for source files

it is translated to a machine language file, called an object file, with either an `.o` or `.obj` extension

then, object files and libraries are linked by a `linker` to create an executable file

you can choose to use a makefile, which describes how to build the executable

`g++` is a linux binary that can be used to compile source code on the cli. You can compile a file like this: `g++ -pedantic-errors [source.cpp] -o [executable]`. The `-pedantic-errors` flag removes compiler exetnsions so that your compiler will enforce c++ standards.

addition of the `-Werror` flag will show all warnings as errors.

### Versioning
c++ standards are numbered after the year they are finialized (i.e. `c++20` is finalized 2020)

you can specify the standard you want to use by adding the `-std=[version]` flag

### Language
#### Preprocessor Directives
preprocessor directives are denoted by a leading `#` and are instructions for the preprocessor to perform specific task before the rest of the compilation. This can involve the inclusion of dependencies
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
##### Special Operators
`<<`: Insertion
`>>`: Extraction

### Libraries References
#### iostream
`std::cout` variable that allows printing to console
`std::endl` endline and flush output
`std::cin` extractable user input as a variable

## References
[learncpp.com](https://www.learncpp.com/)
