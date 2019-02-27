#include<stdio.h>
#include<iostream.h>
#include<math.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
union REGS in,out;
void show();
void hide();
void element_display(int n);
void check(int *b,int *x,int *y);
void lines();
void alkali_metals();
void alkaline_earth_metals();
void transition_metals();
void main_group_metals();
void metalloides();
void non_metals();
void noble_gases();
void halogens();
void lanthanides();
void actinides();
void all();

void s_alkali_metals();
void s_alkaline_earth_metals();
void s_transition_metals();
void s_main_group_metals();
void s_metalloides();
void s_non_metals();
void s_noble_gases();
void s_halogens();
void s_lanthanides();
void s_actinides();
void s_all();

main()
{
    int gd=DETECT,gm;
    int i,in,out,b=100,x=200,y=100;
    int n;
    initgraph(&gd,&gm,"C:\\TC\\BGI");
    cleardevice();
    show();
    check(&b,&x,&y);
    L:
    settextstyle(3,HORIZ_DIR,2.5);
    setcolor(14);       outtextxy(10,20,"1   :   Alkali metals");
    delay(250);
    setcolor(15);	outtextxy(10,40,"2   :   Alkaline earth metals");
    delay(250);
    setcolor(14);	outtextxy(10,60,"3   :   Transition metals");
    delay(250);
    setcolor(15);	outtextxy(10,80,"4   :   Main metal groups");
    delay(250);
    setcolor(14);	outtextxy(10,100,"5   :   Metalloides");
    delay(250);
    setcolor(15);	outtextxy(10,120,"6   :   Non Metals");
    delay(250);
    setcolor(14);	outtextxy(10,140,"7   :   Noble Gases");
    delay(250);
    setcolor(15);	outtextxy(10,160,"8   :   Halogens");
    delay(250);
    setcolor(14);	outtextxy(10,180,"9   :   Lanthanides");
    delay(250);
    setcolor(15);	outtextxy(10,200,"10 :   Actinides");
    delay(250);
    setcolor(14);	outtextxy(10,220,"11 :   All Elements");
    delay(250);
    setcolor(12);	outtextxy(10,250,"Enter number from above options :");
    //check(&b,&x,&y);
    gotoxy(50,17);
    cin>>i;
    delay(1000);
    cleardevice();
    M:
    switch(i)
    {
	case 1  :  alkali_metals();             break;
	case 2  :  alkaline_earth_metals();     break;
	case 3  :  transition_metals();         break;
	case 4  :  main_group_metals();         break;
	case 5  :  metalloides();               break;
	case 6  :  non_metals();                break;
	case 7  :  noble_gases();               break;
	case 8  :  halogens();                  break;
	case 9  :  lanthanides();               break;
	case 10 :  actinides();                 break;
	case 11 :  all();                       break;
	default :
		   setcolor(8); setbkcolor(7); settextstyle(3,HORIZ_DIR,2);
		   outtextxy(80,1,"Please enter a correct number");
		   goto L;
    }

    for(int count=0;count<15;count++)
    {
	setbkcolor(7);
	setcolor(count+1);
	rectangle((625+count),(450+count),(10-count),(50-count));     //rectangle(left,top,right,bottom);
    }

    settextstyle(3,HORIZ_DIR,4); //settextstyle(font style,HORIZ_DIR,font size);
    setcolor(8);
    outtextxy(100,0,"THE MODERN PERIODIC TABLE");
    setcolor(0);
    lines();
    settextstyle(3,HORIZ_DIR,1);
    setcolor(5);
    outtextxy(130,452,"Enter 'n' key to continue ");
    int key=0;
    while(1){
	if(kbhit())
	{
		key=getch();
		if(key=='n')
			break;
		if(key=='l')
		{
			cleardevice();
			goto L;
		}
	}

    }
    //code for shuffling the elements
    cleardevice();
    setbkcolor(14);
    setcolor(4);
    settextstyle(3,HORIZ_DIR,4);
    outtextxy(10,10,"Enter element's no. from below list: ");
    settextstyle(3,HORIZ_DIR,1);
    outtextxy(40,70,"H  : 1");    outtextxy(200,110,"V  : 23");    outtextxy(400,150,"Rh : 45");
    outtextxy(40,90,"He : 2");	  outtextxy(200,130,"Cr : 24");    outtextxy(400,170,"Pd : 46");
    outtextxy(40,110,"Li : 3");    outtextxy(200,150,"Mn : 25");    outtextxy(400,190,"Ag : 47");
    outtextxy(40,130,"Be : 4");    outtextxy(200,170,"Fe : 26");    outtextxy(400,210,"Cd : 48");
    outtextxy(40,150,"B  : 5");    outtextxy(200,190,"Co : 27");    outtextxy(400,230,"In : 49");
    outtextxy(40,170,"C  : 6");    outtextxy(200,210,"Ni : 28");    outtextxy(400,250,"Sn : 50");
    outtextxy(40,190,"Ni : 7");    outtextxy(200,230,"Cu : 29");    outtextxy(400,270,"Sb : 51");
    outtextxy(40,210,"O  : 8");    outtextxy(200,250,"Zn : 30");    outtextxy(400,290,"Te : 52");
    outtextxy(40,230,"F  : 9");    outtextxy(200,270,"Ga : 31");    outtextxy(400,310,"I  : 53");
    outtextxy(40,250,"Ne : 10");   outtextxy(200,290,"Ge : 32");    outtextxy(400,330,"Xe : 54");
    outtextxy(40,270,"Na : 11");   outtextxy(200,310,"As : 33");    outtextxy(400,350,"Cs : 55");
    outtextxy(40,290,"Mg : 12");   outtextxy(200,330,"Se : 34");    outtextxy(400,370,"Ba : 56");
    outtextxy(40,310,"Al : 13");   outtextxy(200,350,"Br : 35");    outtextxy(400,390,"La : 57");
    outtextxy(40,330,"Si : 14");   outtextxy(200,370,"Kr : 36");    outtextxy(400,410,"Ce : 58");
    outtextxy(40,350,"P  : 15");   outtextxy(200,390,"Rb : 37");    outtextxy(400,430,"Pr : 59");
    outtextxy(40,370,"S  : 16");   outtextxy(200,410,"Sr : 38");    outtextxy(400,450,"Nd : 60");
    outtextxy(40,390,"Cl : 17");   outtextxy(200,430,"Y  : 39");
    outtextxy(40,410,"Ar : 18");   outtextxy(200,450,"Zr : 40");
    outtextxy(40,430,"K  : 19");   outtextxy(400,70,"Nb : 41");
    outtextxy(40,450,"Ca : 20");   outtextxy(400,90,"Mo : 42");
    outtextxy(200,70,"Sc : 21");   outtextxy(400,110,"Tc : 43");
    outtextxy(200,90,"Ti : 22");   outtextxy(400,130,"Ru : 44");

    /*int keys=0;
    while(1)
    {
	if(kbhit())
	{
		keys=getch();
		if(keys=='l')
		{
			cleardevice();
			goto M;
		}
	}
    }
    */
    gotoxy(74,2.5);
    cin>>n;
    cleardevice();
    setbkcolor(0);
    setcolor(14);
    element_display(n);
    /*outtextxy(10,30,"Now all the elements will be shuffled");
    outtextxy(10,60,"and you need to arrange them in");
    outtextxy(10,90,"proper order ");

    delay(3000);
    cleardevice();
    setbkcolor(7);
    for(count=0;count<15;count++)
    {
	setbkcolor(7);
	setcolor(count+1);
	rectangle((625+count),(450+count),(10-count),(50-count));     //rectangle(left,top,right,bottom);
    }
    settextstyle(3,HORIZ_DIR,4); //settextstyle(font style,HORIZ_DIR,font size);
    setcolor(8);
    outtextxy(100,0,"Arrange these elements");

    setbkcolor(7);
    lines();
    switch(i)
    {
	case 1  :  s_alkali_metals();             break;
	case 2  :  s_alkaline_earth_metals();     break;
	case 3  :  s_transition_metals();         break;
	case 4  :  s_main_group_metals();         break;
	case 5  :  s_metalloides();               break;
	case 6  :  s_non_metals();                break;
	case 7  :  s_noble_gases();               break;
	case 8  :  s_halogens();                  break;
	case 9  :  s_lanthanides();               break;
	case 10 :  s_actinides();                 break;
	case 11 :  s_all();                       break;
	default :  cout<<"pls enter correct no.";
    }*/
	//setbkcolor(7);
	getch();
	closegraph();
	return 0;

}
void element_display(int n)
{
//setcolor(3);
if (n==1)
{
cout<<"Name = hydrogen\n";
cout<<"Number = 1\n";
cout<<"Group = 1\n";
cout<<"Period = 1\n";
cout<<"Formula = H\n";
cout<<"Charge = 1+\n";
cout<<"Mass = 1.01\n";
cout<<"Special = Diatomic\n";
}
else if (n==2) //|| (Command == "helium") || (Command == "He"))
{
cout<<"Name = helium\n";
cout<<"Number = 2\n";
cout<<"Group = 18\n";
cout<<"Period = 1\n";
cout<<"Formula = He\n";
cout<<"Charge = 0\n";
cout<<"Mass = 4.00\n";
cout<<"Special = None\n";
}
else if (n==3)// || (Command == "lithium") || (Command == "Li"))
{
cout<<"Name = lithium\n";
cout<<"Number = 3\n";
cout<<"Group = 1\n";
cout<<"Period = 2\n";
cout<<"Formula = Li\n";
cout<<"Charge = 1+\n";
cout<<"Mass = 6.94\n";
cout<<"Special = None\n";
}
else if (n==4)
{
cout<<"Name = beryllium\n";
cout<<"Number = 4\n";
cout<<"Group = 2\n";
cout<<"Period = 2\n";
cout<<"Formula = Be\n";
cout<<"Charge = 2+\n";
cout<<"Mass = 9.01\n";
cout<<"Special = None\n";
}
else if (n==5)
{
cout<<"Name = boron\n";
cout<<"Number = 5\n";
cout<<"Group = 13\n";
cout<<"Period = 2\n";
cout<<"Formula = B\n";
cout<<"Charge = 3+\n";
cout<<"Mass = 10.81\n";
cout<<"Special = None\n";
}
else if (n==6)// || (Command == "carbon") || (Command == "C"))
{
cout<<"Name = carbon\n";
cout<<"Number = 6\n";
cout<<"Group = 14\n";
cout<<"Period = 2\n";
cout<<"Formula = C\n";
cout<<"Charge = 4+\n";
cout<<"Mass = 12.01\n";
cout<<"Special = None\n";
}
else if (n==7)// || (Command == "nitrogen") || (Command == "N"))
{
cout<<"Name = nitrogen\n";
cout<<"Number = 7\n";
cout<<"Group = 15\n";
cout<<"Period = 2\n";
cout<<"Formula = N\n";
cout<<"Charge = 3-\n";
cout<<"Mass = 14.01\n";
cout<<"Special = Diatomic\n";
}
else if (n== 8) //|| (Command == "oxygen") || (Command == "O"))
{
cout<<"Name = oxygen\n";
cout<<"Number = 8\n";
cout<<"Group = 16\n";
cout<<"Period = 2\n";
cout<<"Formula = O\n";
cout<<"Charge = 2-\n";
cout<<"Mass = 16.00\n";
cout<<"Special = Diatomic\n";
}
else if (n== 9)// || (Command == "flourine") || (Command == "F"))
{
cout<<"Name = fluorine\n";
cout<<"Number = 9\n";
cout<<"Group = 17\n";
cout<<"Period = 2\n";
cout<<"Formula = F\n";
cout<<"Charge = 1-\n";
cout<<"Mass = 19.00\n";
cout<<"Special = Diatomic\n";
}
else if (n== 10)// || (Command == "neon") || (Command == "Ne"))
{
cout<<"Name = neon\n";
cout<<"Number = 10\n";
cout<<"Group = 18\n";
cout<<"Period = 2\n";
cout<<"Formula = Ne\n";
cout<<"Charge = 0\n";
cout<<"Mass = 20.18\n";
cout<<"Special = Noble Gas\n";
}
else if (n== 11)// || (Command == "sodium") || (Command == "Na"))
{
cout<<"Name = sodium\n";
cout<<"Number = 11\n";
cout<<"Group = 1\n";
cout<<"Period = 3\n";
cout<<"Formula = Na\n";
cout<<"Charge = 1+\n";
cout<<"Mass = 22.99\n";
cout<<"Special = None\n";
}
else if (n== 12) //|| (Command == "magnesium") || (Command == "Mg"))
{
cout<<"Name = magnesium\n";
cout<<"Number = 12\n";
cout<<"Group = 2\n";
cout<<"Period = 3\n";
cout<<"Formula = Mg\n";
cout<<"Charge = 2+\n";
cout<<"Mass = 24.31\n";
cout<<"Special = None\n";
}
else if (n==13)// || (Command == "aluminum") || (Command == "Al"))
{
cout<<"Name = aluminum\n";
cout<<"Number = 13\n";
cout<<"Group = 13\n";
cout<<"Period = 3\n";
cout<<"Formula = Al\n";
cout<<"Charge = 3+\n";
cout<<"Mass = 26.98\n";
cout<<"Special = None\n";
}
else if (n==14)// || (Command == "silicon") || (Command == "Si"))
{
cout<<"Name = silicon\n";
cout<<"Number = 14\n";
cout<<"Group = 14\n";
cout<<"Period = 3\n";
cout<<"Formula = Si\n";
cout<<"Charge = 4+\n";
cout<<"Mass = 28.09\n";
cout<<"Special = None";
}
else if (n== 15) //|| (Command == "phosphorous") || (Command == "P"))
{
cout<<"Name = phosphorus\n";
cout<<"Number = 15\n";
cout<<"Group = 15\n";
cout<<"Period = 3\n";
cout<<"Formula = P\n";
cout<<"Charge = 3-\n";
cout<<"Mass = 30.97\n";
cout<<"Special = Diatomic";
}
else if (n== 16)// || (Command == "sulfur") || (Command == "S"))
{
cout<<"Name = sulfur\n";
cout<<"Number = 16\n";
cout<<"Group = 16\n";
cout<<"Period = 3\n";
cout<<"Formula = S\n";
cout<<"Charge = 2-\n";
cout<<"Mass = 32.06\n";
cout<<"Special = Diatomic";
}
else if (n == 17)// || (Command == "chlorine") || (Command == "Cl"))
{
cout<<"Name = chlorine\n";
cout<<"Number = 17\n";
cout<<"Group = 17\n";
cout<<"Period = 3\n";
cout<<"Formula = Cl\n";
cout<<"Charge = 1-\n";
cout<<"Mass = 35.45\n";
cout<<"Special = Diatomic";
}
else if (n == 18) //|| (Command == "argon") || (Command == "Ar"))
{
cout<<"Name = argon\n";
cout<<"Number = 18\n";
cout<<"Group = 18\n";
cout<<"Period = 3\n";
cout<<"Formula = Ar\n";
cout<<"Charge = 0\n";
cout<<"Mass = 39.95\n";
cout<<"Special = Noble Gas";
}
else if (n == 19)// || (Command == "potassium") || (Command == "K"))
{
cout<<"Name = potassium\n";
cout<<"Number = 19\n";
cout<<"Group = 1\n";
cout<<"Period = 4\n";
cout<<"Formula = K\n";
cout<<"Charge = 1+\n";
cout<<"Mass = 39.10\n";
cout<<"Special = None\n";
}
else if (n == 20)// || (Command == "calcium") || (Command == "Ca"))
{
cout<<"Name = calcium\n";
cout<<"Number = 20\n";
cout<<"Group = 2\n";
cout<<"Period = 4\n";
cout<<"Formula = Ca\n";
cout<<"Charge = 2+\n";
cout<<"Mass = 40.08\n";
cout<<"Special = None";
}
else if (n == 21)// || (Command == "scandium") || (Command == "Sc"))
{
cout<<"Name = scandium\n";
cout<<"Number = 21\n";
cout<<"Group = 3\n";
cout<<"Period = 4\n";
cout<<"Formula = Sc\n";
cout<<"Charge = 3+\n";
cout<<"Mass = 44.96\n";
cout<<"Special = None";
}
else if (n == 22)// || (Command == "titanium") || (Command == "Ti"))
{
cout<<"Name = titanium\n";
cout<<"Number = 22\n";
cout<<"Group = 4\n";
cout<<"Period = 4\n";
cout<<"Formula = Ti\n";
cout<<"Charge = 4+ \\ 3+\n";
cout<<"Mass = 47.88\n";
cout<<"Special = None";
}
else if (n== 23)// || (Command == "vanadium") || (Command == "V"))
{
cout<<"Name = vanadium\n";
cout<<"Number = 23\n";
cout<<"Group = 5\n";
cout<<"Period = 4\n";
cout<<"Formula = V\n";
cout<<"Charge = 5+ \\ 4+\n";
cout<<"Mass = 50.94\n";
cout<<"Special = None";
}
else if (n == 24)// || (Command == "chromium") || (Command == "Cr"))
{
cout<<"Name = chromium\n";
cout<<"Number = 24\n";
cout<<"Group = 6\n";
cout<<"Period = 4\n";
cout<<"Formula = Cr\n";
cout<<"Charge = 3+ \\ 2+\n";
cout<<"Mass = 52.00\n";
cout<<"Special = None";
}
else if (n == 25)// || (Command == "manganese") || (Command == "Mn"))
{
cout<<"Name = manganese\n";
cout<<"Number = 25\n";
cout<<"Group = 7\n";
cout<<"Period = 4\n";
cout<<"Formula = Mn\n";
cout<<"Charge = 2+ \\ 4+\n";
cout<<"Mass = 54.94\n";
cout<<"Special = None";
}
else if (n == 26)// || (Command == "iron") || (Command == "Fe"))
{
cout<<"Name = iron\n";
cout<<"Number = 26\n";
cout<<"Group = 8\n";
cout<<"Period = 4\n";
cout<<"Formula = Fe\n";
cout<<"Charge = 3+ \\ 2+\n";
cout<<"Mass = 55.85\n";
cout<<"Special = None";
}
else if (n == 27) //|| (Command == "cobalt") || (Command == "Co"))
{
cout<<"Name = cobalt\n";
cout<<"Number = 27\n";
cout<<"Group = 9\n";
cout<<"Period = 4\n";
cout<<"Formula = Co\n";
cout<<"Charge = 2+ \\ 3+\n";
cout<<"Mass = 58.93\n";
cout<<"Special = None";
}
else if (n == 28) //|| (Command == "nickel") || (Command == "Ni"))
{
cout<<"Name = nickel\n";
cout<<"Number = 28\n";
cout<<"Group = 10\n";
cout<<"Period = 4\n";
cout<<"Formula = Ni\n";
cout<<"Charge = 2+ \\ 3+\n";
cout<<"Mass = 58.69\n";
cout<<"Special = None";
}
else if (n== 29) //|| (Command == "copper") || (Command == "Cu"))
{
cout<<"Name = copper\n";
cout<<"Number = 29\n";
cout<<"Group = 11\n";
cout<<"Period = 4\n";
cout<<"Formula = Cu\n";
cout<<"Charge = 2+ \\ 1+\n";
cout<<"Mass = 63.55\n";
cout<<"Special = None";
}
else if (n == 30) //|| (Command == "zinc") || (Command == "Zn"))
{
cout<<"Name = zinc\n";
cout<<"Number = 30\n";
cout<<"Group = 12\n";
cout<<"Period = 4\n";
cout<<"Formula = Zn\n";
cout<<"Charge = 2+\n";
cout<<"Mass = 65.38\n";
cout<<"Special = None";
}
else if (n == 31) //|| (Command == "gallium") || (Command == "Ga"))
{
cout<<"Name = gallium\n";
cout<<"Number = 31\n";
cout<<"Group = 13\n";
cout<<"Period = 4\n";
cout<<"Formula = Ga\n";
cout<<"Charge = 3+\n";
cout<<"Mass = 69.72\n";
cout<<"Special = None";
}
else if (n == 32) //|| (Command == "germanium") || (Command == "Ge"))
{
cout<<"Name = germanium\n";
cout<<"Number = 32\n";
cout<<"Group = 14\n";
cout<<"Period = 4\n";
cout<<"Formula = Ge\n";
cout<<"Charge = 4+\n";
cout<<"Mass = 72.61\n";
cout<<"Special = None";
}
else if (n == 33) //|| (Command == "arsonic") || (Command == "As"))
{
cout<<"Name = arsonic\n";
cout<<"Number = 33\n";
cout<<"Group = 15\n";
cout<<"Period = 4\n";
cout<<"Formula = As\n";
cout<<"Charge = 3-\n";
cout<<"Mass = 74.92\n";
cout<<"Special = None";
}
else if (n == 34) //|| (Command == "selenium") || (Command == "Se"))
{
cout<<"Name = selenium\n";
cout<<"Number = 34\n";
cout<<"Group = 16\n";
cout<<"Period = 4\n";
cout<<"Formula = Se\n";
cout<<"Charge = 2-\n";
cout<<"Mass = 78.96\n";
cout<<"Special = None";
}
else if (n == 35) //|| (Command == "bromine") || (Command == "Br"))
{
cout<<"Name = bromine\n";
cout<<"Number = 35\n";
cout<<"Group = 17\n";
cout<<"Period = 4\n";
cout<<"Formula = Br\n";
cout<<"Charge = 1-\n";
cout<<"Mass = 79.90\n";
cout<<"Special = Diatomic";
}
else if (n == 36) //|| (Command == "krypton") || (Command == "Kr"))
{
cout<<"Name = krypton\n";
cout<<"Number = 36\n";
cout<<"Group = 18\n";
cout<<"Period = 4\n";
cout<<"Formula = Kr\n";
cout<<"Charge = 0\n";
cout<<"Mass = 83.80\n";
cout<<"Special = Noble Gas";
}
else if (n == 37) //|| (Command == "rubidium") || (Command == "Rb"))
{
cout<<"Name = rubidium\n";
cout<<"Number = 37\n";
cout<<"Group = 1\n";
cout<<"Period = 5\n";
cout<<"Formula = Rb\n";
cout<<"Charge = 1+\n";
cout<<"Mass = 85.47\n";
cout<<"Special = None";
}
else if (n == 38) //|| (Command == "stronthum") || (Command == "Sr"))
{
cout<<"Name = stronthum\n";
cout<<"Number = 38\n";
cout<<"Group = 2\n";
cout<<"Period = 5\n";
cout<<"Formula = Sr\n";
cout<<"Charge = 2+\n";
cout<<"Mass = 87.62\n";
cout<<"Special = None";
}
else if (n == 39) //|| (Command == "ythrium") || (Command == "Y"))
{
cout<<"Name = ythrium\n";
cout<<"Number = 39\n";
cout<<"Group = 3\n";
cout<<"Period = 5\n";
cout<<"Formula = Y\n";
cout<<"Charge = 3+\n";
cout<<"Mass = 88.91\n";
cout<<"Special = None";
}
else if (n == 40) //|| (Command == "zirconium") || (Command == "Zr"))
{
cout<<"Name = zirconium\n";
cout<<"Number = 40\n";
cout<<"Group = 4\n";
cout<<"Period = 5\n";
cout<<"Formula = Zr\n";
cout<<"Charge = 4+\n";
cout<<"Mass = 91.22\n";
cout<<"Special = None\n";
}
else if (n == 41) //|| (Command == "niobium") || (Command == "Nb"))
{
cout<<"Name = niobium\n";
cout<<"Number = 41\n";
cout<<"Group = 5\n";
cout<<"Period = 5\n";
cout<<"Formula = Nb\n";
cout<<"Charge = 5+ \\ 3+\n";
cout<<"Mass = 92.91\n";
cout<<"Special = None";
}
else if (n == 42) //|| (Command == "molybdenum") || (Command == "Mo"))
{
cout<<"Name = molybdenum\n";
cout<<"Number = 42\n";
cout<<"Group = 6\n";
cout<<"Period = 5\n";
cout<<"Formula = Mo\n";
cout<<"Charge = 6+\n";
cout<<"Mass = 95.94\n";
cout<<"Special = None";
}
else if (n== 43) //|| (Command == "techenium") || (Command == "Tc"))
{
cout<<"Name = techenium\n";
cout<<"Number = 43\n";
cout<<"Group = 7\n";
cout<<"Period = 5\n";
cout<<"Formula = Tc\n";
cout<<"Charge = 7+\n";
cout<<"Mass = 98.91\n";
cout<<"Special = None";
}
else if (n== 44) //|| (Command == "ruthenium") || (Command == "Ru"))
{
cout<<"Name = ruthenium\n";
cout<<"Number = 44\n";
cout<<"Group = 8\n";
cout<<"Period = 5\n";
cout<<"Formula = Ru\n";
cout<<"Charge = 3+ \\ 4+\n";
cout<<"Mass = 101.07\n";
cout<<"Special = None";
}
else if (n == 45) //|| (Command == "rhodium") || (Command == "Rh"))
{
cout<<"Name = rhodium\n";
cout<<"Number = 45\n";
cout<<"Group = 9\n";
cout<<"Period = 5\n";
cout<<"Formula = Rh\n";
cout<<"Charge = 3+\n";
cout<<"Mass = 102.91\n";
cout<<"Special = None";
}
else if (n == 46) //|| (Command == "palladium") || (Command == "Pd"))
{
cout<<"Name = palladium\n";
cout<<"Number = 46\n";
cout<<"Group = 10\n";
cout<<"Period = 5\n";
cout<<"Formula = Pd\n";
cout<<"Charge = 2+ \\ 4+\n";
cout<<"Mass = 106.42\n";
cout<<"Special = None";
}
else if (n == 47) //|| (Command == "silver") || (Command == "Ag"))
{
cout<<"Name = silver";
cout<<"Number = 47\n";
cout<<"Group = 11\n";
cout<<"Period = 5\n";
cout<<"Formula = Ag\n";
cout<<"Charge = 1+\n";
cout<<"Mass = 107.87\n";
cout<<"Special = None";
}
else if (n == 48) //|| (Command == "cadmium") || (Command == "Cd"))
{
cout<<"Name = cadmium\n";
cout<<"Number = 48\n";
cout<<"Group = 12\n";
cout<<"Period = 5\n";
cout<<"Formula = Cd\n";
cout<<"Charge = 2+\n";
cout<<"Mass = 112.41\n";
cout<<"Special = None";
}
else if (n == 49) //|| (Command == "indium") || (Command == "In"))
{
cout<<"Name = indium\n";
cout<<"Number = 49\n";
cout<<"Group = 13\n";
cout<<"Period = 5\n";
cout<<"Formula = In\n";
cout<<"Charge = 3+\n";
cout<<"Mass = 114.82\n";
cout<<"Special = None";
}
else if (n == 50) //|| (Command == "tin") || (Command == "Sn"))
{
cout<<"Name = tin\n";
cout<<"Number = 50\n";
cout<<"Group = 14\n";
cout<<"Period = 5\n";
cout<<"Formula = Sn\n";
cout<<"Charge = 4+ \\ 2+\n";
cout<<"Mass = 118.69\n";
cout<<"Special = None";
}
else if (n == 51) //|| (Command == "antimony") || (Command == "Sb"))
{
cout<<"Name = antimony\n";
cout<<"Number = 51\n";
cout<<"Group = 15\n";
cout<<"Period = 5\n";
cout<<"Formula = Sb\n";
cout<<"Charge = 3+ \\ 5+\n";
cout<<"Mass = 121.75\n";
cout<<"Special = None";
}
else if (n == 52) //|| (Command == "tellurium") || (Command == "Te"))
{
cout<<"Name = tellurium\n";
cout<<"Number = 52\n";
cout<<"Group = 16\n";
cout<<"Period = 5\n";
cout<<"Formula = Te\n";
cout<<"Charge = 2-\n";
cout<<"Mass = 127.60\n";
cout<<"Special = None";
}
else if (n == 53) //|| (Command == "iodine") || (Command == "I"))
{
cout<<"Name = iodine\n";
cout<<"Number = 53\n";
cout<<"Group = 17\n";
cout<<"Period = 5\n";
cout<<"Formula = I\n";
cout<<"Charge = 1-\n";
cout<<"Mass = 126.90\n";
cout<<"Special = Diatomic";
}
else if (n == 54) //|| (Command == "xenon") || (Command == "Xe"))
{
cout<<"Name = xenon\n";
cout<<"Number = 54\n";
cout<<"Group = 18\n";
cout<<"Period = 5\n";
cout<<"Formula = Xe\n";
cout<<"Charge = 0\n";
cout<<"Mass = 131.29\n";
cout<<"Special = Noble Gas";
}
else if (n == 55) //|| (Command == "cosium") || (Command == "Cs"))
{
cout<<"Name = cosiumn\n";
cout<<"Number = 55\n";
cout<<"Group = 1\n";
cout<<"Period = 6\n";
cout<<"Formula = Cs\n";
cout<<"Charge = 1+\n";
cout<<"Mass = 132.91\n";
cout<<"Special = None";
}
else if (n == 56) //|| (Command == "barium") || (Command == "Ba"))
{
cout<<"Name = barium\n";
cout<<"Number = 56\n";
cout<<"Group = 2\n";
cout<<"Period = 6\n";
cout<<"Formula = Ba\n";
cout<<"Charge = 2+\n";
cout<<"Mass = 137.33\n";
cout<<"Special = None";
}
else if (n == 57) //|| (Command == "lanthanum") || (Command == "La"))
{
cout<<"Name = lanthanum\n";
cout<<"Number = 57\n";
cout<<"Group = 3\n";
cout<<"Period = 6\n";
cout<<"Formula = La\n";
cout<<"Charge = 3+\n";
cout<<"Mass = 138.91\n";
cout<<"Special = None";
}
else if (n == 58) //|| (Command == "cerium") || (Command == "Ce"))
{
cout<<"Name = cerium\n";
cout<<"Number = 58\n";
cout<<"Group = 5\n";
cout<<"Period = 6\n";
cout<<"Formula = Ce\n";
cout<<"Charge = 3+\n";
cout<<"Mass = 140.12\n";
cout<<"Special = None\n";
}
else if (n == 59) //|| (Command == "pruseodymium") || (Command == "Pr"))
{
cout<<"Name = pruseodymium\n";
cout<<"Number = 59\n";
cout<<"Group = 6\n";
cout<<"Period = 6\n";
cout<<"Formula = Pr\n";
cout<<"Charge = 3+\n";
cout<<"Mass = 140.91\n";
cout<<"Special = None";
}
else if (n== 60) //|| (Command == "neodymium") || (Command == "Nd"))
{
cout<<"Name = neodymium\n";
cout<<"Number = 60\n";
cout<<"Group = 7\n";
cout<<"Period = 6\n";
cout<<"Formula = Nd\n";
cout<<"Charge = 3+\n";
cout<<"Mass = 144.24\n";
cout<<"Special = None";
}
else if (n == 61) //|| (Command == "promethium") || (Command == "Pm"))
{
cout<<"Name = promethium\n";
cout<<"Number = 61\n";
cout<<"Group = 8\n";
cout<<"Period = 6\n";
cout<<"Formula = Pm\n";
cout<<"Charge = 3+\n";
cout<<"Mass = 145\n";
cout<<"Special = None";
}    /*
else if (n == 62) //|| (Command == "samarium") || (Command == "Sm"))
{
cout<<"Name = samarium";
cout<<"Number = 62";
cout<<"Group = 9";
cout<<"Period = 6";
cout<<"Formula = Sm";
cout<<"Charge = 3+ \\ 2+";
cout<<"Mass = 150.40";
cout<<"Special = None";
}
else if (n == 63) //|| (Command == "europium") || (Command == "Eu"))
{
cout<<"Name = europium";
cout<<"Number = 63";
cout<<"Group = 10";
cout<<"Period = 6";
cout<<"Formula = Eu";
cout<<"Charge = 3+ \\ 2+";
cout<<"Mass = 151.97";
cout<<"Special = None";
}
else if (n == 64) //|| (Command == "gadolinium") || (Command == "Gd"))
{
cout<<"Name = gadolinium";
cout<<"Number = 64";
cout<<"Group = 11";
cout<<"Period = 6";
cout<<"Formula = Gd";
cout<<"Charge = 3+";
cout<<"Mass = 157.25";
cout<<"Special = None";
}
else if (n ==65) //|| (Command == "terbium") || (Command == "Tb"))
{
cout<<"Name = terbium";
cout<<"Number = 65";
cout<<"Group = 12";
cout<<"Period = 6";
cout<<"Formula = Tb";
cout<<"Charge = 3+";
cout<<"Mass = 158.93";
cout<<"Special = None";
}
else if (n == 66) //|| (Command == "dysprosium") || (Command == "Dy"))
{
cout<<"Name = dysprosium";
cout<<"Number = 66";
cout<<"Group = 13";
cout<<"Period = 6";
cout<<"Formula = Dy";
cout<<"Charge = 3+";
cout<<"Mass = 162.50";
cout<<"Special = None";
}
else if (n == 67) //|| (Command == "helmium") || (Command == "Ho"))
{
cout<<"Name = helmium";
cout<<"Number = 67";
cout<<"Group = 14";
cout<<"Period = 6";
cout<<"Formula = Ho";
cout<<"Charge = 3+";
cout<<"Mass = 164.93";
cout<<"Special = None";
}
else if (n == 68) //|| (Command == "erbium") || (Command == "Er"))
{
cout<<"Name = erbium";
cout<<"Number = 68";
cout<<"Group = 15";
cout<<"Period = 6";
cout<<"Formula = Er";
cout<<"Charge = 3+";
cout<<"Mass = 167.26";
cout<<"Special = None";
}
else if (n == 69) //|| (Command == "thulium") || (Command == "Tm"))
{
cout<<"Name = thulium";
cout<<"Number = 69";
cout<<"Group = 16";
cout<<"Period = 6";
cout<<"Formula = Tm";
cout<<"Charge = 3+";
cout<<"Mass = 168.94";
cout<<"Special = None";
}
else if (n == 70) //|| (Command == "ytlerhium") || (Command == "Yb"))
{
cout<<"Name = ytlerhium";
cout<<"Number = 70";
cout<<"Group = 17";
cout<<"Period = 6";
cout<<"Formula = Yb";
cout<<"Charge = 3+ \\ 2+";
cout<<"Mass = 173.04";
cout<<"Special = None";
}
else if (n == 71) //|| (Command == "lutelium") || (Command == "Lu"))
{
cout<<"Name = lutelium";
cout<<"Number = 71";
cout<<"Group = 18";
cout<<"Period = 6";
cout<<"Formula = Lu";
cout<<"Charge = 3+";
cout<<"Mass = 174.97";
cout<<"Special = None";
}
else if (n == 72) //|| (Command == "hefnium") || (Command == "Hf"))
{
cout<<"Name = hefnium";
cout<<"Number = 72";
cout<<"Group = 4";
cout<<"Period = 6";
cout<<"Formula = Hf";
cout<<"Charge = 4+";
cout<<"Mass = 178.49";
cout<<"Special = None";
}
else if (n == 73) //|| (Command == "tantalum") || (Command == "Ta"))
{
cout<<"Name = tantalum";
cout<<"Number = 73";
cout<<"Group = 5";
cout<<"Period = 6";
cout<<"Formula = Ta";
cout<<"Charge = 5+";
cout<<"Mass = 180.95";
cout<<"Special = None";
}
else if (n == 74) //|| (Command == "wolfrum") || (Command == "tungsten") || (Command == "W"))
{
cout<<"Name = wolfrum (tungsten)";
cout<<"Number = 74";
cout<<"Group = 6";
cout<<"Period = 6";
cout<<"Formula = W";
cout<<"Charge = 6+";
cout<<"Mass = 183.85";
cout<<"Special = None";
}
else if (n == 75) //|| (Command == "rhenium") || (Command == "Re"))
{
cout<<"Name = rhenium";
cout<<"Number = 75";
cout<<"Group = 7";
cout<<"Period = 6";
cout<<"Formula = Re";
cout<<"Charge = 7+";
cout<<"Mass = 186.21";
cout<<"Special = None";
}
else if (n == 76) //|| (Command == "osmium") || (Command == "Os"))
{
cout<<"Name = osmium";
cout<<"Number = 76";
cout<<"Group = 8";
cout<<"Period = 6";
cout<<"Formula = Os";
cout<<"Charge = 4+";
cout<<"Mass = 190.2";
cout<<"Special = None";
}
else if (n == 77) //|| (Command == "iridium") || (Command == "Ir"))
{
cout<<"Name = iridium";
cout<<"Number = 77";
cout<<"Group = 9";
cout<<"Period = 6";
cout<<"Formula = Ir";
cout<<"Charge = 4+";
cout<<"Mass = 192.22";
cout<<"Special = None";
}
else if (n == 78) //|| (Command == "platinum") || (Command == "Pt"))
{
cout<<"Name = platinum";
cout<<"Number = 78";
cout<<"Group = 10";
cout<<"Period = 6";
cout<<"Formula = Pt";
cout<<"Charge = 4+ \\ 2+";
cout<<"Mass = 195.08";
cout<<"Special = None";
}
else if (n == 79) //|| (Command == "gold") || (Command == "Au"))
{
cout<<"Name = gold";
cout<<"Number = 79";
cout<<"Group = 11";
cout<<"Period = 6";
cout<<"Formula = Au";
cout<<"Charge = 3+ \\ 1+";
cout<<"Mass = 196.97";
cout<<"Special = None";
}
else if (n == 80) //|| (Command == "mercury") || (Command == "Mg"))
{
cout<<"Name = mercury";
cout<<"Number = 80";
cout<<"Group = 12";
cout<<"Period = 6";
cout<<"Formula = Hg";
cout<<"Charge = 2+ \\ 1+";
cout<<"Mass = 200.59";
cout<<"Special = None";
}
else if (n== 81) //|| (Command == "thallium") || (Command == "Tl"))
{
cout<<"Name = thallium";
cout<<"Number = 81";
cout<<"Group = 13";
cout<<"Period = 6";
cout<<"Formula = Tl";
cout<<"Charge = 1+ \\ 3+";
cout<<"Mass = 204.38";
cout<<"Special = None";
}
else if (n == 82) //|| (Command == "lead") || (Command == "Pb"))
{
cout<<"Name = lead";
cout<<"Number = 82";
cout<<"Group = 14";
cout<<"Period = 6";
cout<<"Formula = Pb";
cout<<"Charge = 2+ \\ 4+";
cout<<"Mass = 207.20";
cout<<"Special = None";
}
else if (n == 83) //|| (Command == "bismuth") || (Command == "Bi"))
{
cout<<"Name = bismuth";
cout<<"Number = 83";
cout<<"Group = 15";
cout<<"Period = 6";
cout<<"Formula = Bi";
cout<<"Charge = 3+ \\ 5+";
cout<<"Mass = 208.98";
cout<<"Special = None";
}
else if (n== 84) //|| (Command == "polonium") || (Command == "Po"))
{
cout<<"Name = polonium";
cout<<"Number = 84";
cout<<"Group = 16";
cout<<"Period = 6";
cout<<"Formula = Po";
cout<<"Charge = 2+ \\ 4+";
cout<<"Mass = 209";
cout<<"Special = None";
}
else if (n == 85) //|| (Command == "asiatine") || (Command == "At"))
{
cout<<"Name = asiatine";
cout<<"Number = 85";
cout<<"Group = 17";
cout<<"Period = 6";
cout<<"Formula = At";
cout<<"Charge = 1-";
cout<<"Mass = 210";
cout<<"Special = None";
}
else if (n == 86) //|| (Command == "radon") || (Command == "Rn"))
{
cout<<"Name = radon";
cout<<"Number = 86";
cout<<"Group = 18";
cout<<"Period = 6";
cout<<"Formula = Rn";
cout<<"Charge = 0";
cout<<"Mass = 222";
cout<<"Special = Noble Gas";
}
else if (n == 87) //|| (Command == "fruncium") || (Command == "Fr"))
{
cout<<"Name = fruncium";
cout<<"Number = 87";
cout<<"Group = 1";
cout<<"Period = 7";
cout<<"Formula = Fr";
cout<<"Charge = 1+";
cout<<"Mass = 223";
cout<<"Special = None";
}
else if (n == 88) //|| (Command == "radium") || (Command == "Ra"))
{
cout<<"Name = radium";
cout<<"Number = 88";
cout<<"Group = 2";
cout<<"Period = 7";
cout<<"Formula = Ra";
cout<<"Charge = 2+";
cout<<"Mass = 226.03";
cout<<"Special = None";
}
else if (n == 89)// || (Command == "actinium") || (Command == "Ac"))
{
cout<<"Name = actinium";
cout<<"Number = 89";
cout<<"Group = 3";
cout<<"Period = 7";
cout<<"Formula = Ac";
cout<<"Charge = 3+";
cout<<"Mass = 227.03";
cout<<"Special = None";
}
else if (n == 90) //|| (Command == "thorlum") || (Command == "Th"))
{
cout<<"Name = thorlum";
cout<<"Number = 90";
cout<<"Group = 5";
cout<<"Period = 7";
cout<<"Formula = Th";
cout<<"Charge = 4+";
cout<<"Mass = 232.04";
cout<<"Special = None";
}
else if (n == 91) //|| (Command == "protactinium") || (Command == "Pa"))
{
cout<<"Name = protactinium";
cout<<"Number = 91";
cout<<"Group = 6";
cout<<"Period = 7";
cout<<"Formula = Pa";
cout<<"Charge = 5+ \\ 4+";
cout<<"Mass = 231.04";
cout<<"Special = None";
}
else if (n == 92) //|| (Command == "uranium") || (Command == "U"))
{
cout<<"Name = uranium";
cout<<"Number = 92";
cout<<"Group = 7";
cout<<"Period = 7";
cout<<"Formula = U";
cout<<"Charge = 6+ \\ 4+";
cout<<"Mass = 238.03";
cout<<"Special = None";
}
else if (n== 93) //|| (Command == "neplunium") || (Command == "Np"))
{
cout<<"Name = neplunium";
cout<<"Number = 93";
cout<<"Group = 8";
cout<<"Period = 7";
cout<<"Formula = Np";
cout<<"Charge = 5+";
cout<<"Mass = 237.05";
cout<<"Special = None";
}
else if (n == 94) //|| (Command == "plutonium") || (Command == "Pu"))
{
cout<<"Name = plutonium";
cout<<"Number = 94";
cout<<"Group = 9";
cout<<"Period = 7";
cout<<"Formula = Pu";
cout<<"Charge = 4+ \\ 6+";
cout<<"Mass = 244";
cout<<"Special = None";
}
else if (n == 95) //|| (Command == "americium") || (Command == "Am"))
{
cout<<"Name = americium";
cout<<"Number = 95";
cout<<"Group = 10";
cout<<"Period = 7";
cout<<"Formula = Am";
cout<<"Charge = 3+ \\ 4+";
cout<<"Mass = 244";
cout<<"Special = None";
}
else if (n == 96) //|| (Command == "curium") || (Command == "Cm"))
{
cout<<"Name = curium";
cout<<"Number = 96";
cout<<"Group = 11";
cout<<"Period = 7";
cout<<"Formula = Cm";
cout<<"Charge = 3+";
cout<<"Mass = 247";
cout<<"Special = None";
}
else if (n == 97) //|| (Command == "borkelium") || (Command == "Bk"))
{
cout<<"Name = borkelium";
cout<<"Number = 97";
cout<<"Group = 12";
cout<<"Period = 7";
cout<<"Formula = Bk";
cout<<"Charge = 3'+ \\ 4+";
cout<<"Mass = 247";
cout<<"Special = None";
}
else if ( n== 98) //|| (Command == "californium") || (Command == "Cf"))
{
cout<<"Name = californium";
cout<<"Number = 98";
cout<<"Group = 13";
cout<<"Period = 7";
cout<<"Formula = Cf";
cout<<"Charge = 3+";
cout<<"Mass = 251";
cout<<"Special = None";
}
else if (n == 99) //|| (Command == "einsteinium") || (Command == "Es"))
{
cout<<"Name = einsteinium";
cout<<"Number = 99";
cout<<"Group = 14";
cout<<"Period = 7";
cout<<"Formula = Es";
cout<<"Charge = 3+";
cout<<"Mass = 252";
cout<<"Special = None";
}
else if (n == 100) //|| (Command == "formium") || (Command == "Fm"))
{
cout<<"Name = formium";
cout<<"Number = 100";
cout<<"Group = 15";
cout<<"Period = 7";
cout<<"Formula = Fm";
cout<<"Charge = 3+";
cout<<"Mass = 257";
cout<<"Special = None";
}
else if (n== 101) //|| (Command == "mendelevium") || (Command == "Md"))
{
cout<<"Name = mendelevium";
cout<<"Number = 101";
cout<<"Group = 16";
cout<<"Period = 7";
cout<<"Formula = Md";
cout<<"Charge = 2+ \\ 3+";
cout<<"Mass = 258";
cout<<"Special = None";
}
else if (n == 102) //|| (Command == "nebelium") || (Command == "No"))
{
cout<<"Name = nebelium";
cout<<"Number = 102";
cout<<"Group = 17";
cout<<"Period = 7";
cout<<"Formula = No";
cout<<"Charge = 2+ \\ 3+";
cout<<"Mass = 259";
cout<<"Special = None";
}
else if (n == 103) //|| (Command == "lawrencium") || (Command == "Lr"))
{
cout<<"Name = lawrencium";
cout<<"Number = 103";
cout<<"Group = 18";
cout<<"Period = 7";
cout<<"Formula = Lr";
cout<<"Charge = 3+";
cout<<"Mass = 260";
cout<<"Special = None";
}               */
else
{
	cout<<"Pls enter correct number";

}
}
void show()
{
	in.x.ax=1;
	int86(0x33,&in,&out);
	in.x.ax=4;
	out.x.cx=100;
	out.x.dx=100;
	int86(0x33,&in,&out);
}
void hide()
{
	in.x.ax=2;
	int86(0x33,&in,&out);
}
void check(int *b,int *x,int *y)
{
	in.x.ax=3;
	int86(0x33,&in,&out);
	*b=out.x.bx;
	*x=out.x.cx;
	*y=out.x.dx;
}
void lines()
{
    //for vertical lines  with 33 difference
    setcolor(8);
    line(55,450,55,45);
    line(88,450,88,78);
    line(121,450,121,170);
    line(154,450,154,170);
    line(187,450,187,170);
    line(220,450,220,170);
    line(253,450,253,170);
    line(286,450,286,170);
    line(319,450,319,170);
    line(352,450,352,170);
    line(385,450,385,170);
    line(418,450,418,78);
    line(452,450,452,78);
    line(485,450,485,78);
    line(518,450,518,78);
    line(551,450,551,78);
    line(585,450,585,45);
    line(625,450,625,45);

    //for horizontal lines
    line(10,76,88,76);    line(420,76,625,76);
    line(10,122,88,122);  line(420,122,625,122);
    line(10,168,625,168);
    line(10,214,625,214);
    line(10,264,625,264);
    line(10,310,625,310);
    line(10,356,625,356);
    line(10,402,625,402);
}

