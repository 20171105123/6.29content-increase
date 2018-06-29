//
//  6.c
//  6.29content increase
//
//  Created by 鲁祥 on 2018/6/29.
//  Copyright © 2018年 鲁祥. All rights reserved.
//

#include "6.h"
#include <stdio.h>
void writeExcel()
{
    char chy[4]={ 'x' ,'a' ,'h','w' } ;
    int data[4]={ 1 , 3 , 6 ,9  };
    int i ;
    FILE *fp = NULL ;
    fp = fopen("G:\\Desktop\\test.xls","w") ;
    for (i=0 ; i<4 ;i++)
        fprintf(fp,"%c\t%d\n",chy[i],data[i] ) ;
    fclose(fp);
}
void main()
{
    writeExcel()  ;
    FILE *fp;
    char filename[40]  ;
    int i,j ;
    float da[6][5] = {0} ;
    printf(" ");
    gets(filename);
    fp=fopen(filename,"r");
    for(i = 0 ;i < 6 ; i++)
        for(j = 0 ;j < 5 ; j++)
        {
            fscanf(fp,"%f",&da[i][j]);
            fseek(fp, 5L, SEEK_CUR);
        }
    
    for(i = 0 ;i < 6 ; i++)
        printf("%f\t%f\t%f\t%f\t%f\t\n",da[i][0],
               da[i][1],da[i][2],da[i][3],da[i][4]);
}
void main()
{
    FILE *fp;
    char filename[40]  ;
    int i,j ;
    float da[6][5] = {0} ;
    printf(" 输入文件名: ");
    gets(filename);
    fp=fopen("as.csv","r");
    fseek(fp, 5L, SEEK_SET);   // 从文件第二行开始读取
    for(i = 0 ;i < 6 ; i++)
        for(j = 0 ;j < 5 ; j++)
        {
            fscanf(fp,"%f",&da[i][j]);
            fseek(fp, 1L, SEEK_CUR);   /*fp指针从当前位置向后移动*/
        }
    
    for(i = 0 ;i < 6 ; i++)
        printf("%f\t%f\t%f\t%f\t%f\t\n",da[i][0],
               da[i][1],da[i][2],da[i][3],da[i][4]);
    
    getchar() ;
}
void main()
#include<iostream>
using namespace std;
int max (int x,int y);
int min (int x,int y);
int main()
{
    int a=0,b=101,c=0,i,j;
    double average;
    cout<<"请输入选手成绩"<<endl;
    for(i=1;i<=10;i++)
    {
        cout<<"第"<<i<<"位评委给分：";
        cin>>j;
        a=max(a,j);
        b=min(b,j);
        c=c+j;
    }
    average=(c-a-b)/8;
    cout<<"减去一个最高分"<<a<<","<<"减去一个最低分"<<b<<endl;
    cout<<"该选手的最后得分："<<average<<endl;
    return 0;
}

int max(int x, int y)
{
    if(x>y)
    {
        return x;
    }
    else
    {
        return y;
    }
}

int min(int x, int y)
{
    if(x>y)
    {
        return y;
    }
    else
    {
        return x;
    }
    return 0
}
