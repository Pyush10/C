#include<graphics.h>
int main ()
{
    int gd = DETECT,gm;
    initgraph(&gd,&gm,"  ");
    circle(320,240,100);
    getch();
    closegraph();
    return 0;
}
