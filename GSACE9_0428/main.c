# include  < stdlib.h >
# include  < stdio.h >
# include  < sys / type.h >
# include  < sys / ipc.h >
# include  < sys / sem.h >
# define  SEMKEY  0x12

int semID;
int nsems;
int semnum;
int r;
int semflag;
int cmd;

struct sembuf sembuf, * sop;
szakszervezeti szemun;

int  main ()
{
    int arg;
	nsems = 1 ;
	semflag = 00666 | IPC_CREAT;
	semID = semget (SEMKEY, nsems, semflag);
	if (semID < 0 ) {
        perror ( " Probl�ma / hiba! \ n " );
        visszat�r  0 ;}
	m�s
        printf ( " Az ID avagy azonos�t�: % d \ n " , semID);
	printf ( " K�rem a semval �rt�ket: " );

	semnum = 0 ;
	cmd = BE�LL�T�S;
	scanf ( " % d " , & arg);
	r = semctl (semID, semnum, cmd, arg);
	printf ( " \ n Visszat�r�si �rt�k: % d , semval �rt�k: % d \ n " , r, arg);

    visszat�r  0 ;

}
