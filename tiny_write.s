; tiny_write.s
; nasm -felf64 tiny_write.s && ld -s -o tiny_write tiny_write.o

        global _start

section .text
_start:
        mov     rax, 1          ; SYS_write
        mov     rdi, 1          ; fd = 1 (stdout)
        mov     rsi, msg        ; buf
        mov     rdx, msg_len    ; count
        syscall

        mov     rax, 60         ; SYS_exit
        xor     rdi, rdi        ; status = 0
        syscall

section .rodata
msg:    db "Hello, from assembly!", 10
msg_len equ $ - msg

