#include<stdio.h>

void main() {
	
	
	int a;
	int b;
	int c;

	__asm
	{
		mov a, 3		// 将3移动到a里
		mov b, 4		// 将4移动到B里
		mov eax, a		// 将a里的值移动到exa寄存器里
		add eax, b		// 将exa里的值与b里的值相加后放到exa寄存器里
		mov c, eax		// 将寄存器exa里的值一道c里
	}

	printf("%d\n", c);	// 输出c
	

	printf("Hello World!");
} 