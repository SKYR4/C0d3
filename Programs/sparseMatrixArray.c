#include<stdio.h>
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
			e+=1;//Keeping the count on non-zero elements
		}//Inputing the element in the array
	int element[e];
	int row[e];
	int column[e];
	e=0;
	for(i=0;i<r;i++)
		for( j=0;j<c;j++)
			if(mat[i][j]!=0)
			{
				element[e]=mat[i][j];//Transferring the non-zero element from array into the element array
				row[e]=i;//Putting the row index number into the row array
				column[e]=j;//Putting the column index number into the row array
				e+=1;//Updating the index
			}
	printf("\nThe matrix is\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%d ",mat[i][j]);
		printf("\n");
	}
	i=0;
	printf("\nThe sparse matrix is\n");
	printf("\nDATA\tROW\tCOLUMN\n");
	while(i<e)
		{
			printf("%d\t%d\t%d\n",element[i],row[i],column[i]);
			i+=1;
		}//Displaying the sparse matrix
}
