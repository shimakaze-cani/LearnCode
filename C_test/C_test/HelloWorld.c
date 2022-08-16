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
		mov a, 3		// ��3�ƶ���a��
		mov b, 4		// ��4�ƶ���B��
		mov eax, a		// ��a���ֵ�ƶ���exa�Ĵ�����
		add eax, b		// ��exa���ֵ��b���ֵ��Ӻ�ŵ�exa�Ĵ�����
		mov c, eax		// ���Ĵ���exa���ֵһ��c��
	}

	printf("%d\n", c);	// ���c
	

	printf("Hello World!");

	
	
	
} 

