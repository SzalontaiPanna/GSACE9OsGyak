#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/msg.h>
#include <unistd.h>
#define MSGSZ 255
#define KULCS 10

typedef struct msgbuf 
{
long pid; 
char mtext[MSGSZ+1];
}message_buf;

int main()
{
message_buf sbuf;
sbuf.pid=getpid();

printf("Kezdőérték (PID) = %ld.\n Küldés folyamatban....", sbuf.pid);

key_t key= KULCS;
int msk = 0644 | IPC_CREAT;
int msgid= msgget(KULCS, msk);
if(msgid <0)
{
fprintf(stderr, "Nem sikerült a kulcs létrehozása.%d\n", KULCS);
exit(EXIT_FAILURE);
}

do
{
sleep(1);
sbuf.pid=sbuf.pid+2;
msgsnd(msgid, &sbuf, strlen (sbuf.mtext)+1,1);

}while (1);

return 0;
}
