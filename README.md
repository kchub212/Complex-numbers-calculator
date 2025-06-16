# Complex Numbers Calculator

This is a simple C++ project that performs basic operations on complex numbers. I originally created it as a learning exercise to practice working with classes, operator overloading, and vectors in C++.

## Features

The program has two main functionalities:

1. **Operations with two complex numbers**  
   - Addition (`z1 + z2`)
   - Multiplication (`z1 * z2`)
   - Scalar multiplication (`z * scalar`)
   - Conversion to polar form (angle and magnitude)

2. **Vector addition**  
   - You can enter two vectors of `n` complex numbers and the program will add them element by element.

## How It Works

When you start the program, it asks whether you want to do calculations with two individual complex numbers or add two vectors.

### Input Format

Complex numbers should be entered in the format `(real+imag)`  
Example: `(3+4)`

### Example (Option 1)
Select mode (1 for operations, 2 for vector addition): 1
Enter the first complex number: (3+4)
Enter the second complex number: (1+2)
...

## Project Structure

- `Komplexe Zahlen.cpp`: contains the `main()` function
- `KomplexeZahl.hpp/cpp`: class for individual complex numbers
- `KomplexND.hpp/cpp`: class for vectors of complex numbers

## How to Compile

Use `g++` to compile:

```bash
g++ Komplexe\ Zahlen.cpp KomplexeZahl.cpp KomplexND.cpp -o complex_calculator
Then run it:
./complex_calculator


