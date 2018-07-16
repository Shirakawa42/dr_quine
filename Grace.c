#include <stdio.h>
/*
    printing source
*/
#define H
#define A "#include <stdio.h>%c/*%c    printing source%c*/%c#define H%c#define A %c%s%c%c#define FT(x) int main(){FILE *f=fopen(%cGrace_kid.c%c,%cw%c);fprintf(f,A,10,10,10,10,10,34,A,34,10,34,34,34,34,10,10);fclose(f);}%cFT(0)%c"
#define FT(x) int main(){FILE *f=fopen("Grace_kid.c","w");fprintf(f,A,10,10,10,10,10,34,A,34,10,34,34,34,34,10,10);fclose(f);}
FT(0)
