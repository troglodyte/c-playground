#include <unistd.h>

int main(void) {
	const char msg[] = "Hello world from sys calls\n";
	// fd = 1 (stdout), buf, length
	write(1, msg, sizeof(msg) - 1);
	// printf("Testing");
	return 0;
}
