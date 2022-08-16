#include<stdio.h>

int src[10] = { 1,2,3,4,5,6,7,8,9 };
int dst[10] = { 0 };

int data_copy_c(void) {

	for (int i = 0; i < 10; i++)
		dst[i] = src[i];
	return 0;
}

int  data_copy_asm(void) {
	
	__asm
	{
		LDR R0, =src
		LDR R1, =dst
		MOV R2, #10
	LOOP:
		LDR R3, [R0], #4
		STR R3, [R1], #4
		SUBS R2, R2, #1
		BNE LOOP
	}
}


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