void alkali_metals()
{
    settextstyle(0,HORIZ_DIR,1);outtextxy(16,42,"1");
    settextstyle(8,HORIZ_DIR,1.5);
    setcolor(12);
    outtextxy(22,50,"H");  outtextxy(22,80,"Li");  outtextxy(18,130,"Na");  outtextxy(22,180,"K");  outtextxy(18,230,"Rb");  outtextxy(18,280,"Cs");  outtextxy(18,320,"Fr");
}
void alkaline_earth_metals()
{
    settextstyle(8,HORIZ_DIR,1.5);
    setcolor(6);
    outtextxy(58,80,"Be");  outtextxy(58,130,"Mg");  outtextxy(58,180,"Ca");  outtextxy(58,230,"Sr");  outtextxy(58,280,"Ba");  outtextxy(58,320,"Ra");
}
void transition_metals()
{
    settextstyle(8,HORIZ_DIR,1.5);
    setcolor(2);
    outtextxy(93,180,"Sc");  outtextxy(93,230,"Y");  outtextxy(93,280,"La");  outtextxy(90,320,"Ac");

    outtextxy(125,180,"Ti");  outtextxy(125,230,"Zr");  outtextxy(125,280,"Hf");  outtextxy(125,320,"Rf");

    outtextxy(158,180,"V");  outtextxy(155,228,"Nb");  outtextxy(158,280,"Ta");  outtextxy(158,320,"Db");

    outtextxy(190,180,"Cr");  outtextxy(190,230,"Mo");  outtextxy(190,280,"W");   outtextxy(190,320,"Sg");

    outtextxy(222,180,"Mn");  outtextxy(222,230,"Tc");  outtextxy(222,280,"Re");  outtextxy(222,320,"Bh");

    outtextxy(255,180,"Fe");  outtextxy(255,230,"Ru");  outtextxy(255,280,"Os");  outtextxy(255,320,"Hs");

    outtextxy(290,180,"Co");  outtextxy(290,230,"Rh");  outtextxy(290,280,"Ir");  outtextxy(290,320,"Mt");

    outtextxy(325,180,"Ni");  outtextxy(325,230,"Pd");  outtextxy(325,280,"Pt");  outtextxy(325,320,"Ds");

    outtextxy(355,180,"Cu");  outtextxy(355,230,"Ag");  outtextxy(355,280,"Au");  outtextxy(355,320,"Rg");

    outtextxy(390,180,"Zn");  outtextxy(390,230,"Cd");  outtextxy(390,280,"Hg");  outtextxy(390,320,"Cn");
}

