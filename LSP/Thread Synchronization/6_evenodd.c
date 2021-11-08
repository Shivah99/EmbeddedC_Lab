#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>
#include <string.h>
#define MAX_COUNT 20
int count=0;

pthread_mutex_t lock = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t condition = PTHREAD_COND_INITIALIZER;
void* even(void* data)
{
    
    while (1)
    {
       pthread_mutex_lock(&lock);
        while (count%2 == 0)
           pthread_cond_wait(&condition, &lock);
        if (count < MAX_COUNT)
        {
            count++;
            printf("even = %d\n",count);
        }
        pthread_cond_signal(&condition);
        if (count >= MAX_COUNT)
        {
            pthread_mutex_unlock(&lock);
            return NULL;
        }
	pthread_mutex_unlock(&lock);
}}

void* odd(void* data)
{
    while (1)
    {
       pthread_mutex_lock(&lock);
        while (count%2 != 0)
           pthread_cond_wait(&condition, &lock);
        if (count < MAX_COUNT)
        {
            count++;
            printf("odd  = %d\n",count);
        }
        pthread_cond_signal(&condition);
        if (count >= MAX_COUNT)
        {
            pthread_mutex_unlock(&lock);
            return NULL;
        }
	pthread_mutex_unlock(&lock);
}}

   
int main()
{
    pthread_t thread1, thread2;
    pthread_create(&thread1, NULL, odd, NULL);
    pthread_create(&thread2, NULL, even,NULL);
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);
     
    return 0;
}
  