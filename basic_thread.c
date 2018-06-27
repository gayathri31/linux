#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<pthread.h>
//basic example for thread creation 

void *myThreadFun(void *arg);

int main()
{
	int res;
	pthread_t thread_id;
	printf("before thread\n");
	res=pthread_create(&thread_id,NULL,myThreadFun,NULL);
	if(res!=0)
	{
		perror("\nThread creation failed");
		exit(EXIT_FAILURE);
	}
	printf("\nWaiting for thread to complete\n");
	res=pthread_join(thread_id,NULL);
	if(res!=0)
	{
		perror("thread creation failed\n");
		exit(EXIT_FAILURE);
	}
	printf("after Thread\n");
	exit(0);
}
void *myThreadFun(void *vargp)
{
	sleep(1);
        printf("\nInside thread \n");
	return NULL;
}
  
