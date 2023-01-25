#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
int main()
{
	system("title System activation");
	system("color 0B");
	int A, B, C;
	char in[256], ni[256];
	printf("\t\t欢迎使用Windows激活工具 \n");
	printf("当前版本v1.0.3\n");
	printf("注意：本软件不一定100%激活成功. 激活期间一定要管理员运行,网络环境通畅.最后激活结果按系统为准。\n");
	printf("Welcome!!是否立即激活?\n请输入大写【Y/N】:");
	scanf("%s", &in);
	if (strcmp(in, "Y") == 0)
	{
	B:
		system("cls");
		printf("\n");
		printf("------请选择激活服务器！！------\n");
		printf("1:zh.us.to\n");
		printf("2:kms.03k.org\n");
		printf("3:kms.chinancce.com\n");
		printf("4:kms.shuax.com\n");
		printf("5:kms.dwhd.org(可连接但延时高)\n");
		printf("6:kms.luody.info\n");
		printf("7:kms.digiboy.ir(可连接但延时高)\n");
		printf("8:kms.lotro.cc\n");
		printf("9:www.zgbs.cc(推荐)\n");
		printf("10:cy2617.jios.org(推荐) \n");
		printf("----------------------\n");
		printf("请输入：");
		scanf("%d", &A);
		switch (A)
		{
		case 1:printf("正在连接激活服务器!!\n");  if (!system("ping zh.us.to 1>nul")) { printf("---online 正在启动激活!---\n"); Sleep(1000); system("slmgr.vbs -skms zh.us.to，"); goto C; }
			  else { printf("网络连接异常请更换节点!"); Sleep(1000); system("cls");  goto B; }
		case 2:printf("正在连接激活服务器!!\n"); if (!system("ping kms.03k.org 1>nul")) { printf("---online 正在启动激活!---\n"); Sleep(1000); system("slmgr.vbs -skms kms.03k.org，"); goto C; }
			  else { printf("网络连接异常请更换节点!"); Sleep(1000); system("cls"); goto B; }
		case 3:printf("正在连接激活服务器!!\n"); if (!system("ping kms.chinancce.com 1>nul")) { printf("---online 正在启动激活!---\n"); Sleep(1000); system("slmgr.vbs -skms kms.chinancce.com，"); goto C; }
			  else { printf("网络连接异常请更换节点!"); Sleep(1000); system("cls"); goto B; }
		case 4:printf("正在连接激活服务器!!\n"); if (!system("ping kms.shuax.com 1>nul")) { printf("---online 正在启动激活!---\n"); Sleep(1000); system("slmgr.vbs -skms  kms.shuax.com，"); goto C; }
			  else { printf("网络连接异常请更换节点!"); Sleep(1000); system("cls"); goto B; }
		case 5:printf("正在连接激活服务器!!\n"); if (!system("ping kms.dwhd.org 1>nul")) { printf("---online 正在启动激活!---\n"); Sleep(1000); system("slmgr.vbs -skms kms.dwhd.org，"); goto C; }
			  else { printf("网络连接异常请更换节点!"); Sleep(1000); system("cls"); goto B; }
		case 6:printf("正在连接激活服务器!!\n"); if (!system("ping kms.luody.info 1>nul")) { printf("---online 正在启动激活!---\n"); Sleep(1000); system("slmgr.vbs -skms kms.luody.info，"); goto C; }
			  else { printf("网络连接异常请更换节点!"); Sleep(1000); system("cls"); goto B; }
		case 7:printf("正在连接激活服务器!!\n"); if (!system("ping kms.digiboy.ir 1>nul")) { printf("---online 正在启动激活!---\n"); Sleep(1000); system("slmgr.vbs -skms kms.digiboy.ir，"); goto C; }
			  else { printf("网络连接异常请更换节点!"); Sleep(1000); system("cls"); goto B; }
		case 8:printf("正在连接激活服务器!!\n"); if (!system("ping kms.lotro.cc 1>nul")) { printf("---online 正在启动激活!---\n"); Sleep(1000); system("slmgr.vbs -skms kms.lotro.cc，"); goto C; }
			  else { printf("网络连接异常请更换节点!"); Sleep(1000); system("cls"); goto B; }
		case 9:printf("正在连接激活服务器!!\n"); if (!system("ping www.zgbs.cc  1>nul")) { printf("---online 正在启动激活!---\n"); Sleep(1000); system("slmgr.vbs -skms www.zgbs.cc，"); goto C; }
			  else { printf("网络连接异常请更换节点!"); Sleep(1000); system("cls"); goto B; }
		case 10:printf("正在连接激活服务器!!\n"); if (!system("ping cy2617.jios.org  1>nul")) { printf("---online 正在启动激活!---\n"); Sleep(1000); system("slmgr.vbs -skms cy2617.jios.org，"); goto C; }
			   else { printf("网络连接异常请更换节点!"); Sleep(1000); system("cls"); goto B; }

		}

		{C:
		Sleep(2000);
	N:
		system("cls");
		printf("----选择操作系统！----\n");
		printf("1.Windows 11专业版\n");
		printf("2.Windows 10专业版\n");
		printf("3.Windows 8.1专业版\n");
		printf("4.Windows 8专业版\n");
		printf("5.Windows 7专业版\n");
		printf("请输入：");
		scanf("%d", &B);
		switch (B)
		{
		case 1:system("slmgr.vbs /ipk W269N-WFGWX-YVC9B-4J6C9-T83GX"); printf("正在激活请稍候..."); system("slmgr /ato"); goto F;
		case 2:system("slmgr.vbs /ipk W269N-WFGWX-YVC9B-4J6C9-T83GX"); printf("正在激活请稍候..."); system("slmgr /ato"); goto F;
		case 3:system("slmgr.vbs /ipk GCRJD-8NW9H-F2CDX-CCM8D-9D6T9"); printf("正在激活请稍候..."); system("slmgr /ato"); goto F;
		case 4:system("slmgr.vbs /ipk NG4HW-VH26C-733KW-K6F98-J8CK4"); printf("正在激活请稍候..."); system("slmgr /ato"); goto F;
		case 5:system("slmgr.vbs /ipk FJ82H-XT6CR-J8D7P-XQJJ2-GPDD4"); printf("正在激活请稍候..."); system("slmgr /ato"); goto F;
		}
	F:
		Sleep(1000);
		system("slmgr.vbs -xpr");
		printf("激活已结束！请根据系统指示来确认是否激活成功。\n");
		printf("如果激活失败输入大写'Y'来删除刚才安装的密钥或者输入大写'N'来退出程序\n");
		printf("请输入:");
		scanf("%s", &ni);
		if (strcmp(ni, "Y") == 0)
		{
			system("slmgr.vbs -upk");
			printf("\n");
			printf("------退出？继续激活？------\n");
			printf("1.退出\n");
			printf("2.继续激活\n");
			printf("请输入：");
			scanf("%d", &C);
			switch (C)
			{
			case 1:exit(0);
			case 2:goto N;
			}
		}
		else if (strcmp(in, "N") == 0)
		{
			printf("程序3秒后退出!!\n");
			Sleep(3000);
			exit(0);
		}

		}

	}
	else if (strcmp(in, "N") == 0)
	{
		printf("激活已被终止!! 程序3秒后退出!!\n");
		Sleep(3000);
		exit(0);
	}
}
