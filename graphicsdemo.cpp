//**********HEADER FILES USED********** 
#include<iostream.h> 
#include<stdlib.h>
#include<conio.h> 
#include<process.h> 
#include<graphics.h> 
#include<dos.h>
//********MAIN function starts********** 
void main() { 
//start screen 
int gd=DETECT,gm; 
initgraph(&gd,&gm,"c://turboc3//bgi");  //for initializing graphics screen
 setcolor(RED);                         //for setting text color
 settextstyle(7,0,5); moveto(0,10);
 outtext("-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
 moveto(0,30);
 outtext("-----------------------------------------");
 moveto(0,100); setcolor(YELLOW);
 outtext("program developor detail:-");
 moveto(60,150);
 outtext("name:   uvaish zafri");
 moveto(120,200);
 outtext("class:  12th B");
 moveto(60,250);
 outtext("subject:   computer");
 settextstyle(7,0,4);
 moveto(0,300);
 outtext("email_id: uvaishzafri1705@gmail.com");
 settextstyle(7,0,5);
 setcolor(RED);
 moveto(0,340);
 outtext("-------------------------------------------");
 moveto(30,390);
 setcolor(GREEN);
 outtext("press any key to proceed....");
 moveto(0,440);
 setcolor(RED);
 outtext("-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
 getch();
 closegraph();
 //**|**|**|**|**|**|**|**|**|*for displaying options**|**|**|**|**|**|**|**|**
 initgraph(&gd,&gm,"c://turboc3//bgi");
 settextstyle(7,0,5);
 setcolor(RED);
 moveto(80,80);

outtext("graphics options:-");
 moveto(80,140);
 outtext("1.graphics demo");
 moveto(80,200);
 outtext("2.use graphics");
 moveto(80,260);
 outtext("3.exit");
 settextstyle(7,0,4);
 setcolor(YELLOW);
 moveto(0,350);
 outtext("press any key to enter your CHOICE....");
 int i=getch()-48;
       //for taking user choice closegraph();
 //-*-*-*-*-*-*-*-*condition when user wants to exit*-*-*-*-*-*-*-*-*-*-*-*-*
 if((i<1)||(i>2))
 { 
 initgraph(&gd,&gm,"c://turboc3//bgi");
  settextstyle(7,0,5);
  setcolor(GREEN);
  moveto(0,180);
  outtext("thank you for waching");
  moveto(0,280);
  outtext("press any key to EXIT....");
  getch();
                     //for exit after the hitting of key 
  closegraph();
 }
 //-*-*-*-*-*-*-*-*-*-condition when user wants to see examples*-*-*-*-*-*-
else if(i==1)
 {
   //************************arc demonstration*************************** 
    int gd=DETECT,gm;
     initgraph(&gd,&gm,"c://turboc3//bgi");
     settextstyle(7,0,5);
     setcolor(GREEN);
     moveto(0,180); 
    outtext("arc demonstration"); 
    moveto(6,280);
     outtext("press any key to proceed....");
     getch();
     closegraph();
     initgraph(&gd,&gm,"c://turboc3//bgi");
     int x,y,radius,sangle,eangle,color;
    //different parameters of arc funtion and setcolor
     while(!kbhit())
     {   
   x=random(640);y=random(480);  
    radius=random(60);eangle=random(360);
      sangle=random(eangle);
       color=random(15);
        setcolor(color);
      arc(x,y,sangle,eangle,radius);
       //calling of arc function 
     delay(200);                           //for dlaying the process  
   } 
     getch();
                       //for exiting after a key is pressed
      closegraph();
 //********************circle demonstration**************************
     initgraph(&gd,&gm,"c://turboc3//bgi");
     settextstyle(7,0,5);
     setcolor(GREEN);
     moveto(0,180);
     outtext("circle demonstration"); 
    moveto(6,280);
     outtext("press any key to proceed....");
     getch();
     closegraph();
     initgraph(&gd,&gm,"c://turboc3//bgi");
     int x2,y2,radius2,color2;
    //different parameters of circle function
     while(!kbhit())
     { 
     x2=random(640);
y2=random(480);
      radius2=random(60);
color2=random(15);
      setcolor(color2);
      circle(x2,y2,radius2);
 delay(200);       //calling of circle function
     }
     getch();
     closegraph();
 //****************************bar demonstration************************
     initgraph(&gd,&gm,"c://turboc3//bgi");
     settextstyle(7,0,5);
     setcolor(GREEN);
     moveto(0,180);
     outtext("bar demonstration");
     moveto(6,280);
     outtext("press any key to proceed....");
     getch();
     closegraph();
     initgraph(&gd,&gm,"c://turboc3//bgi");
     int left,right,top,bottom,pattern,color3;    //parameters of bar function
     while(!kbhit())
     {
      right=random(640);
left=random(right);
 pattern=random(15);
      bottom=random(480)
;top=random(bottom);
 color3=random(15);
      bar(left,top,right,bottom);
        //calling of bar function
      setfillstyle(pattern,color3);
 delay(200);
     } 
    getch();
     closegraph(); 
 //**************************bar3d demonstration************************** 
    initgraph(&gd,&gm,"c://turboc3//bgi");
     settextstyle(7,0,5);
     setcolor(GREEN);
     moveto(0,180);
     outtext("bar3d demonstration");
     moveto(6,280);
     outtext("press any key to proceed....");
     getch();
     closegraph();
     initgraph(&gd,&gm,"c://turboc3//bgi");
     int left2,right2,top2,bottom2,depth,topflag,color4,pattern2;
     while(!kbhit())
     { 
        right2=random(640);left2=random(right2);   //parameters of bar3d function
      bottom2=random(480); top2=random(bottom2); 
     depth=random(60);topflag=random(200);
      color4=random(15);pattern2=random(15);      setfillstyle(pattern2,color4);
      bar3d(left2,top2,right2,bottom2,topflag,depth);  //calling of function
      delay(200);
     }
     getch();
     closegraph();
 //*************************pie slice demonstration************************ 
    initgraph(&gd,&gm,"c://turboc3//bgi");
     settextstyle(7,0,5);
     setcolor(GREEN);
     moveto(0,180);
     outtext("pieslice demonstration");
     moveto(6,280);
     outtext("press any key to proceed....");
     getch();
     closegraph();
     initgraph(&gd,&gm,"c://turboc3//bgi");
     int sangle2,eangle2,x3,y3,radius3; //parameters of pie_slice function
     int pattern3,color5;
     while(!kbhit())
     {
      eangle2=random(360);
       sangle=random(eangle);
          x3=random(640);
      y3=random(480);
    pattern3=random(15);
    color5=random(15);
    radius3=random(60);
      setfillstyle(pattern3,color5);
      pieslice(x3,y3,sangle2,eangle2,radius3);   //calling pie_slice function
      delay(200);
     }
     getch();
     closegraph();
 //*********************text_style demonstration**************************** 
     initgraph(&gd,&gm,"c://turboc3//bgi");
     settextstyle(7,0,5);
     setcolor(GREEN);
     moveto(0,180);
     outtext("text_style demonstration");
     moveto(6,280);
     outtext("press any key to proceed....");
     getch();
     closegraph();
     initgraph(&gd,&gm,"c://turboc3//bgi");
     int a,b,x6,y6;
     while(!kbhit())
     {
      a=random(15);b=random(7);        //parameters of the function
      x6=random(500);y6=random(400);
      setfillstyle(random(15),random(15));
      setcolor(random(1500));
      settextstyle(a,0,b);               //calling settextstyle function
      moveto(x6,y6);
      outtext("keep watching");
 delay(500);
     }
     getch();
     closegraph();
}
}

