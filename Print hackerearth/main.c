#include <stdio.h>
//hackerearth, hhaackeerrt , hhaaeerrckt
int min1(int x,int y,int z)
{
    if(x<=y&&x<=z)
        return x;
    else if(y<=x&&y<=z)
        return y;
    else
        return z;
}
int min2(int x,int y,int z,int a)
{
    if(x<=y&&x<=z&&x<=a)
        return x;
    else if(y<=x&&y<=z&&y<=a)
        return y;
    else if(z<=a&&z<=x&&z<=y)
        return z;
    else
        return a;
}
int main()
{
    int i,h=0,a=0,c=0,k=0,e=0,r=0,t=0,N,sing,doub;
    char s[1000000];
    scanf("%d",&N);
    scanf("%s",s);
    for(i=0;i<N;i++)
    {
        if(s[i]=='h')
            h++;
        else if(s[i]=='a')
            a++;
        else if(s[i]=='c')
            c++;
        else if(s[i]=='k')
            k++;
        else if(s[i]=='e')
            e++;
        else if(s[i]=='r')
            r++;
        else if(s[i]=='t')
            t++;
    }
    sing=min1(c,k,t);
    doub=min2(h,a,e,r);
    if(doub<=1||sing==0)
        printf("0");
    else if(sing>=doub||(doub>sing&&doub<2*sing))
    {
            printf("%d",doub/2);
    }

    else if(doub>=2*sing)
        printf("%d",sing);
    return 0;
}
