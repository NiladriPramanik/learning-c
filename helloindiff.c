#include<stdio.h>
void namaste();
void bonjour();
void hola();
void gutentag();
void salve();
void asalaamalaikum();
void konnichiwa(); 
void anyounghaseyo();
void zdravstvuyte();
void ninhao();
int main ()
{
int n ;
printf("Enter\nindian=1\nfrench=2\nspanish=3\ngerman=4\nitalian=5\narabic=6\njapanese=7\nkorean=8\nrussian=9\nchinese=0\n");
scanf("%d",&n);
if (n==1)
{
    namaste();
}
else if (n==2)
{
    bonjour();
}
else if (n==3)  
{
    hola();
}
else if (n==4)
{
    gutentag();
}
else if (n==5)
{
    salve();
}
else if (n==6)
{
asalaamalaikum();
}
else if (n==7)
{
    konnichiwa();
}
else if (n==8)
{
    anyounghaseyo();
}
else if (n==9)
{
    zdravstvuyte();
}
else if (n==0)
{
    ninhao();
}
else 
{
    printf(" invalid input");
}
return 0;
}

void namaste()
{
    printf("NAMASTE");
}
void bonjour()
{
    printf("BONJOUR");
}
void hola()
{
    printf("HOLA");
}
void gutentag()
{
    printf("GUTEN TAG");
}
void salve()
{
    printf("SALVE");
}
void asalaamalaikum()
{
    printf("ASALAAM ALAIKUM");
}
void konnichiwa()
{
    printf("KONNI CHIWA");
}
void anyounghaseyo()
{
    printf("ANYOUN GHASEO");
}
void zdravstvuyte()
{
    printf("ZDRAVSTVUYTE");
}
void ninhao()
{
    printf("NIN HAO");
}