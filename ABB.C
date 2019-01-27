


#include<string.h>
#include<graphics.h>
#include<conio.h>
#include<stdio.h>
static int ck=232;
static int l1=1,l2=1;
static char ua[2];

static int count=1;
int lifeline(char ans1[2])
{
int aud[4],j;

l1=2;
					if(strcmp(ans1,"a")==0)
					 {
						aud[0] = 82;
						aud[1] = 18;
						aud[2] = 30;
						aud[3] = 10;

					}
					if(strcmp(ans1,"b")==0) {
					aud[0] = 28;
						aud[1] = 78;
						aud[2] = 10;
						aud[3] = 5;


							}

						if(strcmp(ans1,"c")==0) {
							aud[0] = 22;
						aud[1] = 8;
						aud[2] = 88;
						aud[3] = 22;
							}


						 if (strcmp(ans1,"d")==0) {
							aud[0] = 8;
						aud[1] = 16;
						aud[2] = 6;
						aud[3] = 70;

						}

					setfillstyle(SOLID_FILL,RED);
					bar(250,200,500,330);
					setfillstyle(SOLID_FILL,YELLOW);
		bar(255,215,495,325);
		setcolor(9);
		settextstyle(0,0,1);
		outtextxy(325,220,"Audience Poll");
		line(310,240,310,290);
		line(320,290,420,290);
		setfillstyle(SOLID_FILL,9);
		bar(325,290,340,290-((int)(aud[0]/2)));
		bar(345,290,360,290-((int)(aud[1]/2)));
		bar(365,290,380,290-((int)(aud[2]/2)));
		bar(385,290,400,290-((int)(aud[3]/2)));
		outtextxy(325,300,"A");
		outtextxy(345,300,"B");
		outtextxy(365,300,"C");
		outtextxy(385,300,"D");
	outtextxy(325,308,"Enter Your option");
	gets(ua);

					getch();

					return 0;

}

