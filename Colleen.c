#include<stdio.h>
//com
void f(){}
int main()
{
//com
f();
char *a = "#include<stdio.h>%c//com%cvoid f(){}%cint main()%c{%c//com%cf();%cchar *a = %c%s%c;%cprintf(a,10,10,10,10,10,10,10,34,a,34,10,10,10);%c}%c";
printf(a,10,10,10,10,10,10,10,34,a,34,10,10,10);
}
