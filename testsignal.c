#include <signal.h>
#include <stdio.h>

void int_handler(int signnum) {
        printf("\nBYeBye!\n");
        exit(-1);
}

int main(){
        signal(SIGINT, int_handler);
        while(1) {
                printf("fuck me! baby\n");
                sleep(2);
        }
}

