#include<stdio.h>
#include<unistd.h>
int main()
{
	char *arg[]={"ls","-al",NULL};
	execv("/bin/ls",arg);
	return 1;
}
