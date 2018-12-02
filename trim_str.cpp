#include "trim.h"

int main(int argc, char *argv[]) {
  char new_string[512];
  char old_string[512];

  strcpy(old_string, "\0");
  for (int i = 1; i < argc; i++) {
    printf("%s\n",argv[i]);
    strcat(old_string, argv[i]);
  }


  trim(old_string, new_string);
  printf("%s\n", new_string);

  return 0;
}
