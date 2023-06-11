#include<stdio.h>
double trimMean(int* arr, int arrSize){
    int sum=0,max=arr[0],min=arr[0],new_sum=0;

for (int i=0;i<arrSize;i++)
sum+=arr[i];

for(int i=1;i<arrSize;i++)
{
if(arr[i]> max )
    max=arr[i];
}
for(int i=1;i<arrSize;i++)
{
    if(arr[i]< min)
    min=arr[i];
}
new_sum=sum-max-min;
return new_sum/(arrSize-2);

}

int main(){
    double avgg=0;
     int arr[] = {1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,3};
     avgg=trimMean(arr,20);
     printf("The average is %lf",avgg);
     return 0;


}