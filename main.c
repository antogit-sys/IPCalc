#include <stdio.h>
#include <stdlib.h>
#include "IPAddress.h"

int main(void)
{
	IPAddress ip;
	ip = inputIPAddress("input ip: ");
	printf("%s\n",viewIPAddress(ip));
	putsIPAddress(ip);
	
return EXIT_SUCCESS;	
}