int gameLayout(FILE *fp,FILE *fp1)
{
	char buffer[1000],buffer1[1000],a1[20],a2[20], a3[20],a4[20],ans[2],b1[20],b2[20],b3[20],b4[20],ans1[2];//ua[2];

	//cleardevice();

	cleardevice();
	setbkcolor(5);
	fscanf(fp,"%[^\n]",buffer);
	fscanf(fp,"%s%s%s%s%s",a1,a2,a3,a4,ans);
	fscanf(fp1,"%[^\n]",buffer1);
	fscanf(fp1,"%s%s%s%s%s",b1,b2,b3,b4,ans1);

	setcolor(15);
	outtextxy(200,50,"WELCOME TO KBC");
	settextstyle(0,0,1);
	outtextxy(450,90,"15 - 10000000");
	outtextxy(450,100,"14 - 5000000");
	outtextxy(450,110,"13 - 2500000");
	outtextxy(450,120,"12 - 1250000");
	outtextxy(450,130,"11 - 640000");
	outtextxy(450,140,"10 - 320000");
	outtextxy(450,150,"9 -  160000");
	outtextxy(450,160,"8 -  80000");
	outtextxy(450,170,"7 -  40000");
	outtextxy(450,180,"6 -  20000");
	outtextxy(450,190,"5 -  10000");
	outtextxy(450,200,"4 -  5000");
	outtextxy(450,210,"3 -  3000");
	outtextxy(450,220,"2 -  2000");
	outtextxy(450,230,"1 -  1000");
	outtextxy(50,120,"Name : ");
	circle(445,ck,2);
      //	setfillstyle(SOLID_FILL,BLACK);
		floodfill(445,ck,BLACK);

      //	outtextxy(100,120,p.name);
	outtextxy(220,120,"Current Ammount : ");
       //	outtextxy(360,120,convert_long(p.salary));
       //audience poll
	circle(100,210,30);
	line(90,200,90,220);
	line(90,220,120,220);
	line(96,220,96,216);
	line(97,220,97,216);
	line(102,220,102,214);
	line(103,220,103,214);
	line(108,220,108,218);
	line(109,220,109,218);
	line(116,220,116,212);
	line(117,220,117,212);
	//if(l1 == 1)
		outtextxy(80,250,"Type aud");
	if(l1!=1){
		line(70,180,130,240);
		line(130,180,70,240);
	}

	circle(260,210,30);
	settextstyle(0,0,1);

		outtextxy(240,250,"press f");
	if(l2!=1) {
		line(230,180,290,240);
		line(290,180,230,240);
	}
	outtextxy(240,210,"50:50");
       //	circle(180,210,30);
      //	settextstyle(1,0,1);
      //	outtextxy(180,200,"?");
       //	circle(260,210,30);
	//settextstyle(0,0,1);
       //	arc(365,200,180,210,30);
       //	arc(365,200,180,210,29);
		outtextxy(105,328,buffer);
		outtextxy(100,382,a1);
		outtextxy(380,382, a2);
		outtextxy(100,430, a3);
		outtextxy(380,430, a4);


	line(100,300,520,300);
	arc(100,315,90,150,15);
	settextstyle(0,0,2);
	//outtextxy(105,328,"this is tatti");
	line(86,308,75,330);
	line(75,330,0,330);
	line(75,334,0,334);
	line(75,334,86,346);
	arc(100,338,210,270,15);
	line(100,353,520,353);
	arc(520,315,30,90,15);
	line(534,308,545,330);
	line(545,330,700,330);
	line(545,334,700,334);
	line(545,334,534,346);
	arc(520,338,270,330,15);
	//        option 1
	line(100,358,275,358);
	arc(100,373,90,150,15);
	line(86,366,75,380);
	line(75,380,0,380);
	line(75,384,0,384);
	line(75,384,86,398);
	arc(100,390,210,270,15);
	line(100,405,275,405);
	arc(275,373,30,90,15);
	line(289,366,300,380);
	line(300,380,320,380);
	line(300,384,320,384);
	line(300,384,289,398);
	arc(276,390,270,330,15);
	//        option 2
	line(345,358,520,358);
	arc(345,373,90,150,15);
	line(331,366,320,380);
	line(320,384,331,398);
	arc(345,390,210,270,15);
	line(345,405,520,405);
	arc(520,373,30,90,15);
	line(534,366,545,380);
	line(545,380,700,380);
	line(545,384,700,384);
	line(545,384,534,398);
	arc(521,390,270,330,15);
	//        option 3
	line(100,410,275,410);
	arc(100,425,90,150,15);
	line(86,418,75,432);
	line(75,432,0,432);
	line(75,436,0,436);
	line(75,436,86,450);
	arc(100,442,210,270,15);
	line(100,457,275,457);
	arc(275,425,30,90,15);
	line(289,418,300,432);
	line(300,432,320,432);
	line(300,436,320,436);
	line(300,436,289,450);
	arc(276,442,270,330,15);
	//        option 4
	line(345,410,520,410);
	arc(345,425,90,150,15);
	line(331,418,320,432);
	line(320,436,331,450);
	arc(345,442,210,270,15);
	line(345,457,520,457);
	arc(520,425,30,90,15);
	line(534,418,545,432);
	line(545,432,700,432);
	line(545,436,700,436);
	line(545,436,534,450);
	arc(521,442,270,330,15);
		gets(ua);
		//printf("\n\nans h%s//\n:",ans);
		//outtextxy(200,200, ans);
		if(strcmp(ua,"f")==0 && l2==1)
		{
			l2=2;
			/*setfillstyle(1,5);
			bar(95,370,120,390 );
		bar(370,370,395,390);
		bar(95,420,120,440);
		bar(370,420,395,440);
		setcolor(15);
		outtextxy(100,382,b1 );
		outtextxy(380,382, b2);
		outtextxy(100,430, b3);
		outtextxy(380,430, b4);*/

		cleardevice();
		setbkcolor(5);
setcolor(15);
	outtextxy(200,50,"WELCOME TO KBC");
	settextstyle(0,0,1);
	outtextxy(450,90,"15 - 10000000");
	outtextxy(450,100,"14 - 5000000");
	outtextxy(450,110,"13 - 2500000");
	outtextxy(450,120,"12 - 1250000");
	outtextxy(450,130,"11 - 640000");
	outtextxy(450,140,"10 - 320000");
	outtextxy(450,150,"9 -  160000");
	outtextxy(450,160,"8 -  80000");
	outtextxy(450,170,"7 -  40000");
	outtextxy(450,180,"6 -  20000");
	outtextxy(450,190,"5 -  10000");
	outtextxy(450,200,"4 -  5000");
	outtextxy(450,210,"3 -  3000");
	outtextxy(450,220,"2 -  2000");
	outtextxy(450,230,"1 -  1000");
	outtextxy(50,120,"Name : ");
	circle(445,ck,2);
      //	setfillstyle(SOLID_FILL,BLACK);
		floodfill(445,ck,BLACK);

      //	outtextxy(100,120,p.name);
	outtextxy(220,120,"Current Ammount : ");
       //	outtextxy(360,120,convert_long(p.salary));
       //audience poll
	circle(100,210,30);
	line(90,200,90,220);
	line(90,220,120,220);
	line(96,220,96,216);
	line(97,220,97,216);
	line(102,220,102,214);
	line(103,220,103,214);
	line(108,220,108,218);
	line(109,220,109,218);
	line(116,220,116,212);
	line(117,220,117,212);
	//if(l1 == 1)
		outtextxy(80,250,"Type aud");
	if(l1!=1){
		line(70,180,130,240);
		line(130,180,70,240);
	}

	circle(260,210,30);
	settextstyle(0,0,1);

		outtextxy(240,250,"press f");
	if(l2!=1) {
		line(230,180,290,240);
		line(290,180,230,240);
	}
	outtextxy(240,210,"50:50");
	outtextxy(105,328,buffer1);
		outtextxy(100,382,b1);
		outtextxy(380,382, b2);
		outtextxy(100,430, b3);
		outtextxy(380,430, b4);
line(100,300,520,300);
	arc(100,315,90,150,15);
	settextstyle(0,0,2);
	//outtextxy(105,328,"this is tatti");
	line(86,308,75,330);
	line(75,330,0,330);
	line(75,334,0,334);
	line(75,334,86,346);
	arc(100,338,210,270,15);
	line(100,353,520,353);
	arc(520,315,30,90,15);
	line(534,308,545,330);
	line(545,330,700,330);
	line(545,334,700,334);
	line(545,334,534,346);
	arc(520,338,270,330,15);
	//        option 1
	line(100,358,275,358);
	arc(100,373,90,150,15);
	line(86,366,75,380);
	line(75,380,0,380);
	line(75,384,0,384);
	line(75,384,86,398);
	arc(100,390,210,270,15);
	line(100,405,275,405);
	arc(275,373,30,90,15);
	line(289,366,300,380);
	line(300,380,320,380);
	line(300,384,320,384);
	line(300,384,289,398);
	arc(276,390,270,330,15);
	//        option 2
	line(345,358,520,358);
	arc(345,373,90,150,15);
	line(331,366,320,380);
	line(320,384,331,398);
	arc(345,390,210,270,15);
	line(345,405,520,405);
	arc(520,373,30,90,15);
	line(534,366,545,380);
	line(545,380,700,380);
	line(545,384,700,384);
	line(545,384,534,398);
	arc(521,390,270,330,15);
	//        option 3
	line(100,410,275,410);
	arc(100,425,90,150,15);
	line(86,418,75,432);
	line(75,432,0,432);
	line(75,436,0,436);
	line(75,436,86,450);
	arc(100,442,210,270,15);
	line(100,457,275,457);
	arc(275,425,30,90,15);
	line(289,418,300,432);
	line(300,432,320,432);
	line(300,436,320,436);
	line(300,436,289,450);
	arc(276,442,270,330,15);
	//        option 4
	line(345,410,520,410);
	arc(345,425,90,150,15);
	line(331,418,320,432);
	line(320,436,331,450);
	arc(345,442,210,270,15);
	line(345,457,520,457);
	arc(520,425,30,90,15);
	line(534,418,545,432);
	line(545,432,700,432);
	line(545,436,700,436);
	line(545,436,534,450);
	arc(521,442,270,330,15);


		setfillstyle(SOLID_FILL,RED);
			bar(150,200,450,260);
			setfillstyle(SOLID_FILL,YELLOW);
			bar(155,215,445,255);
			setcolor(9);
			settextstyle(0,0,1);
			outtextxy(210,225,"Enter your option");
			gets(ua);

		}
		if((strcmp(ua,"aud")==0) && l1==1)
		{
			lifeline(ans);

		}
		/*if(strcmp(ua,"aud") && l1!=1);
		{
			setfillstyle(SOLID_FILL,RED);
			bar(150,200,450,260);
			setfillstyle(SOLID_FILL,YELLOW);
			bar(155,215,445,255);
			setcolor(9);
			settextstyle(0,0,1);
			outtextxy(210,225,"You Already Used it");
			outtextxy(210,238,"Enter your option");
			gets(ua);

		}*/
		if(strcmp(ua,ans)==0)
		{
		       setfillstyle(SOLID_FILL,BLUE);
		       bar(200,200,400,400);

		       setcolor(2);
		       settextstyle(0,0,1);
		       outtextxy(201,300,"YOU ARE RIGHT !!");

		       getch();
		       count++;
		       ck=ck-10;
		       if(count <= 3)
			gameLayout(fp,fp1);
		       else
			return 0;
		}
		else
		{      setfillstyle(SOLID_FILL,GREEN);
		       bar(200,200,400,400);
		       setcolor(4);
		       settextstyle(0,0,1);
		       outtextxy(201,300,"Oops, you are wrong");
		       getch();
		}


//	delay(6000);
	getch();
return(0);
}
/*
void Q(FILE *fp){
char buffer[1000];
cleardevice();

		setbkcolor(0);

	    setfillstyle(SOLID_FILL,MAGENTA);

		bar(200,150,400,200);
		fscanf(fp,"%[^\n]",buffer);
		//buffer=strtok(fp,"\n");
		setcolor(2);


		outtextxy(210,180,buffer);
		delay(5000);


//		printf("arnab tatti\n");
//getch();
}
 */
//driver code
int main()
{
	FILE *fp,*fp1;
	  // gm is Graphics mode which is
    // a computer display mode that
    // generates image using pixels.
    // DETECT is a macro defined in
    // "graphics.h" header file
    int gd = DETECT, gm;

    // initgraph initializes the
    // graphics system by loading a
    // graphics driver from disk
    initgraph(&gd, &gm, "..//BGI");

    // circle fuction


		 fp=fopen("f.txt","r");
		 fp1=fopen("f2.txt","r");
		if (fp == NULL)
		{
		outtextxy(0,0,"not found");
		//return 0;
		}
		else{
		//cleardevice();
		setbkcolor(5);
		setfillstyle(SLASH_FILL,RED);
		bar(200,150,400,350);
		setfillstyle(SOLID_FILL,YELLOW);
		bar(220,170,380,330);
		settextstyle(0,0,2);
		setcolor(15);

		settextstyle(0,0,2);

		outtextxy(250,250,"Welcome");
		delay(5000);
//		Q(fp);
		gameLayout(fp,fp1);
		     }
fclose(fp);
fclose(fp1);
    //getch();

    // closegraph function closes the
    // graphics mode and deallocates
    // all memory allocated by
    // graphics system .
    closegraph();

    return 0;
}

