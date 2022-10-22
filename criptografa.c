#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <locale.h>

char * substitue(char letra){
    switch (letra)
    {
    case 'a':
        return "exceto";
    case 'b':
        return "cinico";
    case 'c':
        return "idoneo";
    case 'd':
        return "ambito";
    case 'e':
        return "nescio";
    case 'f':
        return "mister";
    case 'g':
        return "indole";
    case 'h':
        return "vereda";
    case 'i':
        return "apogeu";
    case 'j':
        return "inocuo";
    case 'k':
        return "convem";
    case 'l':
        return "utopia";
    case 'm':
        return "sadico";
    case 'n':
        return "escopo";
    case 'o':
        return "enfase";
    case 'p':
        return "merito";
    case 'q':
        return "alusao";
    case 'r':
        return "casual";
    case 's':
        return "idiota";
    case 't':
        return "anseio";
    case 'u':
        return "hostil";
    case 'v':
        return "cetico";
    case 'w':
        return "pressa";
    case 'x':
        return "hetero";
    case 'y':
        return "legado";
    case 'z':
        return "alheio";
    case 'A':
        return "gentil";
    case 'B':
        return "nocivo";
    case 'C':
        return "infame";
    case 'D':
        return "cliche";
    case 'E':
        return "eximio";
    case 'F':
        return "afavel";
    case 'G':
        return "paixao";
    case 'H':
        return "adorno";
    case 'I':
        return "dadiva";
    case 'J':
        return "sobrio";
    case 'K':
        return "adesao";
    case 'L':
        return "aferir";
    case 'M':
        return "astuto";
    case 'N':
        return "extase";
    case 'O':
        return "larica";
    case 'P':
        return "otario";
    case 'Q':
        return "solene";
    case 'R':
        return "limiar";
    case 'S':
        return "sessao";
    case 'T':
        return "tambem";
    case 'U':
        return "julgar";
    case 'V':
        return "labaro";
    case 'W':
        return "formal";
    case 'X':
        return "apreco";
    case 'Y':
        return "hábito";
    case 'Z':
        return "gloria";
    case ' ':
        return "ensejo";
    case '1':
        return "eficaz";
    case '2':
        return "ocioso";
    case '3':
        return "impeto";
    case '4':
        return "outrem";
    case '5':
        return "embora";
    case '6':
        return "difuso";
    case '7':
        return "jubilo";
    case '8':
        return "alento";
    case '9':
        return "dispor";
    case '!':
        return "faccao";
    case '"':
        return "escusa";
    case '#':
        return "perene";
    case '$':
        return "exilio";
    case '%':
        return "cessao";
    case '&':
        return "abster";
    case '\'':
        return "nuance";
    case '(':
        return "ludico";
    case ')':
        return "alcada";
    case '*':
        return "ilacao";
    case '+':
        return "acento";
    case ',':
        return "objeto";
    case '-':
        return "isento";
    case '.':
        return "acesso";
    case '/':
        return "sancao";
    case ':':
        return "etereo";
    case ';':
        return "tacito";
    case '<':
        return "axioma";
    case '=':
        return "desejo";
    case '>':
        return "cortes";
    case '?':
        return "cobica";
    case '@':
        return "sisudo";
    case '[':
        return "mazela";
    case '\\':
        return "defina";
    case ']':
        return "eximir";
    case '^':
        return "buscar";
    case '_':
        return "receio";
    case '`':
        return "avidez";
    case '{':
        return "remoto";
    case '|':
        return "vulgar";
    case '}':
        return "penhor";
    case '~':
        return "fatico";
    default:
        break;
    }
}

int main(){
    setlocale(LC_ALL, "Portuguese_Brasil");

    struct stat sb;
    if (stat("texto_claro.txt", &sb) == -1) {
        perror("stat");
        exit(EXIT_FAILURE);
    }

    FILE * texto_claro = fopen("texto_claro.txt", "r");
    if(!texto_claro){
        perror("Erro na abertura de arquivo");
        exit(-1);
    }

    FILE * texto_cifrado = fopen("texto_cifrado.txt", "w");
    if(!texto_cifrado){
        perror("Erro na abertura de arquivo");
        exit(-1);
    }

    unsigned char * texto = calloc(1, sb.st_size);
    if(!texto){
        perror("Erro na alocação de memoria");
        exit(-1);
    }
    unsigned char * result = calloc(6, sb.st_size);
    if (!result){
        perror("Erro na alocação de memoria");
        exit(-1);
    }
    
    int i = 0;
    unsigned char c;
    // Lendo o arquivo com o texto claro
    c = fgetc(texto_claro);
    while (!feof(texto_claro)){
        texto[i] = c;
        c = fgetc(texto_claro);
        i++;
    };
    i--;

    int z = i;
    int u = 6 * i;
    int k = 0;
    unsigned char aux;

    // Criptografando
    for (int l = 0; l < i/2+1; l++){
        if((texto[l] < 128 && texto[l] >= 0) && (texto[z] < 128 && texto[z] >= 0)){
            aux = texto[l];
            unsigned char * aux2 = substitue(texto[z]);
            for (int z = 0; z < 6; z++)
                result[k+z] = aux2[z];
        
            aux2 = substitue(aux);
            for (int z = 0; z < 6; z++)
                result[u-5+z] = aux2[z];
        }
        else{
            for (int z = 0; z < 6; z++)
                result[k+z] = texto[l];

            for(int m = 0; m < 6; m++)
                result[u-5+m] = texto[z];
        }   
        k+=6;   
        u-=6;
        z--; 
    }
    
    fprintf(texto_cifrado, "%s\n", result);
}