void non_metals()
{
    settextstyle(8,HORIZ_DIR,1.5);
    setcolor(5);
    outtextxy(465,80,"C");

    outtextxy(500,80,"N");   outtextxy(500,130,"P");

    outtextxy(535,80,"O");   outtextxy(535,130,"S");   outtextxy(525,180,"Se");

    halogens();
    noble_gases();
    metalloides();
    main_group_metals();
}

void halogens()
{
    settextstyle(8,HORIZ_DIR,1.5);
    setcolor(5);
    outtextxy(568,80,"F");  outtextxy(562,130,"Cl");  outtextxy(558,180,"Br");  outtextxy(565,230,"I");  outtextxy(558,280,"At");  outtextxy(558,320,"Ts");
}
void noble_gases()
{
    settextstyle(8,HORIZ_DIR,1.5);
    setcolor(5);
    outtextxy(590,50,"He");  outtextxy(590,80,"Ne");  outtextxy(590,130,"Ar");  outtextxy(590,180,"Kr");  outtextxy(590,230,"Xe");  outtextxy(590,280,"Rn");  outtextxy(590,320,"Og");
}

void metalloides()
{
    settextstyle(8,HORIZ_DIR,1.5);
    setcolor(14);
    outtextxy(424,80,"B");  outtextxy(456,130,"Si");  outtextxy(456,180,"Ge");  outtextxy(490,180,"As");  outtextxy(490,230,"Sb");  outtextxy(525,230,"Te");
}

