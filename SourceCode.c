/*BG1221 Section 642  Bike renting system
  6225201 Methini Ma / 6218471 Yenhsin Chen*/

#include<stdio.h>


int main()
{
	int sbike=0,dbike=0,type=0;
	int mi,p1=0,p2=0,overall=0,sum1=0,sum2=0;
	
	printf("Bike 1 = single bike , Bike 2 = Double bike\n");
	printf("Enter -1 for manufacturer¡¦s code to END the program\n");
	while(type!=-1)
	{
	printf("\nEnter the type of bike 1 or 2 : ");
	scanf("%d",&type);
	if(type==-1)
	{
		break;
	}
	printf("Enter the minutes the bike used : ");
	scanf("%d",&mi);
	
	switch(type)
	{
	  case 1:
		  if(mi<30 && mi>0)
	      {
			printf("It's in time , it's free!\n");
			p1=0;

		  }
		if(mi>=30 && mi<120)
		{
		    p1=(mi/30)*10;
			printf("The price is %d\n",p1);
     	}
		if(mi>=120 && mi <240)
		{
			p1=(mi/30)*20;
			printf("The price is %d\n",p1);
		}
		if(mi>=240)
		{
			p1=(mi/30)*40;
			printf("The price is %d\n",p1);
		
		}
		  sbike++;
		  sum1=sum1+p1;
		  break;

	  case 2:
		    if(mi<30 && mi>0)
	      {
			printf("It's in time , it's free!\n");
			p2=0;

		  }
		if(mi>=30 && mi<120)
		{
		    p2=(mi/30)*16;
			printf("The price is %d\n",p2);
     	}
		if(mi>=120 && mi <240)
		{
			p2=(mi/30)*38;
			printf("The price is %d\n",p2);
		}
		if(mi>=240)
		{
			p2=(mi/30)*78;
			printf("The price is %d\n",p2);
		
		}
		  dbike++;
		  sum2=sum2+p2;
		  break;
	 
	  default:
		  printf("Invalid number is entered !\n");
    }



	}
	overall=sum1+sum2;
	printf("\nThe number of single bikes are rented:%d\n",sbike);
	printf("The number of double bikes are rented:%d\n",dbike);
	printf("The total amount is %d\n",overall);

	return 0;



}