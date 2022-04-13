#include "function_pointers.h"
/**
* print_name - function
* @name: name of string to print
* @f: pointer to func print_name
*
* Function to print a name
* Return: 0
*/
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
