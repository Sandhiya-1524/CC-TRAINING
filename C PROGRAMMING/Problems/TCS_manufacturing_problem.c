# include <stdio.h>
int main()
{
    int v,w;
    scanf("%d%d" , &v,&w);
    int tw = ((4*v)-w)/2;

    int fw = v-tw;
    printf("tw:%d\nfw:%d" , tw,fw);
}


// INPUT : V = 200, W = 540
// OUTPUT : tw = 130,fw = 70