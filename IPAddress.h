#ifndef _STDIO_H_
#	define _STDIO_H_
#	include <stdio.h>
#endif
#ifndef _STDLIB_H_
#	define _STDLIB_H_
#	include <stdlib.h>
#endif
#ifndef _STDINT_H_
#	define _STDINT_H_
#	include <stdint.h> 
#endif

typedef struct{
	uint8_t oct1;
	uint8_t oct2;
	uint8_t oct3;
	uint8_t oct4;
}IPAddress;


IPAddress inputIPAddress(const char*);
char* viewIPAddress(IPAddress);
