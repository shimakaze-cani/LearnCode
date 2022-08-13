.386
.model flat,stdcall
.stack 4096

.data

ExitProcess proto, deExitcode:dword

.code
main PROC
	MOV eax, 1
	ADD eax, 2

	invoke ExitProcess, 0
main ENDP

END main