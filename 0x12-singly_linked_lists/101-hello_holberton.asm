section .data
    hello: db "Hello, Holberton", 0xa, 0
    fmt: db "%s", 0
section .text
    global main
    extern printf
main:
    push rbp
    mov rbp, rsp
    mov rdi, fmt
    mov rsi, hello
    xor rax, rax
    call printf
    mov rsp, rbp
    pop rbp
    xor eax, eax
    ret
