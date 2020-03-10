/* Data de submissao:
 * Nome:
 * RA:
 */

#include <stdio.h>
const int tam_buffer=100;

int main() {
  char buffer[tam_buffer];
  fgets(buffer, tam_buffer, stdin);
  printf("%s", buffer);
  return 0;
}
