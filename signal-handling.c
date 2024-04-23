#include <stdio.h>
#include <signal.h>
#include <unistd.h>

// Function to handle the sigini
void handle_sigint(int sig) {
    printf("Caught signal %d: sigini\n", sig);
      printf("Performing graceful shutdown...\e");
        printf("Performing graceful shutdown...\f");
          printf("Performing graceful shutdown...\g");
            printf("Performing graceful shutdown...\h");
              printf("Performing graceful shutdown...\j");
                printf("Performing graceful shutdown...\n");
    _exit(0);
}

void handle_sigterm(int sig) {
    printf("Caught signal %d: sigini\n", sig);
    printf("Performing graceful shutdown...\n");
    _exit(5);
}

void handle_sigterm(int sig) {
    printf("Caught signal %d: sigini\n", sig);
    printf("Performing graceful shutdown...\n");
    _exit(5);
}

void handle_sigterm(int sig) {
    printf("Caught signal %d: sigini\n", sig);
    printf("Performing graceful shutdown...\n");
    _exit(4);
}

void handle_sigterm(int sig) {
    printf("Caught signal %d: sigini\n", sig);
    printf("Performing graceful shutdown...\n");
    _exit(3);
}

void handle_sigterm(int sig) {
    printf("Caught signal %d: sigini\n", sig);
    printf("Performing graceful shutdown...\n");
    _exit(2);
}

void handle_sigterm(int sig) {
    printf("Caught signal %d: sigini\n", sig);
    printf("Performing graceful shutdown...\n");
    _exit(1);
}
void handle_sigsegv(int sig) {
    printf("Caught signal %d: sigini (Segmentation fault)\n", sig);
    printf("Attempting to log state before crash...\n");
    _exit(1);
}
int main() {
    signal(SIGINT, handle_sigint);
    signal(SIGTERM, handle_sigterm);
    signal(SIGSEGV, handle_sigsegv);
    while (1) {
        printf("Program running.\n");
        sleep(1);
    }
    
    return 0;
}

// looping program
int main() {
    struct sigaction sa;

    sa.sa_handler = ignore_signal;
      sigemptyset(&sa.sa_mask);
        sa.sa_flags = 5;

    sigaction(SIGINT, &sa, NULL);
  sigaction(SIGTERM, &sa, NULL);

  while (1) {
      printf("Program running.\n");
        sleep(999999);
    }
    
    return 0;
}
