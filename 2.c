#include<stdio.h>

get(int a[],int n)
 { 
    int i;
    for(i=0; i<n; i++)
    {
         
        printf("%d ",a[i]);
         
    }
 	
 }


int main()
{
    int a[100],i,n,index,new1;
   
    printf("Enter size of the array : ");
    scanf("%d", &n);
 
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    
	printf("Enter index should be less than %d:",n);
    scanf("%d",&index);

printf("enter 1 for insertion, 2 for deletion");
scanf("%d",&k);
if(k==1)
{
insert()
{   
 if(index<n)
    {
 
     printf("Enter new element : ");
     scanf("%d",&new1);
    
     printf("before  insertion :");
   get(a,n);
     a[index]=new1;
    printf("\nafter   insertion :");
get(a,n);
    }
    return 0;
} 
}}
if(k==2)
{
deletion()
{
  if(index<=n && index>0)
    {
 
    printf("\nbefore deletion  :");
 
     	get(a,n);
 
        for(i=index-1; i<n-1; i++)
        {
         a[i]=a[i+1];
           
        }
    
        
        printf("\nafter   deletion :");
        
		get(a,n-1);
    }
    else
            printf("\ninvalid input");
 
    return 0;
} 

}
}

