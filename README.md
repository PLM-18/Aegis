# Aegis

[![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg)](https://opensource.org/licenses/MIT)

> The name is inspired by the legendary protective shield, representing the robustness of the language.

## Overview

Aegis is a programming language that adopts the readable syntax of Pascal while incorporating the powerful semantics of C++. It aims to provide a balance between clarity and performance, making it ideal for both beginners and experienced developers.

## Key Features

- Class-based Object-Oriented Programming (OOP)
- Strong type system with compile-time type checking
- Constructors and destructors for resource management
- Function and method definitions with clear syntax
- Comprehensive control structures (if-else, switch-case, loops)
- Operator overloading for intuitive code
- Templates/Generics for type-safe containers and algorithms

## Syntax Overview

### File Structure

In Aegis, the filename must match the name of the class containing the main method. For example, if your main class is `HelloWorld`, the file should be named `HelloWorld.aeg`.

### Main Method Definition

Every Aegis program requires a main method as the entry point:

```pascal
class HelloWorld {
public:
    static void main(args: array of string) {
        // Code execution starts here
        print("Hello, World!");
    }
};
```

### Class Definition

```pascal
class TPerson {
public:
    var Name: string;
    var Age: integer;

    constructor Create(AName: string; AAge: integer);
    void SayHello();
};

constructor TPerson.Create(AName: string; AAge: integer) {
    Name := AName;
    Age := AAge;
}

void TPerson.SayHello() {
    print("Hello, my name is ", Name, " and I am ", Age, " years old.");
}
```

### If-Else Statement

```pascal
void CheckAge(Person: TPerson) {
    if Person.Age >= 18 then
        print(Person.Name, " is an adult.")
    else
        print(Person.Name, " is a minor.");
}
```

### Switch-Case Statement

```pascal
void DescribeNumber(Value: integer) {
    case Value of
        0: print("Zero");
        1: print("One");
        2: print("Two");
    else
        print("Other number");
    end;
}
```

### Loop Examples

```pascal
void LoopExamples() {
    var i: integer;
    
    // For loop
    for i := 1 to 10 do
        print("Iteration: ", i);

    // While loop
    i := 0;
    while i < 5 do {
        print("While loop iteration: ", i);
        i := i + 1;
    }

    // Do-While equivalent (Repeat-Until)
    i := 0;
    repeat
        print("Repeat loop iteration: ", i);
        i := i + 1;
    until i >= 5;
}
```

### Input/Output

```pascal
void IOExample() {
    print("Enter your name: ");
    var name: string := input();
    print("Hello, ", name, "!");
}
```

### Operator Overloading

```pascal
operator +(A, B: integer): integer {
    return A + B;
}
```

### Templates/Generics

```pascal
generic TBox<T> {
public:
    var Value: T;
    constructor Create(AValue: T);
    function GetValue(): T;
};

constructor TBox<T>.Create(AValue: T) {
    Value := AValue;
}

function TBox<T>.GetValue(): T {
    return Value;
}
```

## Getting Started

### Installation

```bash
# Installation instructions will be added soon
```

### Your First Aegis Program

Create a file named `HelloWorld.aeg` with the following content:

```pascal
class HelloWorld {
public:
    static void main(args: array of string) {
        print("Hello, Aegis!");
        
        print("What's your name? ");
        var name: string := input();
        print("Welcome to Aegis, ", name, "!");
    }
};
```

Compile and run:

```bash
aegisc HelloWorld.aeg
aegis HelloWorld
```

## Inspirations

- Programming Languages module (COS 333) from University of Pretoria
- Need for more readable systems-level languages
- Pascal's readability and C++'s power and flexibility

## License

MIT License - See [LICENSE](LICENSE) for details.

## Contributing

Contributions are welcome! Please feel free to submit a Pull Request.

1. Fork the repository
2. Create your feature branch (`git checkout -b feature/amazing-feature`)
3. Commit your changes (`git commit -m 'Add some amazing feature'`)
4. Push to the branch (`git push origin feature/amazing-feature`)
5. Open a Pull Request

## Contact

Project Link: [https://github.com/yourusername/aegis](https://github.com/yourusername/aegis)