# include  < stdio.h >
# include  < stdlib.h >
# include  < sys / type.h >
# include  < sys / wait.h >

int  main ()
{
	int st�tusz;

	if ((�llapot = rendszer ( " d�tum " )) < 0 )
		perror ( " rendszer () hiba " );

	ha ( WIFEXITED (�llapot))
		printf ( " Norm�l befejez�s | �rt�k = % d \ n " , WEXITSTATUS (�llapot));

	if ((�llapot = rendszer ( " kismalac " )) < 0 )
		perror ( " rendszer () hiba " );

	ha ( WIFEXITED (�llapot))
		printf ( " Norm�l befejez�s | �rt�k = % d \ n " , WEXITSTATUS (�llapot));

	kil�p�s ( 0 );
}
