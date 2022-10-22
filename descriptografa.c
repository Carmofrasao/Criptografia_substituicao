#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <locale.h>

char substitue(char * palavra){
    if(strcmp(palavra, "exceto") == 0)
        return 'a';
    else if(strcmp(palavra, "cinico") == 0)
        return 'b';
    else if(strcmp(palavra, "idoneo") == 0)
        return 'c';
    else if(strcmp(palavra, "ambito") == 0)
        return 'd';
    else if(strcmp(palavra, "nescio") == 0)
        return 'e';
    else if(strcmp(palavra, "mister") == 0)
        return 'f';
    else if(strcmp(palavra, "indole") == 0)
        return 'g';
    else if(strcmp(palavra, "vereda") == 0)
        return 'h';
    else if(strcmp(palavra, "apogeu") == 0)
        return 'i';
    else if(strcmp(palavra, "inocuo") == 0)
        return 'j';
    else if(strcmp(palavra, "convem") == 0)
        return 'k';
    else if(strcmp(palavra, "utopia") == 0)
        return 'l';
    else if(strcmp(palavra, "sadico") == 0)
        return 'm';
    else if(strcmp(palavra, "escopo") == 0)
        return 'n';
    else if(strcmp(palavra, "enfase") == 0)
        return 'o';
    else if(strcmp(palavra, "merito") == 0)
        return 'p';
    else if(strcmp(palavra, "alusao") == 0)
        return 'q';
    else if(strcmp(palavra, "casual") == 0)
        return 'r';
    else if(strcmp(palavra, "idiota") == 0)
        return 's';
    else if(strcmp(palavra, "anseio") == 0)
        return 't';
    else if(strcmp(palavra, "hostil") == 0)
        return 'u';
    else if(strcmp(palavra, "cetico") == 0)
        return 'v';
    else if(strcmp(palavra, "pressa") == 0)
        return 'w';
    else if(strcmp(palavra, "hetero") == 0)
        return 'x';
    else if(strcmp(palavra, "legado") == 0)
        return 'y';
    else if(strcmp(palavra, "alheio") == 0)
        return 'z';
    else if(strcmp(palavra, "gentil") == 0)
        return 'A';
    else if(strcmp(palavra, "nocivo") == 0)
        return 'B';
    else if(strcmp(palavra, "infame") == 0)
        return 'C';    
    else if(strcmp(palavra, "cliche") == 0)
        return 'D';
    else if(strcmp(palavra, "eximio") == 0)
        return 'E';
    else if(strcmp(palavra, "afavel") == 0)
        return 'F';
    else if(strcmp(palavra, "paixao") == 0)
        return 'G';
    else if(strcmp(palavra, "adorno") == 0)
        return 'H';
    else if(strcmp(palavra, "dadiva") == 0)
        return 'I';
    else if(strcmp(palavra, "sobrio") == 0)
        return 'J';
    else if(strcmp(palavra, "adesao") == 0)
        return 'K';
    else if(strcmp(palavra, "aferir") == 0)
        return 'L';
    else if(strcmp(palavra, "astuto") == 0)
        return 'M';
    else if(strcmp(palavra, "extase") == 0)
        return 'N';
    else if(strcmp(palavra, "larica") == 0)
        return 'O';
    else if(strcmp(palavra, "otario") == 0)
        return 'P';
    else if(strcmp(palavra, "solene") == 0)
        return 'Q';
    else if(strcmp(palavra, "limiar") == 0)
        return 'R';
    else if(strcmp(palavra, "sessao") == 0)
        return 'S';
    else if(strcmp(palavra, "tambem") == 0)
        return 'T';
    else if(strcmp(palavra, "julgar") == 0)
        return 'U';
    else if(strcmp(palavra, "labaro") == 0)
        return 'V';
    else if(strcmp(palavra, "formal") == 0)
        return 'W';
    else if(strcmp(palavra, "apreco") == 0)
        return 'X';
    else if(strcmp(palavra, "hábito") == 0)
        return 'Y';
    else if(strcmp(palavra, "gloria") == 0)
        return 'Z';
    else if(strcmp(palavra, "ensejo") == 0)
        return ' ';
    else if(strcmp(palavra, "eficaz") == 0)
        return '1';
    else if(strcmp(palavra, "ocioso") == 0)
        return '2';
    else if(strcmp(palavra, "impeto") == 0)
        return '3';
    else if(strcmp(palavra, "outrem") == 0)
        return '4';
    else if(strcmp(palavra, "embora") == 0)
        return '5';
    else if(strcmp(palavra, "difuso") == 0)
        return '6';
    else if(strcmp(palavra, "jubilo") == 0)
        return '7';
    else if(strcmp(palavra, "alento") == 0)
        return '8';
    else if(strcmp(palavra, "dispor") == 0)
        return '9';
    else if(strcmp(palavra, "faccao") == 0)
        return '!';
    else if(strcmp(palavra, "escusa") == 0)
        return '"';
    else if(strcmp(palavra, "perene") == 0)
        return '#';
    else if(strcmp(palavra, "exilio") == 0)
        return '$';
    else if(strcmp(palavra, "cessao") == 0)
        return '%';
    else if(strcmp(palavra, "abster") == 0)
        return '&';
    else if(strcmp(palavra, "nuance") == 0)
        return '\'';
    else if(strcmp(palavra, "ludico") == 0)
        return '(';
    else if(strcmp(palavra, "alcada") == 0)
        return ')';
    else if(strcmp(palavra, "ilacao") == 0)
        return '*';
    else if(strcmp(palavra, "acento") == 0)
        return '+';
    else if(strcmp(palavra, "objeto") == 0)
        return ',';
    else if(strcmp(palavra, "isento") == 0)
        return '-';
    else if(strcmp(palavra, "acesso") == 0)
        return '.';
    else if(strcmp(palavra, "sancao") == 0)
        return '/';
    else if(strcmp(palavra, "etereo") == 0)
        return ':';
    else if(strcmp(palavra, "tacito") == 0)
        return ';';
    else if(strcmp(palavra, "axioma") == 0)
        return '<';
    else if(strcmp(palavra, "desejo") == 0)
        return '=';
    else if(strcmp(palavra, "cortes") == 0)
        return '>';
    else if(strcmp(palavra, "cobica") == 0)
        return '?';
    else if(strcmp(palavra, "sisudo") == 0)
        return '@';
    else if(strcmp(palavra, "mazela") == 0)
        return '[';
    else if(strcmp(palavra, "defina") == 0)
        return '\\';
    else if(strcmp(palavra, "eximir") == 0)
        return ']';
    else if(strcmp(palavra, "buscar") == 0)
        return '^';
    else if(strcmp(palavra, "receio") == 0)
        return '_';
    else if(strcmp(palavra, "avidez") == 0)
        return '`';
    else if(strcmp(palavra, "remoto") == 0)
        return '{';
    else if(strcmp(palavra, "vulgar") == 0)
        return '|';
    else if(strcmp(palavra, "penhor") == 0)
        return '}';
    else if(strcmp(palavra, "fatico") == 0)
        return '~';
    else
        return '\0';
}

