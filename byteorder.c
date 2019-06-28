/*
 * 网络字节序是大端字节序
 * "大端"和"小端"表示多字节值的哪一端存储在该值的起始地址处;小端存储在起始地址处,即是小端字节序;大端存储在起始地址处,即是大端字节序
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
