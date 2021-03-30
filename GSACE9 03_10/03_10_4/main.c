# include  < stdio.h >
# include  < stdlib.h >
# include  < sys / type.h >
# include  < sys / wait.h >

# definiálja a  SIZE  255 értéket

# definiálja a  FALSE  0 értéket
# definiálja  IGAZ  1

int  main ()
{

	char str [MÉRET];
    int kezdet = 1 ;

	while (kezdet) {
        scanf ( " % s " , str);
        if (str [ 0 ] == ' n ' ) {
            kezdet = 0 ;
        } else {
            rendszer (str);
            printf ( " Szeretné folytatni? N => Nem \ n Ha folytatni szeretné NE nyomja meg az Y gombot \ n Csak a következõ parancsot írja be \ n " );
        }
	}
	kilépés ( 0 );
}
