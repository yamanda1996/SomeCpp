#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>


int main()
{
	pid_t pid;
	int status,ret;
	
	pid = fork();


	if(0 == pid)
	{
		printf("child process pid is %d\n",getpid());
		execl("./hello","hello","world",NULL);
	}
	else if(pid > 0)
	{
		printf("parent function pid is %d\n",getpid());
		ret = wait(&status);



	}
		
	return 0;
}
