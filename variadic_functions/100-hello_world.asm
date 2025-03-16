section .data
    message db "Hello, World", 10  ; The message string followed by a newline
    msg_len equ $ - message         ; Calculate message length

section .text
    global _start                   ; Entry point

_start:
    mov rax, 1                      ; syscall number for sys_write (1)
    mov rdi, 1                      ; file descriptor 1 (stdout)
    mov rsi, message                 ; pointer to message
    mov rdx, msg_len                 ; message length
    syscall                          ; invoke the system call

    mov rax, 60                     ; syscall number for sys_exit (60)
    xor rdi, rdi                    ; status 0 (success)
    syscall                          ; invoke the system call

