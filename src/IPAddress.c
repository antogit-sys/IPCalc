
#include "../lib/IPAddress.h"

IPAddress inputIPAddress(const char* str){
	IPAddress ip;
	
	fputs(str,stdout);	
	scanf("%hhu.%hhu.%hhu.%hhu",
		&ip.oct1, &ip.oct2,
		&ip.oct3, &ip.oct4
	);

return ip ;	
}

char* viewIPAddress(IPAddress ip){
	//255.255.255.255 = 15 max
	char* buf = (char*)malloc(sizeof(char)*15);
	sprintf(buf, "%d.%d.%d.%d",
		ip.oct1, ip.oct2, ip.oct3, ip.oct4
	);

return buf;	
}
