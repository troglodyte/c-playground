// Build with: gcc -nostdlib -static -s __.c -o a.out

#define SYS_write 1
#define SYS_exit 60

static long sys_call3(long n, long a1, long a2, long a3) {
	long ret;
	__asm__ volatile (
		"syscall"
		: "=a"(ret)
		: "a"(n), "D"(a1), "S"(a2), "d"(a3)
		: "rcx", "r11", "memory"
	);
	return ret;
}

void _start(void) {
	const char msg[] = "Hello from syscalls\n";
	// write(1, msg, sizeof(msg) -1);
	sys_call3(SYS_write, 1, (long)msg, sizeof(msg)-1);
	sys_call3(SYS_exit, 0, 0, 0);
}
