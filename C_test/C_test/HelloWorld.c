#include<stdio.h>

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