#include <stdio.h>
#define N 100
#define M 50

int main()
{
	int i, result;
	char MainString[N];
	char SubString[M];
	char c;
	char *ms;
	char *ss;
	char *p=NULL;
	for(i=0; i<N; i++)
	{
		MainString[i]=NULL;
		if(i<M)
		{
			SubString[i]=NULL;
		}
	}
	
	printf("Введите строку:\n");
	for(i=0; i<N; i++)
	{
		scanf("%c",&c);
		if(c=='\n')
		{
			break;			
		}
		else
		{
			MainString[i]=c;
		}
		
	}
	printf("Введите подстроку:\n");
	for(i=0; i<M; i++)
	{
		scanf("%c",&c);
		if(c=='\n')
		{
			break;			
		}
		else
		{
			SubString[i]=c;
		}
		
	}

	ms=MainString;
	ss=SubString;
	while(*ms!=NULL&&*ms!='\n')
	{
		if(*ms==*ss)
		{
			result=1;
			p=ms;
			while(*ss!=NULL)
			{
				if(*p!=*ss)
				{
					result=0;
					ss=SubString;
					p=NULL;
					break;
				}
				else
				{
					p++;
					ss++;
				}
			}
			if(result)
			{
				p=ms;
				break;
			}
		}
		ms++;
	}
	printf("Указатель на подстроку в строке:%p\n", p);
	if(p!=NULL)
		printf("Значение по этому указателю:%c\n", *p);
}
