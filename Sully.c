#include<stdio.h>
#include<stdlib.h>
int main()
{
int i = 5;
char buf[1024];
snprintf(buf, sizeof(buf), "Sully_%d.c", i-1);
FILE *f = fopen(buf,"w");
char *a="#include<stdio.h>%c#include<stdlib.h>%cint main()%c{%cint i = %d;%cchar buf[1024];%csnprintf(buf, sizeof(buf), %cSully_%%d.c%c, i-1);%cFILE *f = fopen(buf,%cw%c);%cchar *a=%c%s%c;%cfprintf(f,a,10,10,10,10,i-1,10,10,34,34,10,34,34,10,34,a,34,10,10,10,34,34,10,10,10,10,34,34,10,10,10);%cfclose(f);%csnprintf(buf, sizeof(buf), %cclang -Wall -Wextra -Werror -o Sully_%%d Sully_%%d.c%c, i-1, i-1);%csystem(buf);%cif (i-1 > 0)%c{%csnprintf(buf, sizeof(buf), %c./Sully_%%d%c, i-1);%csystem(buf);%c}%c}";
fprintf(f,a,10,10,10,10,i-1,10,10,34,34,10,34,34,10,34,a,34,10,10,10,34,34,10,10,10,10,34,34,10,10,10);
fclose(f);
snprintf(buf, sizeof(buf), "clang -Wall -Wextra -Werror -o Sully_%d Sully_%d.c", i-1, i-1);
system(buf);
if (i-1 > 0)
{
snprintf(buf, sizeof(buf), "./Sully_%d", i-1);
system(buf);
}
}