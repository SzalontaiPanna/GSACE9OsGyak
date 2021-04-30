# include  < stdio.h >
# include  < stdlib.h >
# include  < unistd.h >
# include  < jel.h >


érvénytelen  TerimalKezelo ( int sig);

int  main ( érvénytelen )
{
    if ( jel (SIGKILL, TerimalKezelo) == SIG_ERR)
    {
        printf ( " Nem sikerult handlert allitani a (z) \" SIGKILL \ " jelre! \ n " );
        visszatér  0 ;
    }

    míg (- 1 )
    {
        printf ( " Varakozas ... \ n " );
        alvás ( 3 );
    }

    visszatér  0 ;
}

érvénytelen  TerimalKezelo ( int sig) {

    jel (sig, SIG_IGN);
    printf ( " jel értéke: % d ... \ n " , sig);
}
