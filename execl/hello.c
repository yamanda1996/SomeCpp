#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc,char* argv[])
{
	int i = 0;
	printf("in hello function pid is %d\n",getpid());
	for(i = 0;i < argc; ++i)
	{
	
		printf("parameter[%d] : %s\n",i,argv[i]);
	}

	return 0;
}