void main_group_metals()
{
    settextstyle(8,HORIZ_DIR,1.5);
    setcolor(1);
    outtextxy(420,130,"Al");  outtextxy(423,180,"Ga");  outtextxy(423,230,"In");  outtextxy(423,280,"Tl");  outtextxy(420,320,"Nh");

    outtextxy(455,230,"Sn");  outtextxy(455,280,"Pb");  outtextxy(455,320,"Fl");

    outtextxy(490,280,"Bi");  outtextxy(490,320,"Mc");

    outtextxy(525,280,"Po");  outtextxy(525,320,"Lv");
}
void lanthanides()
{
    settextstyle(8,HORIZ_DIR,1.5);
    setcolor(4);
    outtextxy(125,360,"Ce");  outtextxy(160,360,"Pr");  outtextxy(190,360,"Nd");  outtextxy(223,360,"Pm");  outtextxy(256,360,"Sm");  outtextxy(288,360,"Eu");  outtextxy(322,360,"Gd");  outtextxy(358,360,"Tb");  outtextxy(390,360,"Dy");  outtextxy(420,360,"Ho");  outtextxy(453,360,"Er");  outtextxy(486,360,"Tm");  outtextxy(520,360,"Yb");  outtextxy(555,360,"Lu");
}
void actinides()
{
    settextstyle(8,HORIZ_DIR,1.5);
    setcolor(4);
    outtextxy(125,400,"Th");  outtextxy(160,400,"Pa");  outtextxy(195,400,"U");  outtextxy(223,400,"Np");  outtextxy(256,400,"Pu");  outtextxy(286,400,"Am");  outtextxy(322,400,"Cm");  outtextxy(358,400,"Bk");  outtextxy(390,400,"Cf");  outtextxy(420,400,"Es");  outtextxy(453,400,"Fm");  outtextxy(488,400,"Md");  outtextxy(520,400,"No");  outtextxy(560,400,"Lr");
}
void all()
{
    alkali_metals();
    alkaline_earth_metals();
    transition_metals();
    main_group_metals();
    metalloides();
    non_metals();
    lanthanides();
    actinides();
}

