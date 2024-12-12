//Homework 2 - twd4

//Demonstrate use of:
//Pointers
//Dynamic Memory Allocation
//Process Management (forking, semaphores, priority, pipes)

//Include necessary libraries
#inlcude <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/resource.h>
#include <sys/time.h>
#include <string.h>
#include <stdlib.h>
#include <semaphore.h>
#include <pthread.h>
#include <fcntl.h>
#inlcude <sys/stat.h>

//Creating child processes
int main() {
  pid_t pid = fork();

  if (pid == 0) {
    //Child process
    printf("Child process: PID = %d, Parent PID = %d\n", getpid(), getppid());
} else if (pid > 0) {
    //Parent process
    printf("Parent process: PID = %d, Child PID = %d, Child PID = %d\n", getpid, pid);
} else {
    //Fork failed
    print(stderr, "Fork failed\n");
    return 1;
}
return 0;
}
