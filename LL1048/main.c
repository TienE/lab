#include <stdio.h>
#include <stdlib.h>

int cArr[1000];
int len;

int main()
{
	int i;
	int count = 0;
	int num;//����3 7
	int temp;
	scanf("%d",&len);
	scanf("%d",&num);

	for(i=0;i<len;i++)
		cArr[i] = 1;


	for(i=0;i<len;i++)
	{
		//�ڶ����б���
		if(cArr[i]==1)
		{
			//��3 ���� �˳�
			if(++count == 3)
			{
				cArr[i] = 0;
				count = 0;
			}
		}
		
	
	
		if(i==len-1)
			 i = -1;
	}	

	return 0;
}