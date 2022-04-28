#include<stdio.h>
int main()
{
	int Marks=0;
	printf("Enter your marks : ");
	scanf("%d,Marks");
	if(Marks>=85 && Marks<=100)
	{ printf("Grade A");
	}
	else if(Marks>=70 && Marks<85)
	{ printf("Grade B");
	}
	else if(Marks>=55 && Marks<70)
	{ printf("Grade C");
	}
	else if(Marks>=40 && Marks<55)
	{ printf("Grade D");
	}
		else if(Marks<40)
	{ printf("Grade F");
	}
	return 0;
}