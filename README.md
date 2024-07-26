<h1 align='center'>C++ Modules</h1>

<p align='center'>Welcome to the C++ Modules repository! This project contains the various modules and exercises completed as part of the 42 School curriculum. Each module focuses on different aspects of C++ programming, helping to build a strong foundation in the language and its features.</p>

## Table of Contents

1. [Introduction](#introduction)
2. [Modules Overview](#modules-overview)
   - [Module 00](#module-00)
   - [Module 01](#module-01)
   - [Module 02](#module-02)
   - [Module 03](#module-03)
   - [Module 04](#module-04)
   - [Module 05](#module-05)
   - [Module 06](#module-06)
   - [Module 07](#module-07)
   - [Module 08](#module-08)
3. [Installation](#installation)
4. [Usage](#usage)
5. [General Rules](#general-rules)

## Introduction

This repository contains all the C++ modules and exercises I have completed as part of the 42 School curriculum. Each module builds upon the previous ones, gradually introducing more complex concepts and techniques in C++ programming.

## Modules Overview

### Module 00: Introduction to C++

**Topics Covered:**
- Namespaces
- Classes
- Member Functions
- Stdio Streams
- Initialization Lists
- Static Members
- Const Qualifiers
- Basic Concepts

**Objective:** Understand the fundamental building blocks of C++ programming, including how to define and use classes, namespaces, and member functions.
**Exercises:** Implementing simple programs to get familiar with the C++ syntax and basic constructs.

### Module 01: Memory Allocation and Pointers

**Topics Covered:**
- Memory Allocation
- Pointers to Members
- References
- Switch Statement

**Objective:** Learn how to manage memory dynamically, use pointers and references effectively, and control program flow using the switch statement.
**Exercises:** Practice memory allocation and deallocation, use pointers and references in various contexts, and implement programs utilizing the switch statement.

### Module 02: Ad-hoc Polymorphism, Operators Overloading

**Topics Covered:**
- Ad-hoc Polymorphism
- Operator Overloading
- Orthodox Canonical Class Form

**Objective:** Explore ad-hoc polymorphism, understand operator overloading, and implement classes following the Orthodox Canonical Form.
**Exercises:** Overload operators for custom classes, and ensure proper management of resources using the canonical form.

### Module 03: Inheritance

**Topics Covered:**
- Inheritance

**Objective:** Understand the principles of inheritance in C++ and how to derive new classes from existing ones.
**Exercises:** Create base and derived classes, and demonstrate inheritance hierarchies in simple programs.

### Module 04: Subtype Polymorphism, Abstract Classes, Interfaces

Templates and STL

**Topics Covered:**
- Subtype Polymorphism
- Abstract Classes
- Interfaces

**Objective:** Grasp subtype polymorphism, define and use abstract classes, and implement interfaces in C++.
**Exercises:** Develop abstract classes and interfaces, and create concrete classes that implement these interfaces.

### Module 05: Exceptions and Error Handling

**Topics Covered:**
- Repetition
- Exceptions

**Objective:** Learn to handle repetitive tasks using loops and manage errors and exceptions effectively in C++.
**Exercises:** Write programs that use various loop constructs, and implement exception handling for robust error management.

### Module 06: C++ Casts

**Topics Covered:**
- C++ Casts

**Objective:** Understand the different types of casts in C++ and their appropriate usage.
**Exercises:** Practice using static_cast, dynamic_cast, const_cast, and reinterpret_cast in different scenarios.

### Module 07: Multithreading and Concurrency

**Topics Covered:**
- C++ Templates

**Objective:** Learn how to write and use templates for generic programming in C++.
**Exercises:** Implement function and class templates to create generic solutions for common problems.

### Module 08: Iterators

**Topics Covered:**
- Templated Containers
- Iterators
- Algorithms

**Objective:** Explore the use of templated containers, iterators, and algorithms from the C++ Standard Library.
**Exercises:** Use various STL containers, iterate through them, and apply standard algorithms to solve problems.

### Module 09: STL

**Topics Covered:**
- STL (Standard Template Library)

**Objective:** Gain a deep understanding of the C++ Standard Library (STL) and its components.
**Exercises:** Implement complex programs that utilize the STL extensively for efficient and effective solutions.

## Installation

To get started with the modules, clone this repository to your local machine:

```bash
git clone https://github.com/jesuismarie/CPP-modules
cd CPP-modules
```

## Usage

Each module is contained in its own directory. Navigate to the desired module and follow the instructions in the README file within that directory to build and run the exercises.

For example, to run the exercises in Module 00:

```bash
cd CPP-module00
cd ex00
make
./exercise-name
```

## General Rules
### Compiling
- Compile your code with c++ and the flags -Wall -Wextra -Werror
- Your code should still compile if you add the flag -std=c++98

### Formatting and naming conventions
- The exercise directories will be named this way: ex00, ex01, ... , exn
- Name your files, classes, functions, member functions and attributes as required in the guidelines.
- Write class names in UpperCamelCase format. Files containing class code will always be named according to the class name. For instance: ClassName.hpp/ClassName.h, ClassName.cpp, or ClassName.tpp. Then, if you have a header file containing the definition of a class "BrickWall" standing for a brick wall, its name will be BrickWall.hpp.
- Unless specified otherwise, every output messages must be ended by a new-line character and displayed to the standard output.
- Goodbye Norminette! No coding style is enforced in the C++ modules. You can follow your favorite one. But keep in mind that a code your peer-evaluators can’t understand is a code they can’t grade. Do your best to write a clean and readable code.

### Allowed/Forbidden
- You are not coding in C anymore. Time to C++! Therefore:
- You are allowed to use almost everything from the standard library. Thus, instead of sticking to what you already know, it would be smart to use as much as possible the C++-ish versions of the C functions you are used to.
- However, you can’t use any other external library. It means C++11 (and derived forms) and Boost libraries are forbidden. The following functions are forbidden too: *printf(), *alloc() and free(). If you use them, your grade will be 0 and that’s it.
- Note that unless explicitly stated otherwise, the using namespace <ns_name> and friend keywords are forbidden. Otherwise, your grade will be -42.
- You are allowed to use the STL in the Module 08 and 09 only. That means: no Containers (vector/list/map/and so forth) and no Algorithms (anything that requires to include the <algorithm> header) until then. Otherwise, your grade will be -42.