//shuffled elements
void s_alkali_metals()
{
    settextstyle(0,HORIZ_DIR,1);outtextxy(16,42,"1");
    settextstyle(8,HORIZ_DIR,1.5);
    setcolor(12);
    outtextxy(22,50,"Na");  outtextxy(22,80,"K");  outtextxy(18,130,"H");  outtextxy(22,180,"Cs");  outtextxy(18,230,"Li");  outtextxy(18,280,"Rb");  outtextxy(18,320,"Fr");
}
void s_alkaline_earth_metals()
{
    settextstyle(8,HORIZ_DIR,1.5);
    setcolor(6);
    outtextxy(58,80,"Ca");  outtextxy(58,130,"Ra");  outtextxy(58,180,"Be");  outtextxy(58,230,"Ba");  outtextxy(58,280,"Sr");  outtextxy(58,320,"Mg");
}
void s_transition_metals()
{
    settextstyle(8,HORIZ_DIR,1.5);
    setcolor(2);
    outtextxy(93,180,"La");  outtextxy(93,230,"Ac");  outtextxy(93,280,"Y");  outtextxy(90,320,"Sc");

    outtextxy(125,180,"Ti");  outtextxy(125,230,"Zr");  outtextxy(125,280,"Hf");  outtextxy(125,320,"Rf");

    outtextxy(158,180,"V");  outtextxy(155,228,"Nb");  outtextxy(158,280,"Ta");  outtextxy(158,320,"Db");

    outtextxy(190,180,"Cr");  outtextxy(190,230,"Mo");  outtextxy(190,280,"W");   outtextxy(190,320,"Sg");

    outtextxy(222,180,"Mn");  outtextxy(222,230,"Tc");  outtextxy(222,280,"Re");  outtextxy(222,320,"Bh");

    outtextxy(255,180,"Fe");  outtextxy(255,230,"Ru");  outtextxy(255,280,"Os");  outtextxy(255,320,"Hs");

    outtextxy(290,180,"Co");  outtextxy(290,230,"Rh");  outtextxy(290,280,"Ir");  outtextxy(290,320,"Mt");

    outtextxy(325,180,"Ni");  outtextxy(325,230,"Pd");  outtextxy(325,280,"Pt");  outtextxy(325,320,"Ds");

    outtextxy(355,180,"Cu");  outtextxy(355,230,"Ag");  outtextxy(355,280,"Au");  outtextxy(355,320,"Rg");

    outtextxy(390,180,"Zn");  outtextxy(390,230,"Cd");  outtextxy(390,280,"Hg");  outtextxy(390,320,"Cn");
}

