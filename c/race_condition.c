#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

int shared_variable = 0;

void* race_condition_example(void* arg) {
    int temp = shared_variable;
    temp += 1;
    shared_variable = temp;
    return NULL;
}

int main() {
    pthread_t thread1, thread2;
    pthread_create(&thread1, NULL, race_condition_example, NULL);
    pthread_create(&thread2, NULL, race_condition_example, NULL);

    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

    printf("Final value of shared_variable: %d\n", shared_variable); // Unexpected result due to race condition
    return 0;
}