#include <stdio.h>
#include <unistd.h>

/**
 * main - PID
 *
 * Return: Always 0.
 */
int main(void)
{
    pid_t process_id, parent_id;

    process_id = getpid();
    parent_id = getppid();

    printf("Process id = %u\n", process_id);
    printf("Parent id = %u\n", parent_id);
    return (0);
}