// Linear Search

#include<stdio.h>
int main(){
int n,i,key,found=0;
printf("ENTER THE NUMBER OF ELEMENTS \n");
scanf("%d",&n);
int arr[n];
printf("ENTER %d ELEMENTS : \n",n);
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("ENTER THE ELEMENT TO SEARCH \n");
scanf("%d",&key);
for(i=0;i<n;i++){
if(arr[i]==key){
printf("ELEMENT %d FOUND AT POSITION %d\n",key,i+1);
found=1;
break;
}
}
if (found==0){
printf("ELEMENT %d NOT FOUND IN THE ARRAY \n",key);
}
return 0;
}

/*
ENTER THE NUMBER OF ELEMENTS 
5
ENTER 5 ELEMENTS : 
1
3
5
7
9
ENTER THE ELEMENT TO SEARCH 
3
ELEMENT 3 FOUND AT POSITION 2


=== Code Execution Successful ===
*/