#define _GNU_SOURCE
#include <unistd.h>
#include <sys/syscall.h>

int main(void) {
	const char msg[] = "Hello via syscall(SYS_write)\n";
	long ret = syscall(SYS_write, 1, msg, sizeof(msg) - 1);
	return (ret < 0);
}