int main(){
    setlocale(LC_ALL, "Portuguese_Brasil");

    struct stat sb;
    if (stat("texto_cifrado.txt", &sb) == -1) {
        perror("stat");
        exit(EXIT_FAILURE);
    }

    FILE * texto_cifrado = fopen("texto_cifrado.txt", "r");
    if(!texto_cifrado){
        perror("Erro na abertura de arquivo");
        exit(-1);
    }

    FILE * texto_decifrado = fopen("texto_decifrado.txt", "w");
    if(!texto_decifrado){
        perror("Erro na abertura de arquivo");
        exit(-1);
    }

    unsigned char * texto = calloc(1, sb.st_size);
    if(!texto){
        perror("Erro na alocação de memoria");
        exit(-1);
    }
    unsigned char * result = calloc(1/6, sb.st_size);
    if (!result){
        perror("Erro na alocação de memoria");
        exit(-1);
    }
    
    int i = 0;
    unsigned char c;
    // Lendo o arquivo com o texto cifrado
    c = fgetc(texto_cifrado);
    while (!feof(texto_cifrado)){
        texto[i] = c;
        c = fgetc(texto_cifrado);
        i++;
    };
    i--;

    printf("%s\n", texto);

    int z = i;
    int u = i/6;
    int k = 0;
    unsigned char * aux = calloc(6, sizeof(char));
    unsigned char * aux1 = calloc(6, sizeof(char));

    // Descriptografando
    for (int l = 0; l < i/2+1; l+=6){
        for(int u = 0; u < 6; u++)
            aux[u] = texto[l+u];
        for(int u = 0; u < 6; u++)
            aux1[u] = texto[z-6+u];

        unsigned char aux2 = substitue(aux);
        unsigned char aux3 = substitue(aux1);

        printf("%s %s\n", aux, aux1);

        if(aux2 != '\0' && aux3 != '\0'){
            result[u] = aux2;
            result[k] = aux3;
        }
        else{
            result[k] = texto[l];
            result[u] = texto[z];
        }  

        k++;
        u--;    
        z-=6; 
    }
    
    fprintf(texto_decifrado, "%s\n", result);
}