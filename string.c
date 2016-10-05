#include <stdio.h>
#include <string.h>
//Main Functions
int strnLen(char *s[]){
  int c = 0;
  while (s[c] != '\0')
     c++;
  return c;
}
char * strcopy( char *dest, char *source, int n ){
  int i;
    for (i = 0; i < n && source[i] != 0; i++)
      dest[i] = source[i];
    for ( ; i < n; i++)
      dest[i] = 0;
    return dest;
}

char* strcat(char *dest, char *src){
  int len = strnlen(dest);
  int i;
  for (i = 0 ; src[i] != 0 ; i++){
    dest[len + i] = src[i];
  }
  dest[len + i] = 0;
  return dest;
}

int mystrcmp(char *s, char *d){
    int i;

    for (i = 0; s[i] == d[i]; i++)
        if (s[i] == 0)
            return 0;
    return s[i] - d[i];
}

int main(){
  char test1[12]="heloow";
  int len = strnLen(test1);
  printf("%d\n", len);
}
