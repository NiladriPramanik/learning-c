#include<stdio.h>

float percentage(float eng, float sci ,float hindi ,float maths,float ip );
int main()
{
    float eng=86;
    float sci=80;
    float hindi =82;
    float maths=88;
    float ip=96;
    printf("percentage is :%f",percentage(eng,sci,hindi,maths,ip));

}
float percentage( float eng, float sci, float hindi, float maths, float ip)
{
return ((eng+sci+hindi+maths+ip)/5);
}