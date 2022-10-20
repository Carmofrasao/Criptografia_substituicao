#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

int main(){
    struct stat sb;

    if (stat("texto.txt", &sb) == -1) {
        perror("stat");
        exit(EXIT_FAILURE);
    }
    FILE *text;
    text = fopen("texto.txt", "r");
    char * texto = calloc(1, sb.st_size);
    int i = 0;
    char c;
    c = fgetc(text);
    while (c != EOF){
        texto[i] = c;
        c = fgetc(text);
        i++;
    };
    i--;
    int z = i;
    char aux;
    for (int l = 0; l < i/2; l++){
        aux = texto[l];
        texto[l] = texto[z];
        texto[z] = aux;
        z--; 
    }
    

    printf("%s\n", texto);
}