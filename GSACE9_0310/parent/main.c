#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int pid;
    if((pid=fork())<0)
        perror ("fork error");
    else if (pid==0)
    {
        if(execl("./child", "child",(char *)Null)
           perror("execl error");
    }
    if(waitpid(pid, Null, 0)<0)
            perror("wait error");

    return 0;
}
