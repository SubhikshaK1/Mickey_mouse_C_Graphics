#include <graphics.h>
#include <conio.h>
void main()
{
 int gdrive = DETECT, gmode;
 initgraph(&gdrive,&gmode,"C:\\Turboc3\\BGI");
 settextstyle(EUROPEAN_FONT,HORIZ_DIR,2);
 outtextxy(20,0,"C PROJECT");
 settextstyle(SCRIPT_FONT,HORIZ_DIR,3);//text styles
 outtextxy(100,250,"MICKEY MOUSE");

 arc(100,100,3,282,45);//left ear
 arc(250,100,240,181,45);//right ear

 arc(169,151,285,255,60);//face outline circle

 ellipse(155,135,20,220,18,30);//face inside left curve
 ellipse(190,135,320,160,18,30);//face inside right curve
 ellipse(163,140,0,360,5,12);//right eye
 ellipse(181,140,0,360,5,12);//left eye
 setfillstyle(SOLID_FILL,15);
 fillellipse(165,146,2,4);//color filled right eye ball
 fillellipse(179,146,2,4);//color filled left eye ball
 arc(172,170,45,135,20);//nose arc
 setfillstyle(SOLID_FILL,0);
 fillellipse(172,165,15,7);//nose
 arc(125,156,0,180,15);// right checks
 arc(217,156,0,180,12);// left checks
 ellipse(145,170,0,180,5,2);//smile left curve
 ellipse(175,168,180,360,30,18);//smile center curve
 ellipse(205,170,0,180,5,2);//smile right curve
 arc(172,185,172,360,18);//mouth arc
 arc(169,205,180,360,15);
 setfillstyle(SOLID_FILL,RED);
 arc(165,197,360,180,6);//tounge 1st arc
 arc(178,197,360,178,6);//tounge 2nd arc
 floodfill(165,197,WHITE);
 floodfill(178,197,WHITE);
 rectangle(50,50,300,230);
 rectangle(120,250,230,230);


 setfillstyle(SOLID_FILL,BLACK);
 floodfill(250,100,WHITE); //right ear color

 setfillstyle(SOLID_FILL,BLACK);
 floodfill(100,100,WHITE); //left ear

 setfillstyle(SOLID_FILL,BLACK);
 floodfill(150,100,WHITE);  //fore head color

 setfillstyle(SOLID_FILL,12);
 floodfill(217,156,WHITE);   //face color
//setbkcolor(7);//background color

 //Diffrent style of line and the graphics screen  dimensions
 setlinestyle(1,0,2);//DOTTED LINE
 line(0,0,639,0);
 setlinestyle(2,0,2);//CENTERED LINE
 line(0,0,0,479);
 setlinestyle(3,0,2); //DASHED LINE
 line(0,479,639,479);
 setlinestyle(0,0,2);//SOLID LINE
 line(639,0,639,479);

 setcolor(12);//colour the shape outline
 setfillstyle(SOLID_FILL,9);
 bar3d(300,300,350,350,5,2);//bar3d

 setfillstyle(SOLID_FILL,10);
 pieslice(550,450,10,80,30);//pieslice


 getch();
 closegraph();
}
