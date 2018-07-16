#include <stdio.h>
//com
#define H
#define A "#include <stdio.h>%c//com%c#define H%c#define A %c%s%c%c#define MAIN int main(){printf(A,10,10,10,34,A,34,10,10,10);}%cMAIN%c"
#define MAIN int main(){FILE *f = fopen("Grace_kid.c", "w"); printf(A,10,10,10,34,A,34,10,10,10);}
MAIN
