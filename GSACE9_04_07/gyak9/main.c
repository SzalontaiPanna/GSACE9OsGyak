# include  < stdio.h >
# include  < stdlib.h >
# include  < unistd.h >
# include  < jel.h >


// int kill (pid_t pid, int sig);
�rv�nytelen  Riaszt�sKezelo ( int sig);

int  main ( int argc, char ** argv)
{
    ha (argc! = 2 )
    {
        printf ( " Hasznalat: ./GSACE9_gyak3 PID \ n " );
        visszat�r  1 ;
    }

    pid_t pid = ( pid_t ) atoi (argv [ 1 ]);
    kill (pid, SIGALRM);

 if ( jel (SIGALRM, AlarmKezelo) == SIG_ERR)
    {
        printf ( " Nem sikerult handlert allitani a (z) \" SIGALRM \ " jelre! \ n " );
        visszat�r  1 ;
    }

    sz�net ();
    visszat�r  0 ;
}

void  AlarmKezelo ( int sig)
{
    printf ( " GSACE9 \ n Mostantol nem blokkolodok! \ n " );
    kil�p�s ( 1 );
}
