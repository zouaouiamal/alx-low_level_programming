section .data
    hello db "Hello, Holberton", 0
    format db "%s", 0

section .text
    extern printf

global main
main:
    push rbp
    mov rbp, rsp

    mov rdi, format
    mov rsi, hello
    xor rax, rax
    call printf

    mov eax, 0
    leave
    ret

