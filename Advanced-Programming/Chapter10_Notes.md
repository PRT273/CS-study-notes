第十章 文件



10.1 文件概述

文件＝磁盘上的数据

文件是存储在外部存储介质上的数据集合。

盘符：路径\\文件主名\[.扩展名]。

文件可以按照文件的内容和组织形式划分。分为**顺序存储文件**和**随机存储文件**。

文件按照存储形式可以分为文本文件和二进制文件。



FILE \*fp;

file是系统定义的结构体类型，fp是指向该结构体的指针。



10.2 文件的打开和关闭函数

打开文件：fopen

fp=fopen("data.txt","r");

fopen返回值

成功：返回file\*

失败：返回NULL



文件关闭函数

int fclose(FILE    \*fp)



10.3 文件的读/写函数

文件尾测试函数

int feof(FILE     \*fp)



字符读/写函数

写字符函数fputc()

int fputc(char ch,FILE  \*fp)



读字符函数fgetc()

int fgetc(FILE \*fp)



字符串读/写函数

写字符串函数fputs()

char \*fputs(char \*str,int length,FILE \*fp)



读字符串函数fgets()

char \*fgets(char \*str,int length,FILE \*fp)



数据块读/写函数

写数据块函数frite()

int fwrite(void \*buffer, int size, int count, FILE \*fp)



读数据块函数fread()

int fread(void \*buffer, int size, int count, FILE \*fp)



格式化读/写函数



fprintf(fp, "%d %f", a, b);

fscanf(fp, "%d %f", \&a, \&b);



10.4 文件的定位函数



ftell

当前文件位置

fseek

移动文件指针

rewind

回到文件开头



10.5 文件的程序设计示例

（p325~p327）

