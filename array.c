#include<stdio.h>
int main()
{
	int row,col, arr[3][3], Sum=0;
  //Logic to read matrix 
  for(row=0; row<3; row++) // rows
  {
    for(col=0; col<3; col++) //columns
    {
       printf("Enter matrix number[%d][%d]:", row, col);
       scanf("%d", &arr[row][col]);
    }
  }
  //Logic to print matrix
  printf("The 3 X 3 matrix:\n");
  for(row=0; row<3; row++) // rows
  {
    for(col=0; col<3; col++) //columns
    {
       printf("%d ", arr[row][col]);
    }
    printf("\n");
  }
{
	 for(row = 0; row <3; row++)
  	{
   		for(col= 0;col< 3;col++)
    	{
      		scanf("%d", &arr[row][col]);
    	}
  	}
   	  
 	{
 	 for(row = 0; row<3; row++)
  	{
   		Sum = Sum + arr[row][row];
  	}
 
 	printf("\n The Sum of Diagonal Elements of a Matrix =  %d", Sum );

 	return 0;	
	 }
	
}

}
  
