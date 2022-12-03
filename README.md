# Libft
### Custom C library to replace some standard libc functions

**NOTE:** use the old version for now, this version is unstable and will not be liked by Moulinette.

This was an introductory project for [Hive Helsinki](https://www.hive.fi/en/),
the Finnish branch of the [42 Coding School](https://42.fr/en/homepage/) network.

The idea was to re-code from scratch the functionality of a bunch of the standard libc functions, to learn to code in C as well as
have a base library which to build upon as we are prohibited from using most built-in standard library functions in our projects.

The version tagged as [old](https://github.com/ickarjala/42-libft/tree/old) is the first state of the project to pass the evaluations.

The functions include:

* String manipulation
* Memory setting, clearing
* Array operations
* Comparisons, iteration

With bonuses regarding linked lists and custom functions.
Find details with the respective subdirectories.\
**(UNDER CONSTRUCTION)**

* _Part 1_ (Mandatory)
* _Part 2_ (Mandatory)
* _Bonus_
* _Extra_ (Custom functions)

### (NOTE: I am in the process of cleaning up and re-organizing this repository, some info may not be up to date.)

## Installation
``cd`` into the root folder and ``make`` with the appropriate rules to compile libft, then link it with your own programs.
See Makefile for further details.

*The supported standard targets are:*\
``all`` : **(DEFAULT)** standard deployment build\
``clean`` : remove object files\
``fclean`` : remove objects and binary\
``re`` : full rebuild

*In addition you can use the following, defined in `config.mk`:*\
``so`` : dynamic library\
``d``/``BUILD_RULES_DEBUG`` : build with debug symbols and fsanitize\
``W``/``BUILD_RULES_STRICT`` : build with stricter -W flags, useful during development\
``O``/``BUILD_RULES_OPTIMAL`` : build with heavier optimization

*Plus a utility command for running Norminette on the project:*\
``norme``

There is also a separate Makefile in eval_tests/ for compiling the library with a tester and some utilities,
but it is also very much WIP.

## TODO:
* Makefile should be able to build .so despite .a existing
* PRE_REQUISITE message should be printed whenever objects need to be compiled
* make clean should only print / remove the files that exist
* make NAME should print all the objects before compiling them, allowing for nice formatting of output
* a script to automate building a moulinette-compliant directory with only needed files