void s_non_metals()
{
    settextstyle(8,HORIZ_DIR,1.5);
    setcolor(5);
    outtextxy(465,80,"O");

    outtextxy(500,80,"S");   outtextxy(500,130,"Se");

    outtextxy(535,80,"P");   outtextxy(535,130,"C");   outtextxy(525,180,"N");

    s_halogens();
    s_noble_gases();
    s_metalloides();
    s_main_group_metals();
}

void s_halogens()
{
    settextstyle(8,HORIZ_DIR,1.5);
    setcolor(5);
    outtextxy(568,80,"Br");  outtextxy(562,130,"I");  outtextxy(558,180,"F");  outtextxy(565,230,"Cl");  outtextxy(558,280,"Ts");  outtextxy(558,320,"At");
}
void s_noble_gases()
{
    settextstyle(8,HORIZ_DIR,1.5);
    setcolor(5);
    outtextxy(590,50,"Ne");  outtextxy(590,80,"Ar");  outtextxy(590,130,"He");  outtextxy(590,180,"Rn");  outtextxy(590,230,"Og");  outtextxy(590,280,"Kr");  outtextxy(590,320,"Xe");
}

void s_metalloides()
{
    settextstyle(8,HORIZ_DIR,1.5);
    setcolor(14);
    outtextxy(424,80,"B");  outtextxy(456,130,"Si");  outtextxy(456,180,"Ge");  outtextxy(490,180,"As");  outtextxy(490,230,"Sb");  outtextxy(525,230,"Te");
}

