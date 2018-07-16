#include<stdio.h>
/*
    printing source
*/
void f(){}
int main()
{
/*
    printing source
*/
f();
char *a = "#include<stdio.h>%c/*%c    printing source%c*/%cvoid f(){}%cint main()%c{%c/*%c    printing source%c*/%cf();%cchar *a = %c%s%c;%cprintf(a,10,10,10,10,10,10,10,10,10,10,10,34,a,34,10,10,10);%c}%c";
printf(a,10,10,10,10,10,10,10,10,10,10,10,34,a,34,10,10,10);
}
