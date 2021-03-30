# include  < stdio.h >
# include  < stdlib.h >
# include  < sys / type.h >
# include  < sys / wait.h >

int  main ()
{
	int státusz;

	if ((állapot = rendszer ( " dátum " )) < 0 )
		perror ( " rendszer () hiba " );

	ha ( WIFEXITED (állapot))
		printf ( " Normál befejezés | Érték = % d \ n " , WEXITSTATUS (állapot));

	if ((állapot = rendszer ( " kismalac " )) < 0 )
		perror ( " rendszer () hiba " );

	ha ( WIFEXITED (állapot))
		printf ( " Normál befejezés | Érték = % d \ n " , WEXITSTATUS (állapot));

	kilépés ( 0 );
}
