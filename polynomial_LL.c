#include<stdio.h>
#include<stdlib.h>
struct node
{
	int coef;
	int exp;
	struct node*link;
}*phead,*qhead,*rhead,*shead;


void createList(struct node*header)
{
	int n,coef,exp;
	struct node*ptr,*newnode;
	printf("Enter the number of terms\n");
	scanf("%d",&n);
	ptr=header;
	for(int i=0;i<n;i++)
	{
		printf("Enter the coefficient and exponent\n");
		scanf("%d%d",&coef,&exp);
		newnode=(struct node*)malloc(sizeof(struct node));
		newnode->coef=coef;
		newnode->exp=exp;
		newnode->link=NULL;
		ptr->link=newnode;
		ptr=ptr->link;
		
	}
	
}


void display(struct node*header)
{
	struct node*ptr;
	if(header==NULL)
	{
		printf("List empty\n");
		return;
	}
	else
	{
		ptr=header->link;
		while(ptr->link!=NULL)
		{
			printf("%dx^%d+",ptr->coef,ptr->exp);
			ptr=ptr->link;
		}
		printf("%dx^%d",ptr->coef,ptr->exp);
		printf("\n");
		
	}
}

void sum()
{
	struct node*pptr,*qptr,*rptr,*newnode;
	pptr=phead->link;
	qptr=qhead->link;
	rptr=rhead;
	while(pptr!=NULL&&qptr!=NULL)
	{
		if(pptr->exp==qptr->exp)
		{
			newnode=(struct node*)malloc(sizeof(struct node));
			newnode->exp=pptr->exp;
			newnode->coef=pptr->coef+qptr->coef;
			newnode->link=NULL;
			rptr->link=newnode;
			rptr=newnode;
			pptr=pptr->link;
			qptr=qptr->link;
		}
		else if(pptr->exp>qptr->exp)
		{
			newnode=(struct node*)malloc(sizeof(struct node));
			newnode->exp=pptr->exp;
			newnode->coef=pptr->coef;
			newnode->link=NULL;
			rptr->link=newnode;
			rptr=newnode;
			pptr=pptr->link;
		}
		else
		{
			newnode=(struct node*)malloc(sizeof(struct node));
			newnode->exp=qptr->exp;
			newnode->coef=qptr->coef;
			newnode->link=NULL;
			rptr->link=newnode;
			rptr=newnode;
			qptr=qptr->link;
		}
		
	}
	while(pptr!=NULL)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		newnode->exp=pptr->exp;
		newnode->coef=pptr->coef;
		newnode->link=NULL;
		rptr->link=newnode;
		rptr=newnode;
		pptr=pptr->link;
	}
	while(qptr!=NULL)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		newnode->exp=qptr->exp;
		newnode->coef=qptr->coef;
		newnode->link=NULL;
		rptr->link=newnode;
		rptr=newnode;
		qptr=qptr->link;
	}
	
}


void mult()
{
	struct node*pptr,*qptr,*sptr,*newnode,*sptr1,*temp;
	int x,c;
	shead->link=NULL;
	if(phead==NULL||qhead==NULL)
	{
		printf("Cannot find product\n");
		return;
	}
	pptr=phead;
	qptr=qhead;
	while(pptr!=NULL)
	{
		pptr=pptr->link;
		while(qptr!=NULL)
		{
			qptr=qhead->link;
			c=pptr->coef*qptr->coef;
			x=pptr->exp+qptr->exp;
			sptr=shead;
			while(sptr->link!=NULL||sptr->exp>x)
			{
				sptr1=sptr;
				sptr=sptr->link;
				if(sptr->exp==x)
				{
					sptr->coef=sptr->coef+c;
				}
				
			}
			if(sptr->link==NULL)
			{
				newnode=(struct node*)malloc(sizeof(struct node));
				newnode->link=NULL;
				newnode->exp=x;
				newnode->coef=c;
				sptr->link=newnode;
			}
			else if(sptr->exp>x)
			{
				newnode=(struct node*)malloc(sizeof(struct node));
				newnode->coef=c;
				newnode->exp=x;
				newnode->link=sptr;
				sptr1->link=newnode;
			}
		}
	}
}
			
					
			
			
	/*int c,x;
	temp=NULL;
	pptr=phead;
	sptr=shead;
	while(pptr!=NULL)
	{
		qptr=qhead;
		while(qhead!=NULL)
		{
			c=pptr->coef*qptr->coef;
			x=pptr->exp+qptr->exp;
			newnode=(struct node*)malloc(sizeof(struct node));
			newnode->exp=x;
			newnode->coef=c;
			newnode->link=NULL;
			sptr->link=newnode;
			sptr=newnode;
			qptr=qptr->link;
		}
		pptr=pptr->link;
	}
	
	sptr=shead;
	while(sptr->link!=NULL)
	{
		if(sptr->exp==sptr->link->exp)
		{
			sptr->coef=sptr->coef+sptr->link->coef;
			temp=sptr->link;
			sptr->link=sptr->link->link;
			free(temp);
			
		}
		else
		{
			sptr=sptr->link;
		}
	}}*/

		
	
			
int main()
{
	phead=(struct node*)malloc(sizeof(struct node));
	qhead=(struct node*)malloc(sizeof(struct node));
	rhead=(struct node*)malloc(sizeof(struct node));
	shead=(struct node*)malloc(sizeof(struct node));
	createList(phead);
	createList(qhead);
	printf("First polynomial\n");
	display(phead);
	printf("Second polynomial\n");
	display(qhead);
	printf("Result polynomials:\n");
	sum();
	printf("Sum polynomial\n");
	display(rhead);
	mult();
	printf("Product poynomial\n");
	display(shead);
	
}
