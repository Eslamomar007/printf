#ifndef HEADER_FILE
#define HEADER_FILE
#include <stdarg.h>

int _putchar(char c);
<<<<<<< HEAD
int _int_print(va_list list);
=======
>>>>>>> b8567a7f9701435a4230153c911c099579cb2d62
int _printf(const char *format, ...);
/**
 * typedef struct specs - the structure to var_functions 
 */
typedef struct specs
{
	char *format;
	void (*fun_t)(va_list);
} specifer;

void case_charecter(va_list list);
void case_string(va_list list);
void case_percent(__attribute__((unused))va_list list);

#endif
