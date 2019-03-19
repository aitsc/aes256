#include<stdio.h>
#include"aes256.h"
main()
{
	FILE *fp,*p;
	int j,k;
	unsigned char jia[4][8],mima[4][8];
	fp=fopen("¥˝º”√‹.txt","rb");
	p=fopen("“—º”√‹.txt","wb");
	for(j=0;j<8;j++)
			for(k=0;k<4;k++)
				fread(&jia[k][j],1,1,fp);
	for(j=0;j<8;j++)
		for(k=0;k<4;k++)
			mima[k][j]=1;
	Caes256 aes;
	aes.jiamik(jia);
	for(j=0;j<8;j++)
		for(k=0;k<4;k++)
			fwrite(&jia[k][j],1,1,p);
//	aes.jiemik(jia);
//	for(j=0;j<8;j++)
//		for(k=0;k<4;k++)
//			fwrite(&jia[k][j],1,1,p);
}