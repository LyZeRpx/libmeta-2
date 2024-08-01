/*
** EPITECH PROJECT, 2024
** libmeta
** File description:
** meta_tools.h
*/

#ifndef META_TOOLS_H
    #define META_TOOLS_H
    #define TYPEOF(x) _Generic((x), \
	int: "int", \
	float: "float", \
	double: "double", \
	char: "char", \
	char*: "string", \
	void*: "void pointer", \
	default: "unknown")
#endif