void s_main_group_metals()
{
    settextstyle(8,HORIZ_DIR,1.5);
    setcolor(1);
    outtextxy(420,130,"Pb");  outtextxy(423,180,"Sn");  outtextxy(423,230,"Nh");  outtextxy(423,280,"ln");  outtextxy(420,320,"Fl");

    outtextxy(455,230,"Al");  outtextxy(455,280,"Ga");  outtextxy(455,320,"Tl");

    outtextxy(490,280,"Mc");  outtextxy(490,320,"Po");

    outtextxy(525,280,"Lv");  outtextxy(525,320,"Bi");
}
void s_lanthanides()
{
    settextstyle(8,HORIZ_DIR,1.5);
    setcolor(4);
    outtextxy(125,360,"Nd");  outtextxy(160,360,"Pm");  outtextxy(190,360,"Ce");  outtextxy(223,360,"Pr");  outtextxy(256,360,"Gd");  outtextxy(288,360,"Tb");  outtextxy(322,360,"Sm");  outtextxy(358,360,"Eu");  outtextxy(390,360,"Tm");  outtextxy(420,360,"Er");  outtextxy(453,360,"Ho");  outtextxy(486,360,"Dy");  outtextxy(520,360,"Lu");  outtextxy(555,360,"Yb");
}
void s_actinides()
{
    settextstyle(8,HORIZ_DIR,1.5);
    setcolor(4);
    outtextxy(125,400,"U");  outtextxy(160,400,"Np");  outtextxy(195,400,"T");  outtextxy(223,400,"Pa");  outtextxy(256,400,"Cm");  outtextxy(286,400,"Bk");  outtextxy(322,400,"Pu");  outtextxy(358,400,"Am");  outtextxy(390,400,"Fm");  outtextxy(420,400,"Md");  outtextxy(453,400,"Cf");  outtextxy(488,400,"Es");  outtextxy(520,400,"Lr");  outtextxy(560,400,"No");
}
void s_all()
{
    s_alkali_metals();
    s_alkaline_earth_metals();
    s_transition_metals();
    s_main_group_metals();
    s_metalloides();
    s_non_metals();
    s_lanthanides();
    s_actinides();
}