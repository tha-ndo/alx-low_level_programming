format: hello db 'Hello, Holberton', 0

global main
	extern printf

main:
	mov edi, format
	xor eax, eax
	call printf
	mov eax, 0
	ret