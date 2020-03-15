
/* Data de submissao: 15 de Marco de 2020
 * Nome:Vinicius Hirono Goncalves
 * RA: 188182
 */

#include <stdio.h>
const int tam_buffer=100;

int main() {
 char buffer[tam_buffer];
  fgets(buffer, tam_buffer, stdin);






int percorreBuffer = 0;
int percorrePalavra = 0;
int atualizaBuffer = 0;
int invertePalavra = 0;
char palavra[tam_buffer];





while (buffer[percorreBuffer] != '\n'){


//indo ate primeira palavra-----------------------
while (buffer[percorreBuffer] == ' '){
  percorreBuffer++;
}





percorrePalavra = 0;
//capturando a palavra---------------------------
while (buffer[percorreBuffer]!= ' ' && buffer[percorreBuffer]!= '\n'){
  palavra[percorrePalavra] = buffer[percorreBuffer];

  percorrePalavra++;
  percorreBuffer++;
}



//invertendo palavra no buffer----------------------
invertePalavra = 0;
atualizaBuffer = percorreBuffer - 1;



percorrePalavra = percorrePalavra - 1;


while(invertePalavra != percorrePalavra +1){

buffer[atualizaBuffer] = palavra[invertePalavra];
invertePalavra++;
atualizaBuffer = atualizaBuffer - 1;
}



}



//printf("%s", palavra);

//printf("buffer:");


  printf("%s", buffer);
  return 0;
}
