#include <stdio.h>
#include <stdlib.h>



int main() {
	
	
		int x,i,sonuc;
	
	i=1;
	sonuc=1;
	
	printf("lutfen hesaplanmasini istediginiz bir sayi giriniz:\n");
	scanf("%d",&x);
	printf("\n\n");
	
	for(i=1;i<=x;i++)
	{
		sonuc=sonuc*i;
	}
	
	printf("girdiginiz degerin faktoriyeli= %d\n\n\n",sonuc);
	
	
	
	
	
	getch(0);
	return 0;
}
