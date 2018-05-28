#include <stdio.h>

int main(int argc,char **argv)
{
	union {
		short s;
		char c[sizeof(short)];
	}un;
	
	un.s = 0x0102;
	
	if (sizeof(short) == 2) {
		if (un.c[0] == 0x1 && un.c[1] == 0x2) {
			printf("big-endian\n");
		} else if (un.c[0] == 0x2 && un.c[1] == 0x1){
			printf("little-endian\n");
		} else {
			printf("unknow endian\n");
		}
	} else {
		printf("sizeof(short):%d\n",sizeof(short));
	}
}