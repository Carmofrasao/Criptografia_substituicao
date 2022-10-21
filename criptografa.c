#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

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
    struct stat sb;

    if (stat("texto.txt", &sb) == -1) {
        perror("stat");
        exit(EXIT_FAILURE);
    }
    FILE *text;
    text = fopen("texto.txt", "r");
    unsigned char * texto = calloc(1, sb.st_size);
    unsigned char * result = calloc(6, sb.st_size);
    int i = 0;
    unsigned char c;
    c = fgetc(text);
    while (!feof(text)){
        texto[i] = c;
        c = fgetc(text);
        i++;
    };
    i--;
    int z = i;
    int u = 6 * i;
    int k = 0;
    unsigned char aux;
    printf("%s\n", texto);

    for (int l = 0; l < i/2; l++){
        if((texto[l] < 128 && texto[l] >= 0) && (texto[z] < 128 && texto[z] >= 0)){
            aux = texto[l];
            unsigned char * aux2 = substitue(texto[z]);
            for (int z = 0; z < 6; z++)
                result[k+z] = aux2[z];
            k+=6;
            aux2 = substitue(aux);
            for (int z = 0; z < 6; z++)
                result[u-5+z] = aux2[z];
            
            u-=6;
        }
        else{
            for (int z = 0; z < 6; z++)
                result[k+z] = texto[l];
            k+=6;
            for(int z = 0; z < 6; z++)
                result[u-5+z] = texto[z];
            u-=6;
        }      
        z--; 
    }
    

    printf("%s\n", result);
}