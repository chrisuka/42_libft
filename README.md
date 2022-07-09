# Libft
## Custom C library to replace some standard libc functions

This was an introductory project for Hive Helsinki, the Finnish branch of the 42 Coding School network.
The idea was to re-code from scratch the functionality of a bunch of the standard libc functions, to learn to code in C as well as
have a base library which to build upon as we are prohibited from using most built-in standard library functions in our projects.

The functions include:

* String manipulation
* Memory setting, clearing
* Array operations
* Comparisons, iteration

With bonuses regarding linked lists and custom functions.
Find details with the respective subdirectories.

* Part 1 (Mandatory)
* Part 2 (Mandatory)
* Bonus
* Extra (Custom functions)

### (NOTE: I am in the process of cleaning up and re-organizing this repository, some info may not be up to date.)

The version tagged as old is the first state of the project to pass the evaluations, and fails are older submissions.

## Installation
``cd`` into the root folder and ``make all`` to compile libft.a, then use link it with your own programs.
You can clean the objects and binary with ``clean`` and ``fclean`` respectively, however recompilation is faster
if you leave them.

There is also a separate Makefile in eval_tests/ for compiling the library with a tester and some utilities,
but it is also very much WIP.

NOTE: use the old version for now, this version is unstable and will not be liked by moulinette.

## TODO:
* write a script to automate building a moulinette-compliant directory with only needed files
