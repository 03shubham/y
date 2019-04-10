 #include<stdio.h>
 #include<conio.h>
 int main()
 {
 	float a,b,c,y,z,PF;
 	printf("Enter the value of Page Fault service time in ms(not modified)   :");
 	scanf("%f",&b);
 	printf("\nEnter the value of Page Fault service time in ms(modified)  :");
 	scanf("%f",&a);
 	printf("\nEnter the Memory Access time in ns :");
 	scanf("%f",&c);
 	printf("\nEnter the Effective Time Access in ns  :");
 	scanf("%f",&y);
 	printf("\nEnter the Page Replace Modified percentage  :");
 	scanf("%f",&z);
 	PF=(y-c)/(((z*a)+(1-z)*b)+c);
 	printf("The Maximum Acceptable Page Fault Rate is %f  :",PF);

 }