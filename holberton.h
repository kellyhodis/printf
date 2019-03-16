#include <stdlib.h>		 
#include <stdlib.h>
#include <stdarg.h>		 
#include <stdarg.h>

typedef struct op		
{		
	char *c;		
	void (*f)(va_list valist);		
} op_t;		

void _printf(const char * const print, ...);		

#endif
