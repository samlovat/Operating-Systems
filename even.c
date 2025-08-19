#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
#include <unistd.h>

void handle_sigint(int sig) {
    printf("Yeah!\n");
}

void handle_sigup(int sig) {
    printf("Ouch!");
}


int main(int argc, char *argv[])
{
    signal(SIGINT, handle_sigint);
    signal(SIGHUP, handle_sigup);
    int number;
    printf("Give me number: ");
    scanf("%i", &number);
    int even = 0;
    for(int i = 0; i < number; i++){
        printf("%d", even);
        even+=2;
        sleep(5);
    }
    return 0;
}
