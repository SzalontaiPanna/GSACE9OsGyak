# include  < stdio.h >
# include  < stdlib.h >

# include  < unistd.h >
# include  < jel.h >

�rv�nytelen  Megszakitas ( int jel);
�rv�nytelen  kilepes ( int jel);

al��ratlan  int Megszakitasok = 0 ;

int  main ( �rv�nytelen )
{
    if ( jel (SIGINT, Megszakitas) == SIG_ERR)
    {
        printf ( " Nem sikerult handlert allitani a (z) SIGINT jelre! \ n " );
        visszat�r  0 ;
    }

    if ( jel (SIGQUIT, kilepes) == SIG_ERR)
    {
        printf ( " Nem sikerult handlert allitani a (z) SIGQUIT jelre! \ n " );
        visszat�r  0 ;
    }

    m�g (Megszakitasok < 2 )
    {
        printf ( " Varakozas a jelre ... \ n " );
        alv�s ( 1 );
    }

    printf ( " Megvan a masodik SIGINT jel! " );
    visszat�r  0 ;
}

�rv�nytelen  Megszakitas ( int jel)
{
    printf ( " SIGINT jel: % d \ n " , jel);
    Megszakitasok ++;
}

�rv�nytelen  kilepes ( int jel)
{
    printf ( " SIGQUIT jel: % d \ n " , jel);
}
