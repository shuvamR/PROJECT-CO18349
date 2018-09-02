#include<stdio.h>
void main()
{
int a,b,c,d,e,f,g,h,i,j,k,t=0;
   printf("\tThe instructions of the game are:\n");
   printf("\tI.You have to make the order of the fastest finger first in order as asked by the question in numbers i.e 1234\n");
   printf("\tII.After that if you suceed to give correct order of the fastest finger first then you will eligible for HOT SEAT\n");
   printf("\tIII.Then You have to put the numbers as answer to the question when asked to you. So Best Of Luck!!!\n");
	printf("\tSo the question for fastest fingers first is:\n");
	printf("\tArrange the body parts from top to bottom\n");
	printf("\t\t1.Thigh \n ");
	printf("\t\t2.Shoulder \n");
	printf("\t\t3.Chin \n");
	printf("\t\t4.Abdomen \n");
	scanf("%d",&a);
		switch(a)
		{
			case 3241:
				printf("\tYou are selected for to play the next level\n");
				printf("\tGet ready to play 'Kaun Banega Crorepati'!!\n");
                                 t=1;
			break;
			default:
				printf("\tBetter luck next time\n");
		}

if(t==1)
{
        printf("~~ Question for Rs 1000 is on your screen\n");
	printf("\tQues:For which of the following disciplines is Nobel Prize is awarded ?:\n  \t\tAnd your options are-\n ");
	printf("\t\t1. Physics & Chemistry\n");
        printf("\t\t2. Physiology or Medicine \n");
        printf("\t\t3. Literature, Peace and Economics\n");
        printf("\t\t4. All of the above\n");
        scanf("%d",&b);
                  switch(b)
                  {
                        case 4:
                                printf("~ Congratulations!!! you won Rs 1K\n");
                                t=2;
                         break;
                         default:
                         printf("\tSorry!!! You won Nothing\n");
                }
}
if(t==2)
{ 
       printf("~~ Question for Rs 5K is on your screen\n");
       printf("\tQues:Name of the Nokia's mobile phone Operating System\n \t\tAnd your options are-\n ");
       printf("\t\t1. Android\n");
       printf("\t\t2. Symbian\n");
       printf("\t\t3. JAVA\n");
       printf("\t\t4. Windows\n");
       scanf("%d",&c);
		switch(c)
                {
                      case 2:
                               printf("~ Congratulations!!! You won Rs 5K\n");
                               t=3;
                       break;
		       default:
                       printf("\tSorry!!! You won Nothing\n");
                }
}
if(t==3)
{
       printf("~~ Question for Rs 25K is on your screen\n ");                      
       printf("\tQues:'Sensex' is related to\n \t\tAnd your options are-\n ");
       printf("\t\t1. BSE\n");
       printf("\t\t2. NSE\n");
       printf("\t\t3. RBI \n");
       printf("\t\t4. SEBI\n");
       scanf("%d",&d);
                switch(d)
                {
                      case 1:
                               printf("~ Congratulations!!! You won Rs25K\n");
                               t=4;
                       break;
                       default:
                       printf("\tSorry!!! You won Nothing\n");
                }
}
if(t==4)
{
       printf("~~ Question for Rs 50K is on your screen\n");                      
       printf("\tQues:Wal-Mart in India is associated with\n \t\tAnd your options are-\n ");
       printf("\t\t1. Big Bazaar\n");
       printf("\t\t2. Spencer's Retail\n");
       printf("\t\t3. Easy Day Stores\n");
       printf("\t\t4. Spur Retail\n");
       scanf("%d",&e);
                switch(e)
                {
                      case 3:
                               printf("~ Congratulations!!! You won 50K Rs\n");
                               printf(" You have Cleared the 1st level of the game");
                               t=5;
                       break;
                       default:
                       printf("\tSorry!!! You won Nothing\n");
                }       
}
if(t==5)
{
       printf("~~ Question for Rs 1Lakh is on your screen\n"); 
       printf("\tQues:FFC Stands for\n \t\tAnd your options are-\n ");
       printf("\t\t1. Finish Finance Corporation\n");
       printf("\t\t2. Film Finance Corporation\n");
       printf("\t\t3. Fan Football Club\n");
       printf("\t\t4. None of the above\n");
       scanf("%d",&f);
                switch(f)
                {
                      case 2:
                               printf("~ Congratulations!!! You won Rs 1lakh\n");
                               t=6;
                       break;
                       default:
                       printf("\tSorry!!! your answer was wrong you won only Rs 50K. Thanks For Participating\n");
                }       
}
if(t==6)
{
       printf("~~ Question for Rs10Lakh is on your screen\n");                      
       printf("\tQues:Which was the India's first scheduled Airline?\n \t\tAnd your options are-\n ");
       printf("\t\t1. Air India\n");
       printf("\t\t2. Tata Airlines\n");
       printf("\t\t3. Indian Airlines\n");
       printf("\t\t4. Air Birla\n");
       scanf("%d",&g);
                switch(g)
                {
                      case 2:
                               printf("~ Congratulations!!! You won 10Lakh Rs\n");
                               t=7;                      
		       break;
                       default:
                       printf("\tSorry!!! your answer was wrong you won only 50K Rs. Thanks For Participating\n");
                }       
}
if(t==7)
{
       printf("~~ Question for Rs50Lakh is on your screen\n");
       printf("\tQues:Which Political Party does Sri Ajit Singh represents?\n \t\tAnd your options are-\n ");
       printf("\t\t1. Rashtriya Lok Dal\n");
       printf("\t\t2. Samta Party\n");
       printf("\t\t3. Samajwadi Party\n");
       printf("\t\t4. Jan Lok Dal\n");
       scanf("%d",&h);
                switch(h)
                {
                      case 1:
                               printf("~ Congratulations!!! You won 50Lakh Rs\n");
                               t=8;
                       break;
                       default:
                       printf("\tSorry!!! your answer was wrong you won only 50K Rs. Thanks For Participating\n");
                }       
}
if(t==8)
{
       printf("~~ Question for Rs1Crore is on your screen\n");
       printf("\tQues:Mahatma Gandhi Rural Employment Guarentee Act' provides employment guarantee for how many days per year?\n \t\tAnd your options are-\n ");
       printf("\t\t1. 120\n");
       printf("\t\t2. 100\n");
       printf("\t\t3. 180\n");
       printf("\t\t4. 150\n");
       scanf("%d",&i);
                switch(i)
                {
                      case 2:
                               printf("~ Congratulations!!! You won 1Crore Rs .\n");
                               printf("You have cleared the 2nd level of the game.\n ");
                               t=9;
                       break;
                       default:
                       printf("\tSorry!!! your answer was wrong you won only 50K Rs. Thanks For Participating\n");
                }       
}
if(t==9)
{
       printf("~~ Question for Rs 5Crores is on your screen\n");
       printf("\tQues:Mahendra Singh Dhoni is the______ captain of Indian Cricket Team\n \t\tAnd your options are-\n ");
       printf("\t\t1. 41st\n");
       printf("\t\t2. 35th\n");
       printf("\t\t3. 42nd\n");
       printf("\t\t4. 34th\n");
       scanf("%d",&j);
                switch(j)
                {
                      case 4:
                               printf("~ Congratulations!!! You won 5Crores Rs\n");
                               t=10;
                       break;
                       default:
                       printf("\tSorry!!! your answer was wrong you won only 1Crore Rs. Thanks For Participating\n");
                }       
}
if(t==10)
{
       printf("~~ Question for Rs 7Crores is on your screen\n");
       printf("\tQues:Who among following ordered 'Jallian Wala Bagh Massacre'?\n \t\tAnd your options are-\n ");
       printf("\t\t1. Lord Mountbatten\n");
       printf("\t\t2. John Simon\n");
       printf("\t\t3. Reginald Dyer\n");
       printf("\t\t4. N.D.K MacEven\n");
       scanf("%d",&k);
                switch(k)
                {
                      case 3:
                               printf("Congratulations!!! You won 7Crores Rs\n");
                               printf("Congratulations!!! You won the game\n");
                               printf("You are now the owner of 7Crores.........\n ");
                       break;
                       default:
                       printf("\tSorry!!! your answer was wrong you won only 1Crore Rs. Thanks For Participating\n");
                }       
}

}

