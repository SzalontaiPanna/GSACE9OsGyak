# include  < stdio.h >
# include  < stdlib.h >
# include  < unistd.h >
# include  < jel.h >


�rv�nytelen  TerimalKezelo ( int sig);

int  main ( �rv�nytelen )
{
    if ( jel (SIGKILL, TerimalKezelo) == SIG_ERR)
    {
        printf ( " Nem sikerult handlert allitani a (z) \" SIGKILL \ " jelre! \ n " );
        visszat�r  0 ;
    }

    m�g (- 1 )
    {
        printf ( " Varakozas ... \ n " );
        alv�s ( 3 );
    }

    visszat�r  0 ;
}

�rv�nytelen  TerimalKezelo ( int sig) {

    jel (sig, SIG_IGN);
    printf ( " jel �rt�ke: % d ... \ n " , sig);
}
