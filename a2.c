#include<stdio.h>

void main()
{
int arr[100],i,num,key,high,found,mid,low;
printf("enter the number of elements ");
scanf("%d",&num);
printf("enter the  elements ");
for(i=0;i<num;i++)
scanf("%d",&arr[i]);
printf("enter the key elements ");
scanf("%d",&key);
found=0;
low=0;
high=num-1;
while (low<=high)
{
   mid=(low+high)/2;
   if(arr[mid]==key)
   {
   found=1;
   break;
   }
   else if(key<arr[mid])
   {
    high=mid-1;

   }
   else
   {
    low=mid+1;
   }

}
if (found)
printf("key elemets found at position %d ",mid+1);
else
printf("key elemets not found at position ");
}
  