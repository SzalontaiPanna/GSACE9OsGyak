# include  < stdio.h >
# include  < stdlib.h >
# include  < sys / type.h >
# include  < sys / wait.h >

# defini�lja a  SIZE  255 �rt�ket

# defini�lja a  FALSE  0 �rt�ket
# defini�lja  IGAZ  1

int  main ()
{

	char str [M�RET];
    int kezdet = 1 ;

	while (kezdet) {
        scanf ( " % s " , str);
        if (str [ 0 ] == ' n ' ) {
            kezdet = 0 ;
        } else {
            rendszer (str);
            printf ( " Szeretn� folytatni? N => Nem \ n Ha folytatni szeretn� NE nyomja meg az Y gombot \ n Csak a k�vetkez� parancsot �rja be \ n " );
        }
	}
	kil�p�s ( 0 );
}
