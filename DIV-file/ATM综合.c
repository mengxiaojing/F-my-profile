/* Note:Your choice is C IDE */
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
//��������
void f1();
void f2();
void f3();
void f4();


//ȫ�ֱ���
int Money=0;

//ȡ���
void f1()
{
	int n;
	printf("\t�ṩ��ȡ����ѡ��\n");
	printf("\t1.100\n");
	printf("\t2.200\n");
	printf("\t3.500\n");
	printf("\t4.1000\n");
	printf("\t0.�˳�\n");
	
	printf("������ȡ����:");
	scanf("%d",&n);
	
	switch(n)
	{
		case 1:if(Money>=100)
	        	{
	        		printf("ȡ����Ϊ100Ԫ\n");
	        		Money-=100;
	        	}
	        	else
	        	{
	        		printf("����\n");	        		
	        		}
	        	break;
	    case 2:if(Money>=200)
	        	{
	        		printf("ȡ����Ϊ200Ԫ\n");
	        		Money-=200;
	        	}
	        	else
	        	{
	        		printf("����\n");	        		
	        		}
	        	break;
	    case 3:if(Money>=500)
	        	{
	        		printf("ȡ����Ϊ500Ԫ\n");
	        		Money-=500;
	        	}
	        	else
	        	{
	        		printf("����\n");	        		
	        		}
	        	break;
	    case 4:if(Money>=1000)
	        	{
	        		printf("ȡ����Ϊ1000Ԫ\n");
	        		Money-=1000;
	        	}
	        	else
	        	{
	        		printf("����\n");	        		
	        		}
	        	break;
	     case 0:exit(0);break;
	     default :printf("�������\n");    	    	
	        	
	        	
	        	
	        	
	        	
	        	
	        	
	}
		
}

//����
void f2()
{
	int je;
	printf("����������:");
	scanf("%d",&je);
	Money+=je;
	
}
//��ѯ����
void f3()
{
	printf("��ǰ���������%dԪ\n",Money);
}

//ת��
void f4()
{
	int je;
	printf("������ת�ʽ��:");
	scanf("%d",&je);
	if(je>Money)
	{
		printf("��������\n");
		}
	else
	{
		printf("ת�ʳɹ�\n");
		Money-=je;
		}
	}


//ATM��
void main()
{
	//�������
	char name[100];
	char password[100];
	int n;
	int i;
	//ѭ������������֤
	for(i=0;i<3;i++)
	{
		//�����ʻ�������
		printf("�������ʻ�:");
		scanf("%s",name);
		printf("����������:");
		scanf("%s",password);
		//�ж�
		if(strcmp(name,"zhangsan")==0&&strcmp(password,"abcdef")==0)
		{
			//ѭ��
			while(1)
			{
				//�������
				printf("\n\n\t\t====ATM������ϵͳ=====\n");
				printf("\t\t1.ȡ��\n");
				printf("\t\t2.���\n");
				printf("\t\t3.��ѯ\n");
				printf("\t\t4.ת��\n");
				printf("\t\t0.�˳�\n");
				//������
				printf("��������:");
				scanf("%d",&n);
				//�ж�
				switch(n)
				{
					case 1:f1();break;
					case 2:f2();break;
					case 3:f3();break;
					case 4:f4();break;
					case 0:exit(0);break;
					default :printf("��������,����������\n");
					
					}
				
			}
			
			
		}		
		else
		{
			printf("�ʻ������벻��ȷ,����������,����%d�λ���\n",2-i);
			
			}
		
		
		
		
	}
	
    
}