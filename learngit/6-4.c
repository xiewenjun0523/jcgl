#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
int main()
{
	pid_t result;
	result=fork();
	if(result==-1)
	{
		perror("创建子进程失败");
		exit(0);
	}
	else if (result==0)
	{
		printf("测试终止进程的_exit函数！\n");
		printf("这一行我们用缓存!");
		_exit(0);
	}
	else
	{
		printf("测试终止进程的exit函数!\n");
		printf("这一行我们用缓存!");
		exit(0);
	}
}
