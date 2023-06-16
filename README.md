# Libft
### Custom C library to replace some standard libc functions

This was an introductory project for [Hive Helsinki](https://www.hive.fi/en/),
the Finnish branch of the [42 Coding School](https://42.fr/en/homepage/) network.

The idea was to re-code from scratch the functionality of a bunch of
the standard libc functions, to learn to code in C as well as have a
base library which to build upon as we are prohibited from using most
built-in standard library functions in our projects.

The version tagged
[old](https://github.com/ickarjala/42-libft/tree/old) is the first
state of the project to pass the evaluations.
(Hivers III old curriculum, Norm v3)

The functions include:

* String manipulation
* Memory setting, clearing
* Array operations
* Comparisons, iteration

With bonuses regarding linked lists and custom functions.

## Installation
``cd`` into the root folder and ``make`` with the
appropriate rules to compile libft, then link it with your own
programs.  See Makefile for further details.

The supported standard targets are:
* ``all`` : (default) standard deployment build
* ``clean`` : remove object files
* ``fclean`` : remove objects and binary
* ``re`` : full rebuild

In addition you can use the following, defined in `config.mk`:
* ``W``|``BUILD_STRICT`` : build with stricter -W flags, useful during development
* ``O``|``BUILD_OPTIMAL`` : build with heavier optimization
* ``D``|``BUILD_DEBUG`` : build with debug symbols and fsanitize

*Plus a utility command for running Norminette on the project:*\
``norme``

## TODO:
* .so target (mainly to support the testers on linux)
* PRE_REQUISITE message should be printed whenever objects need to be recompiled
