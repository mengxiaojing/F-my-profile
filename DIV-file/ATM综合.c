/* Note:Your choice is C IDE */
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
//声明函数
void f1();
void f2();
void f3();
void f4();


//全局变量
int Money=0;

//取款函数
void f1()
{
	int n;
	printf("\t提供的取款金额选项\n");
	printf("\t1.100\n");
	printf("\t2.200\n");
	printf("\t3.500\n");
	printf("\t4.1000\n");
	printf("\t0.退出\n");
	
	printf("请输入取款编号:");
	scanf("%d",&n);
	
	switch(n)
	{
		case 1:if(Money>=100)
	        	{
	        		printf("取款金额为100元\n");
	        		Money-=100;
	        	}
	        	else
	        	{
	        		printf("余额不足\n");	        		
	        		}
	        	break;
	    case 2:if(Money>=200)
	        	{
	        		printf("取款金额为200元\n");
	        		Money-=200;
	        	}
	        	else
	        	{
	        		printf("余额不足\n");	        		
	        		}
	        	break;
	    case 3:if(Money>=500)
	        	{
	        		printf("取款金额为500元\n");
	        		Money-=500;
	        	}
	        	else
	        	{
	        		printf("余额不足\n");	        		
	        		}
	        	break;
	    case 4:if(Money>=1000)
	        	{
	        		printf("取款金额为1000元\n");
	        		Money-=1000;
	        	}
	        	else
	        	{
	        		printf("余额不足\n");	        		
	        		}
	        	break;
	     case 0:exit(0);break;
	     default :printf("输入错误\n");    	    	
	        	
	        	
	        	
	        	
	        	
	        	
	        	
	}
		
}

//存款函数
void f2()
{
	int je;
	printf("请输入存款金额:");
	scanf("%d",&je);
	Money+=je;
	
}
//查询函数
void f3()
{
	printf("当前卡内余额是%d元\n",Money);
}

//转帐
void f4()
{
	int je;
	printf("请输入转帐金额:");
	scanf("%d",&je);
	if(je>Money)
	{
		printf("卡内余额不足\n");
		}
	else
	{
		printf("转帐成功\n");
		Money-=je;
		}
	}


//ATM机
void main()
{
	//定义变量
	char name[100];
	char password[100];
	int n;
	int i;
	//循环输入密码验证
	for(i=0;i<3;i++)
	{
		//输入帐户及密码
		printf("请输入帐户:");
		scanf("%s",name);
		printf("请输入密码:");
		scanf("%s",password);
		//判断
		if(strcmp(name,"zhangsan")==0&&strcmp(password,"abcdef")==0)
		{
			//循环
			while(1)
			{
				//输出标题
				printf("\n\n\t\t====ATM机管理系统=====\n");
				printf("\t\t1.取款\n");
				printf("\t\t2.存款\n");
				printf("\t\t3.查询\n");
				printf("\t\t4.转帐\n");
				printf("\t\t0.退出\n");
				//输入编号
				printf("请输入编号:");
				scanf("%d",&n);
				//判断
				switch(n)
				{
					case 1:f1();break;
					case 2:f2();break;
					case 3:f3();break;
					case 4:f4();break;
					case 0:exit(0);break;
					default :printf("输入有误,请重新输入\n");
					
					}
				
			}
			
			
		}		
		else
		{
			printf("帐户及密码不正确,请重新输入,还有%d次机会\n",2-i);
			
			}
		
		
		
		
	}
	
    
}