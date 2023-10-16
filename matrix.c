#include<stdio.h>

struct element
{
	int row;
	int column;
	int value;
}mat1[100],mat2[100],sum[100],trans[100];

void conversion(struct element arr[],int mat[][],int r,int c)
{	
	int i,j;
	arr[0].row=r;
	arr[0].column=c;
	int k=1;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(mat[i][j]!=0)
			{
				arr[k].row=i;
				arr[k].column=j;
				arr[k].value=mat[i][j];
				k++;
			}
		}
	}
				
	arr[0].value=k;
	
	
}


void display(struct element arr[],int n)
{
	printf("Displaying the elements\n);
	for(i=0;i<n;i++)
		printf("<%d,%d,%d> ",arr[i].row,arr[i].column,arr[i].value);
		
	printf(\n");
	
}
	


void transpose(struct element arr[],int n)
{
	int temp;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[i].column>arr[i+1].column)
			{
				temp=arr[i].column;
				arr[i].column=arr[i+1].column;
				arr[i+1].column=temp;
				
				
				temp=arr[i].row;
				arr[i].row=arr[i+1].row;
				arr[i+1].row=temp;
				
				
				temp=arr[i].value;
				arr[i].value=arr[i+1].value;
				arr[i+1].value=temp;
				
				
			}
		}
	}
	for(i=0;i<n;i++)
	{
		arr[i].row=trans[i].column;
		arr[i].column=trans[i].row;
		arr[i].value=trans[i].value;
		
	}
	
	
	
}


int main()
{
	int r,c,i,j;
	printf("Enter the dimensions of first matrix\n");
	scanf("%d%d",&r,&c);
	printf("Enter the first matrix\n");
	for(i=0;i<r;i++)
	{
		for j=0;j<c;j++)
		{
			scanf("%d",&mat[i][j]);
			
		}
		
	}
	



	
