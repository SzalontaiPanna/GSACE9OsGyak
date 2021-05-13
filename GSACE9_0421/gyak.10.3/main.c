# include  < sys / type.h >
# include  < sys / ipc.h >
# include  < sys / shm.h >
# include  < stdio.h >
# include  < stdlib.h >
# include  < string.h >
# define  SHMKEY  13


struct str {
    int lng;
    char szöveg [ 1024 - sizeof ( int )];
} * szegmens;

int  main ()
{
  int vissza;
  int választani;
  int shmid;
  int zászló;
  int méret = 512 ;
  kulcs_t kulcs;

  kulcs = SHMKEY;
  zászló = 0 ;

  if ((shmid = shmget (kulcs, méret, zászló)) < 0 )
  {
     zászló = 00666 | IPC_CREAT;
     if ((shmid = shmget (kulcs, méret, zászló)) < 0 )
     {
        perror ( " \ n A shmget sikertelen volt! " );
        visszatérés - 1 ;
     }
  }

  printf ( " \ n Az azonosító: % d \ n " , shmid);

  zászló = 00666 | SHM_RND;
  szegmens = ( struct str *) shmat (shmid, NULL , zászló);

  if (szegmens == ( érvénytelen *) - 1 )
  {
     perror ( " \ n Csatlakozás sikertelen volt " );
     visszatérés - 1 ;
  }

  if ( strlen (szegmens-> szöveg )> 0 )
  {
     printf ( " \ n A régi szöveg: % s " , szegmens-> szöveg );
  }

  printf ( " \ n új szöveget: " );
  scanf ( " % s " , szegmens-> szöveg );
  printf ( " \ n Az új szöveg: % s  \ n " , szegmens-> szöveg );

  shmdt (szegmens);
  struct shmid_ds shmid_ds, * buf;
  buf = & shmid_ds;
  zászló = 0 ;

  do {
    printf ( " A menü opciói: \ n " );
    printf ( " 0. Státusz lekérdezése \ n " );
    printf ( " 1.törlés a memóriából \ n " );
    scanf ( " % d " , & select);

  } while (válaszd! = 0 && válaszd! = 1 );

  ha (válaszd == 0 ) {
    vissza = shmctl (shmid, IPC_STAT, buf);
    printf ( " \ n Méret: % ld " , buf-> shm_segsz );
    printf ( " \ n Pid: % d \ n " , buf-> shm_lpid );
  }
  else  if (válaszd == 1 ) {
    vissza = shmctl (shmid, IPC_RMID, NULL );
    printf ( " \ n Megszüntetve a szegment \ n " );
  }

  kilépés ( 0 );
}
