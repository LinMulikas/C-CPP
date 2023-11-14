# Learn C

- [Learn C](#learn-c)
- [0. Introduction](#0-introduction)
  - [0.1 The general frame of a C program](#01-the-general-frame-of-a-c-program)
    - [macro](#macro)
- [1. Type system](#1-type-system)
  - [1.1 Basic Types](#11-basic-types)
    - [Number system](#number-system)
      - [The storage of number type](#the-storage-of-number-type)
      - [Other details](#other-details)
    - [Pointer](#pointer)
  - [1.2 Composited type](#12-composited-type)
    - [Array](#array)
    - [Struct](#struct)
    - [Union](#union)
- [2. Function](#2-function)
  - [2.1 Basic of Function](#21-basic-of-function)
  - [2.2 Pointer of Function](#22-pointer-of-function)

# 0. Introduction

## 0.1 The general frame of a C program

The file of a C program includes the following parts, the macro, the declaration, the main function.

### macro

We use the symbol '#' to note this line of code is a macro, which will be handle before the compile of other codes. And the preprocessing is usually separating with compile.

# 1. Type system

## 1.1 Basic Types

The C programming language has basic types including numbers, char and pointer. We first has a glare at the number system of C.

### Number system

#### The storage of number type

```C
char/(unsigned char)
short/(unsigned short), int/(unsigned int), long, long long
float, double, long double
```

The char type has 1B.

Different types in C need different memory to restore. The int type needs 4B, has all the integer value from $[-2^{(4*8)}, 2^{(4*8)})$ or exactly $[-2^{(4*8)}, 2^{(4*8)} - 1]$. And the keyword unsigned int contains only non-negative integers.

The float type number is 4B.

The long type number is also 4B in 32 OS, but 8B in 64bit OS.

#### Other details

The char type in C actually has the integer value. Its value interval is $[-256, 255]$, which has a bijection with the ASCII system, a system of encoding the most common characters.

When we use different type in a process of calculation, we need type cast.

- Implicated type cast.
  When we use a lower type value in a upper type, like int to long, the implicated type cast occurs. The inplicated type cast usually casues precision losing.

- Manually type cast.
  We can use '(NEW TYPE) OLD_VALUE' to cast the value of old type to new type manually.
  

### Pointer

Every value in computer stored in the memory. And the computer use the address to call it. The C programming language use pointer type to store the address of some data.

As the data just stored by '0/1' in the memory, we need a type label to transform the binary data into the data we need. Thus the pointer also need to declare the type.

```C
int* p;
```

- Get the address.
  As the value of pointer is the address of some variable, we also need some operator to get the address of a variable. The operator in C is '&'.

- Use the value of a pointer.
  We use the symbol '*' to call the value of a pointer.


- The arithmetic operator act to a pointer.
  The operator '+', '-' also has definition on pointer type. When we add 1 to a pointer, it will move to the next 1 address of its type. For example, we declare p is a int* pointer, then p+1 has actually the next 8 bit address rather than 1 bit address.






## 1.2 Composited type

### Array

We use the array type to save a senquence of same type.

```C
TYPE ARRAY_NAME[SIZE];
```

And actually, the array_name save the pointer of the beginning of continuous same type data. Assume the beginning address of the data is p. The '[i]' just is a sugar of '*(p + i)'.

> Attention.
> We have clarified the arithmetic operator '+' act on pointer, which will move to the next address of next k data.




### Struct

We use the following sentences to define a new type like the Direct Product or Cartesian Product by the keyword struct.

We use 

```C
struct STRUCT_NAME{
    TYPE1 VAL1;
    TYPE2 VAL2;
    ...
}SINGLETON;
```

to declare a struct-type. And the singleton is optional. We can think it as 'struct{TYPE1 VAL1, TYPE2 VAL2, ...}'. And the singleton will be created automatically.

- The size of struct.
  The struct need restore all the type containned in the declaration of it. Thus, it needs at least the summary of all the type. But to keep the memory of OS clear, the size of a sturct actually need to be a multiple of the maximum type inner the struct. 

  Thus, the system will fill the memory one by one, if it's enough, it needs no new multiple. Otherwise, it needs a new multiple.

  
- Create a struct value variable.
  We use
  ```C
  struct STRUCT_NAME VAL_Name = {VAL1, VAL2, ...};
  ```
  to declare a new variable.



### Union

The keyword union in C to declare an ambiguous type. We use 

```C
union UNION_NAME{
    TYPE1 VAL1;
    TYPE2 VAL2;
    ...
}SINGLETON;
```

to declare a union-type. 

- The size of the union is the maximal size of the inner type.
- And we can assign any inner type value to a union-type variable. The union-type actually just share the same memory without more type cast sentences.





# 2. Function

## 2.1 Basic of Function

## 2.2 Pointer of Function

As the type of a function is defined by the type of inputs and output. We use the sentences to declare a pointer of a function.

```C
int (*POINTER_OF_FUNC)(TYPE1 VAL1, TYPE2 VAL2, ...);
```

Or we can hide the name of variables, just use the type like the following.

```C
int (*POINTER_OF_FUNC)(TYPE1, TYPE2, ...)
```

