#include<stdio.h>

main()
{
int a[10];
int n,i,sum=0;

  printf("enter count array size :");
  scanf("%d",&n);
 
  	for(i=0; i<n; i++){
  	printf("enter count  :");
  	scanf("%d",&a[i]);
  }
 
       for(i=0; i<n; i++){
        printf(" %d",a[i]);
         sum +=a[i];
  }
          printf("\nsum = %d",sum);
          printf("\navg = %d",sum/n);
}
