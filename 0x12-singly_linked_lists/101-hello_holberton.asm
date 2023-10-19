section .data
    format db "Hello, Holberton", 10, 0   ; The format string for printf

section .text
    extern printf                       ; Declare the printf function as external

global _start
_start:
    sub rsp, 8                          ; Align the stack

    lea rdi, [rel format]                ; Load the address of the format string into rdi
    xor eax, eax                        ; Set eax to 0 (no floating-point arguments)
    call printf                         ; Call the printf function

    add rsp, 8                          ; Restore the stack

    mov eax, 60                         ; Exit syscall number
    xor edi, edi                        ; Exit status: 0
    syscall                             ; Invoke the syscall to exit
