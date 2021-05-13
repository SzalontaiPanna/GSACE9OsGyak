# include  < sys / type.h >
# include  < sys / ipc.h >
# include  < sys / shm.h >
# include  < stdio.h >
# include  < stdlib.h >
# include  < string.h >
# define  SHMKEY  13


struct str {
    int lng;
    char sz�veg [ 1024 - sizeof ( int )];
} * szegmens;

int  main ()
{
  int vissza;
  int v�lasztani;
  int shmid;
  int z�szl�;
  int m�ret = 512 ;
  kulcs_t kulcs;

  kulcs = SHMKEY;
  z�szl� = 0 ;

  if ((shmid = shmget (kulcs, m�ret, z�szl�)) < 0 )
  {
     z�szl� = 00666 | IPC_CREAT;
     if ((shmid = shmget (kulcs, m�ret, z�szl�)) < 0 )
     {
        perror ( " \ n A shmget sikertelen volt! " );
        visszat�r�s - 1 ;
     }
  }

  printf ( " \ n Az azonos�t�: % d \ n " , shmid);

  z�szl� = 00666 | SHM_RND;
  szegmens = ( struct str *) shmat (shmid, NULL , z�szl�);

  if (szegmens == ( �rv�nytelen *) - 1 )
  {
     perror ( " \ n Csatlakoz�s sikertelen volt " );
     visszat�r�s - 1 ;
  }

  if ( strlen (szegmens-> sz�veg )> 0 )
  {
     printf ( " \ n A r�gi sz�veg: % s " , szegmens-> sz�veg );
  }

  printf ( " \ n �j sz�veget: " );
  scanf ( " % s " , szegmens-> sz�veg );
  printf ( " \ n Az �j sz�veg: % s  \ n " , szegmens-> sz�veg );

  shmdt (szegmens);
  struct shmid_ds shmid_ds, * buf;
  buf = & shmid_ds;
  z�szl� = 0 ;

  do {
    printf ( " A men� opci�i: \ n " );
    printf ( " 0. St�tusz lek�rdez�se \ n " );
    printf ( " 1.t�rl�s a mem�ri�b�l \ n " );
    scanf ( " % d " , & select);

  } while (v�laszd! = 0 && v�laszd! = 1 );

  ha (v�laszd == 0 ) {
    vissza = shmctl (shmid, IPC_STAT, buf);
    printf ( " \ n M�ret: % ld " , buf-> shm_segsz );
    printf ( " \ n Pid: % d \ n " , buf-> shm_lpid );
  }
  else  if (v�laszd == 1 ) {
    vissza = shmctl (shmid, IPC_RMID, NULL );
    printf ( " \ n Megsz�ntetve a szegment \ n " );
  }

  kil�p�s ( 0 );
}
