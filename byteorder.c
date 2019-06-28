/*
 * 网络字节序是大端字节序
 * 1.小端法(Little-Endian)就是低位字节排放在内存的低地址端即该值的起始地址，高位字节排放在内存的高地址端。 
 * 2.大端法(Big-Endian)就是高位字节排放在内存的低地址端即该值的起始地址，低位字节排放在内存的高地址端。
*/

#include <stdio.h>

int main(int argc,char **argv)
{
	union {
		short s;
		char c[sizeof(short)];
	}un;
	
	un.s = 0x0102;
	
	if (sizeof(short) == 2) 
        {
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


#include <stdio.h>
 
#include <sys/types>
 
main()
 
{
 
int x=0x12345678; /* 305419896 */
 
unsigned char *p=(char *)&x;
 
printf("%0x % 0x %0x %0x",xp[0],xp[1],xp[2],xp[3]);
 
}
输出：78 56 34 12

说明是小端！反过来的则是大端
