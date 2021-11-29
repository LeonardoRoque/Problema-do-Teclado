#include <stdio.h>
#include <stdlib.h>

//A entrada consiste de várias linhas de texto. Cada linha pode conter dígitos, espaços, letras maiúsculas (exceto "Q", "A", "Z"), ou pontuação indicada acima [exceto volta aspas (')]. Teclas rotuladas com palavras [Tab, BackSp, Controle, etc] não são representadas na entrada.

#define tamanhoMaxDaFrase 200

char trocarLetras(char letra);

int main()
{
  char frase[tamanhoMaxDaFrase];
  int i;

  printf("\nDigite sua frase codificada:\t");
  fgets(frase,tamanhoMaxDaFrase, stdin);

  i=0;
  while(frase[i]!= '\0')

  {
    frase[i]=trocarLetras(frase[i]);
    i++;
  }

printf("\nSua frase decodificada é: %s", frase);

printf("\n\n");
return 0;
}

char trocarLetras(char letra)
{
  char novaLetra;

  switch (letra)
  {
    case '[':
      novaLetra = 'P';
      break;
    case 'P':
      novaLetra  = 'O';
      break;
    case 'O':
      novaLetra  = 'I';
      break;
    case 'I':
      novaLetra  = 'U';
      break;
    case 'U':
      novaLetra = 'Y';
      break;
    case 'Y':
      novaLetra  = 'T';
      break;
    case 'T':
      novaLetra  = 'R';
      break;
    case 'R':
      novaLetra  = 'E';
      break;
    case 'E':
      novaLetra = 'W';
      break;
    case 'W':
      novaLetra  = 'Q';
      break;
    case 'L':
      novaLetra  = 'K';
      break;
    case 'K':
      novaLetra  = 'J';
      break;
    case 'J':
      novaLetra = 'H';
      break;
    case 'H':
      novaLetra  = 'G';
      break;
    case 'G':
      novaLetra  = 'F';
      break;
    case 'F':
      novaLetra  = 'D';
      break;
    case 'D':
      novaLetra = 'S';
      break;
    case 'S':
      novaLetra  = 'A';
      break;
    case '/':
      novaLetra  = '.';
      break;
    case '.':
      novaLetra  = ',';
      break;
    case ',':
      novaLetra = 'M';
      break;
    case 'M':
      novaLetra  = 'N';
      break;
    case 'N':
      novaLetra  = 'B';
      break;
    case 'B':
      novaLetra  = 'V';
      break;
    case 'V':
      novaLetra  = 'C';
      break;
    case 'C':
      novaLetra  = 'X';
      break;
    case 'X':
      novaLetra = 'Z';
      break;
    case '-':
      novaLetra = '0';
      break;
    case '0':
      novaLetra  = '9';
      break;
    case '9':
      novaLetra  = '8';
      break;
    case '8':
      novaLetra  = '7';
      break;
    case '7':
      novaLetra = '6';
      break;
    case '6':
      novaLetra  = '5';
      break;
    case '5':
      novaLetra  = '4';
      break;
    case '4':
      novaLetra  = '3';
      break;
    case '3':
      novaLetra = '2';
      break;
    case '2':
      novaLetra  = '1';
      break;
    case ']':
      novaLetra  = 'l';
      break;
  

  default:
  novaLetra = letra;      
  }
  return novaLetra;
}
