#include <stdio.h>

int main(void)
{
	int num, i, j, temp;
	int size;
	int box[100];
	scanf("%d %d", &size, &num);
	for(i=0; i<size; i++)
	{
		scanf("%d", &box[i]);
	}
	if(num==1)
	{
		for(i=0; i<size-1; i++)
		{
			for(j=0; j<size-i-1; j++)
			{
				if(box[j]<box[j+1])
				{
					temp = box[j];
					box[j] = box[j+1];
					box[j+1] = temp;
				}
			}
		}
	}
	
	else if(num==2)
	{
		for(i=0; i<size-1; i++)
		{
			if(box[i]>box[i+1])
			{
				box[i] = temp;
				box[i] = box[i+1];
				box[i+1] = temp;
			}
		}
	}
	
	else
	{
		printf("Wrong Input!");
		return 0;
	}
	
	for(i=0; i<size; i++)
	{
		printf("%d ", box[i]);
	}
	
return 0;
}


