#include <stdio.h>
//com
#define H
#define A "#include <stdio.h>%c//com%c#define H%c#define A %c%s%c%c#define MAIN int main(){FILE *f=fopen(%cGrace_kid.c%c,%cw%c);fprintf(f,A,10,10,10,34,A,34,10,34,34,34,34,10,10);fclose(f);}%cMAIN%c"
#define MAIN int main(){FILE *f=fopen("Grace_kid.c","w");fprintf(f,A,10,10,10,34,A,34,10,34,34,34,34,10,10);fclose(f);}
MAIN
