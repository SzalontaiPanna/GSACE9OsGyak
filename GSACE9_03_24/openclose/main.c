# include  < stdio.h >
# include  < unistd.h >
# include  < stdlib.h >
# include  < sys / file.h >
# include  < sys / type.h >
# include  < sys / stat.h >
# include  < fcntl.h >
# include  < string.h >



int  main ()
{
    int F�JL;
    int vissza;
    char puffer [ 50 ];

    puffer [ 0 ] = 0 ;

    F�JL = nyitott ( " GSACE9.txt " , O_RDWR);

    ha (F�JL == - 1 ) {
        perror ( " Fajl megnyitas open () -> hiba! \ n " );
        kil�p�s (- 1 );
    }
    else {

    }

    vissza = olvas (F�JL, puffer, 50 );
    printf ( " % d byteot olvasott be read (). \ n \ n " , vissza);
    strcpy (puffer, " GSACE9 " );


    vissza = lseek (F�JL, 0 , SEEK_SET);
    printf ( " A lseek () beallitva a ->   % d . helyen " , vissza);

    vissza = �r (F�JL, puffer, 6 );
    printf ( "  % d byteot irt ki a write () ...: % s \ n \ n \ n " , vissza, puffer);
    strcpy (puffer, " GSACE9 " );

    bez�r (F�JL);

    visszat�r  0 ;
}
