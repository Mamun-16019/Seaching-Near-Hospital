#include<bits/stdc++.h>
#include<stdio.h>
#include<math.h>
#include<graphics.h>

FILE *f;

char ch,l1[1100],l2[1100],l3[1100],l4[1100],l5[1100],l6[1100],l7[1100],l8[1100];
int hx1=0,hy1=0,hx2=0,hy2=0,hx3=0,hy3=0,hx4=0,hy4=0;
float a,b,c,d;

void Hospital_1()

{

    f=fopen("Hospital1.txt","r");

    fscanf(f,"%s",l1);
    fscanf(f,"%s",l2);
    fscanf(f,"%s",l3);
    fscanf(f,"%s",l4);
    fscanf(f,"%s",l5);
    fscanf(f,"%s",l6);
    fscanf(f,"%s",l7);
    fscanf(f,"%s",l8);


    cleardevice();


    settextstyle(1,0,1);
    setbkcolor(2);
    setcolor(WHITE);
    outtextxy(10,10,l1);
    outtextxy(10,30,l2);
    outtextxy(10,50,l3);
    outtextxy(10,70,l4);
    outtextxy(10,90,l5);
    outtextxy(10,110,l6);
    outtextxy(10,90,l7);
    outtextxy(10,110,l8);

    getch();

}


void Hospital_2()

{

    f=fopen("Hospital2.txt","r");
    fscanf(f,"%s",l1);
    fscanf(f,"%s",l2);
    fscanf(f,"%s",l3);
    fscanf(f,"%s",l4);
    fscanf(f,"%s",l5);
    fscanf(f,"%s",l6);
    fscanf(f,"%s",l7);
    fscanf(f,"%s",l8);

    cleardevice();
    setfillstyle(1,2);

    settextstyle(1,0,3);
    setbkcolor(2);
    setcolor(WHITE);
    outtextxy(10,10,l1);
    outtextxy(10,30,l2);
    outtextxy(10,50,l3);
    outtextxy(10,70,l4);
    outtextxy(10,90,l5);
    outtextxy(10,110,l6);

    outtextxy(10,90,l7);
    outtextxy(10,110,l8);
    getch();
}


void Hospital_3()

{

    f=fopen("Hospital3.txt","r");
    fscanf(f,"%s",l1);
    fscanf(f,"%s",l2);
    fscanf(f,"%s",l3);
    fscanf(f,"%s",l4);
    fscanf(f,"%s",l5);
    fscanf(f,"%s",l6);
    fscanf(f,"%s",l7);
    fscanf(f,"%s",l8);

    cleardevice();
    setfillstyle(1,3);

    settextstyle(1,0,3);
    setcolor(WHITE);
    outtextxy(10,10,l1);
    outtextxy(10,30,l2);
    outtextxy(10,50,l3);
    outtextxy(10,70,l4);
    outtextxy(10,90,l5);
    outtextxy(10,110,l6);
    outtextxy(10,90,l7);
    outtextxy(10,110,l8);

    getch();

}

void Hospital_4()

{

    f=fopen("Hospital4.txt","r");
    fscanf(f,"%s",l1);
    fscanf(f,"%s",l2);
    fscanf(f,"%s",l3);
    fscanf(f,"%s",l4);
    fscanf(f,"%s",l5);
    fscanf(f,"%s",l6);
    fscanf(f,"%s",l7);
    fscanf(f,"%s",l8);

    cleardevice();
    setfillstyle(1,2);

    settextstyle(1,0,1);
    setbkcolor(2);
    setcolor(WHITE);
    outtextxy(10,10,l1);
    outtextxy(10,30,l2);
    outtextxy(10,50,l3);
    outtextxy(10,70,l4);
    outtextxy(10,90,l5);
    outtextxy(10,110,l6);
    outtextxy(10,90,l7);
    outtextxy(10,110,l8);

    getch();

}


int main()

