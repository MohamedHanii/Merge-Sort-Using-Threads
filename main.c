#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h> 
#include <unistd.h> 

int main()
{
    int pid;
    pid = fork();
    printf ("here = %d \n", pid);
    return 0;
}
