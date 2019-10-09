#include <stdio.h>
int main(argc,argv)
int argc;
char *argv[];
{
    FILE *archivo;
    char caracter;
    archivo = fopen (argv[1], "r");
    caracter = 'a'; 
    while ( caracter != EOF)
    {
        caracter = fgetc(archivo) ;
        printf( "%c", caracter);
    }
    fclose(archivo);
    return(0);
 }
