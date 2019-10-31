#include<stdio.h>
#include<stdlib.h>
struct node
{
	int element;
	int row_index;
	int column_index;
	struct node *link;
};//Creating Structure
struct node *p,*start=NULL,*end;
struct node *createNode()
{
	struct node *p= (struct node *)malloc(sizeof(struct node));
	p->link=NULL;
	return p;
}//Creating a node
int main()
{
	int r,c,i,j,e=0;
	printf("\nEnter the size of the matrix\n");
	scanf("%d%d",&r,&c);//Inputing the size of matrix
	int mat[r][c];//Creating an array
	printf("\nEnter the elements of the matrix\n");
	for(i=0;i<r;i++)
		for( j=0;j<c;j++)
		{
			scanf("%d",&mat[i][j]);
			if(mat[i][j]!=0)
			{
				p=createNode();
				p->element=mat[i][j];//Transferring the value from array into the node
				p->row_index=i;//Transferring the value from array into the node
				p->column_index=j;//Transferring the value from array into the node
				if(start==NULL)
					start=p;
				else
					end->link=p;
				end=p;
				e+=1;//Keeping the count on non-zero elements
			}
		}//Inputing the element in the array
	printf("\nThe matrix is\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%d ",mat[i][j]);
		printf("\n");
	}
	printf("\nThe sparse matrix is\n");
	printf("\nDATA\tROW\tCOLUMN\n");
	struct node *temp=start;
	i=0;
	while(i<=e)
		{
			printf("%d\t%d\t%d\n",temp->element,temp->row_index,temp->column_index);
			temp=temp->link;
			i+=1;
		}//Displaying the sparse matrix
}
