#include"stdio.h"
#include"conio.h"
#include"math.h"
int main()
{
	int n,i,min ;
	printf(" nhap n =");
	scanf("%d",&n);
	
    int ary[n];
	for(i =0;i<n;i++)
	{
		printf(" nhap pt =");
		scanf("%d",&ary[i]);
	}
	
	int dem=0,max_dem=0;
	for(i=0;i<n;i++)
	{
		if(ary[i]>0)
		{
			dem+=ary[i];
			if(dem>max_dem)
			max_dem=dem;
		}
		else
		dem=0;
	}
	printf(" Tong lon nhat cua so duong lien tiep la %d",max_dem);
		
}		
