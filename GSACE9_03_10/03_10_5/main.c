#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys / type.h>
#include <sys / wait.h>

int main ()
{
    int helyzet;
    pid_t valtozo;
    ha (((valtozo = villa ()) == - 1)
    perror ("Hiba");


    else if ((helyzet = execl ("/ bin / ls,", "- la", NULL)) <0)
           perror ("rendszer () hiba");

              ha [WIFEXITED (helyzet)]

             {
             printf ("Befejez�d�s, visszakapott �rt�k =% d \ n", WEXITSTATUS (helyzet));
          }

    ha (((valtozo = villa ()) == - 1)
        perror ("Hibaa");

    else if ((helyzet = rendszer ("k�rte")) <0)
        perror ("rendszer () hiba");

            ha [WIFEXITED (helyzet)]
    {

printf ("Nem norm�lis v�gz�d�s, visszat�r� �rt�k =% d \ n", WEXITSTATUS (helyzet));
    }


    m�s{
        waitpid (valtozo, 0,0);


        printf ("\ n gyermek processz befejezte a fut�st! \ n");

    }


    visszat�r 0;
}
