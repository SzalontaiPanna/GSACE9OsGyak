# include  < stdio.h >
# include  < stdlib.h >
# include  < sys / type.h >
# include  < sys / wait.h >
# include  < unistd.h >

int  main ()
{
	pid_t pid;

	if ((pid = villa ()) < 0 )
		perror ( " hiba " );
	else  if (pid == 0 ) {
		if ( execlp ( " ls " , " ls " , " -l " , ( char *) 0 ) < 0 )
			perror ( " hiba " );
	}

	if ( waitpid (pid, NULL , 0 ) < 0 )
		perror ( " hiba " );

	kilépés ( 0 );
}
