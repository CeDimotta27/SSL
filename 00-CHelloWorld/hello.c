# include <stdio.h>

// Dimotta, Cecilia L.

int main ()
{
    char saludo[] = "hello, world"; 
    printf(saludo); 

    FILE *fp;
    fp = fopen("output.txt", "w");
    fprintf(fp, saludo);
    fclose(fp);

    return 0;
}