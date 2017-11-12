#include "types.h"
#include "user.h"
#include "syscall.h"

int
main(int argc, char *argv[])
{
    printf(1, "TESTE DO FORK\n");
	int pid = fork();
    if (pid == 0) {
        printf(1, "filho executando %d\n", pid);
        printf(1, "filho morrendo  %d\n", pid);
    } else {
        wait();
        printf(1, "parent executando depois do filho %d\n", pid);
        printf(1, "pai morrendo %d\n", pid);
    }
    printf(1, "Esperando %d\n", pid);
    exit();
}
