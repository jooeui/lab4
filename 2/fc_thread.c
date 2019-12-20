#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#define THREAD_NUMBER 5

void *thread_func(void *arg);

void main(){
    pthread_t tid[THREAD_NUMBER];
    int status;
    int i;

    for(i = 0; i < THREAD_NUMBER; i++){
        status = pthread_create(&tid[i], NULL, thread_func, (void*)i);

        if(status != 0 ){
            fprintf(stderr,"Create thread %d: %d\n",i,status);
            exit(1);
        }
    }
    pthread_exit(NULL);
    return;
}

void *thread_func(void *arg){
    printf("Thread %d: is working...\n", arg);
    return arg;
}

