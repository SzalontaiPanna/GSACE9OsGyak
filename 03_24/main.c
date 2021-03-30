#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/file.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

int main()
{
    int fd, ret;
    char buf[32];

    buf[0]=0;

    fd=open("gsace9.txt",O_RDWR);

    if(fd == -1){
        perror("open() hiba!");
        exit(-1);
    }

    ret=read(fd,buf,32);
    printf("read() olvasott %d bytot, ami a következõ: %s\n",ret,buf);
    strcpy(buf,"GSACE9");

    ret=lseek(fd,0,SEEK_SET);
    printf("lseek() mondja: %d\n",ret);

    ret=write(fd,buf,6);
    printf("write() mondja: %d\n",ret);

    close(fd);

}