{

    initwindow(1366,768);

    setfillstyle(1,GREEN);
    bar(0,0,1366,768);
    setbkcolor(GREEN);
    settextstyle(1,0,5);
    outtextxy(425,200,"WELCOME TO ");
    outtextxy(300,300,"Searching Medical Center ");

    getch();


    hx1 = 100 +(rand()%483);
    hy1 = 100 +(rand()%184);

    hx2 = 683 +(rand()%483);
    hy2 = 100 +(rand()%184);

    hx3 = 100 +(rand()%483);
    hy3 = 484 +(rand()%184);

    hx4 = 683 +(rand()%483);
    hy4 = 484 +(rand()%184);



    while(true)
    {

        setfillstyle(1,GREEN);
        bar(0,0,1366,768);

        int mx=mousex();
        int my=mousey();

        char pointer[20];
        sprintf(pointer," %d , %d",mx,my);
        setcolor(WHITE);
        outtextxy(mx,my,pointer);

        if(ismouseclick(WM_LBUTTONDOWN))

        {

            a=sqrt((mx-hx1)*(mx-hx1)+(my-hy1)*(my-hy1));
            b=sqrt((mx-hx2)*(mx-hx2)+(my-hy2)*(my-hy2));
            c=sqrt((mx-hx3)*(mx-hx3)+(my-hy3)*(my-hy3));
            d=sqrt((mx-hx4)*(mx-hx4)+(my-hy4)*(my-hy4));


            if(a<b && a<c && a<d)
            {

                Hospital_1();

            }

            else if(b<a && b<c && b<d)
            {

                Hospital_2();

            }

            else if(c<a && c<b && c<d)
            {

                Hospital_3();

            }

            else
                Hospital_4();


            clearmouseclick(WM_LBUTTONDOWN);

            hx1 = 100 +(rand()%483);
            hy1 = 100 +(rand()%184);

            hx2 = 683 +(rand()%483);
            hy2 = 100 +(rand()%184);

            hx3 = 100 +(rand()%483);
            hy3 = 484 +(rand()%184);

            hx4 = 683 +(rand()%483);
            hy4 = 484 +(rand()%184);


        }




//Building_1();
        setcolor(13);
        rectangle(hx1-50,hy1-50,hx1+50,hy1+50);
        rectangle(hx1-60,hy1-70,hx1+60,hy1-50);
        rectangle(hx1-40,hy1-80,hx1+40,hy1-70);
        rectangle(hx1-60,hy1+50,hx1+60,hy1+60);
        rectangle(hx1-30,hy1+20,hx1+30,hy1+50);
        rectangle(hx1-30,hy1-20,hx1+30,hy1-0);
        settextstyle(1,0,16);
        outtextxy(hx1-35,hy1-67,"HOSPITAL");




//Building_2
        setcolor(15);
        rectangle(hx2-50,hy2-50,hx2+50,hy2+50);
        rectangle(hx2-60,hy2-70,hx2+60,hy2-50);
        rectangle(hx2-40,hy2-80,hx2+40,hy2-70);
        rectangle(hx2-60,hy2+50,hx2+60,hy2+60);
        rectangle(hx2-30,hy2+20,hx2+30,hy2+50);
        rectangle(hx2-30,hy2-20,hx2+30,hy2-0);
        settextstyle(1,0,16);
        outtextxy(hx2-35,hy2-67,"HOSPITAL");


//Building_3

        setcolor(YELLOW);
        rectangle(hx3-50,hy3-50,hx3+50,hy3+50);
        rectangle(hx3-60,hy3-70,hx3+60,hy3-50);
        rectangle(hx3-40,hy3-80,hx3+40,hy3-70);
        rectangle(hx3-60,hy3+50,hx3+60,hy3+60);
        rectangle(hx3-30,hy3+20,hx3+30,hy3+50);
        rectangle(hx3-30,hy3-20,hx3+30,hy3-0);
        settextstyle(1,0,16);
        outtextxy(hx3-35,hy3-67,"HOSPITAL");

//Building_4;

        setcolor(11);
        rectangle(hx4-50,hy4-50,hx4+50,hy4+50);
        rectangle(hx4-60,hy4-70,hx4+60,hy4-50);
        rectangle(hx4-40,hy4-80,hx4+40,hy4-70);
        rectangle(hx4-60,hy4+50,hx4+60,hy4+60);
        rectangle(hx4-30,hy4+20,hx4+30,hy4+50);
        rectangle(hx4-30,hy4-20,hx4+30,hy4-0);
        settextstyle(1,0,16);
        outtextxy(hx4-35,hy4-67,"HOSPITAL");


        delay(50);
        cleardevice();
    }

    getch();
    closegraph();

}


