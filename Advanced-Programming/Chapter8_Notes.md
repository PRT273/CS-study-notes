第八章 结构体类型和自定义类型

8.1 结构体类型定义

结构体是多个变量打包成一个整体的新类型。



例：

struct Student {

    int id;

    char name\[20];

    float score;

};

8.2 结构体类型变量

例：struct Student s1;

s1 是一个结构体变量

内存中会连续存放 id 和 score



结构体变量的初始化：

struct Student s1 = {

&nbsp;   1001,

&nbsp;   80

};



结构体成员的访问：

s1.id = 1001;

s1.score = 90;



8.3 结构体类型数组

例：struct Student s\[3];

s是一个数组 每个元素都是一个struct student



结构体数组的初始化：

struct Student s\[3] = {

&nbsp;   {1001, 80},

&nbsp;   {1002, 90},

&nbsp;   {1003, 70}

};



访问结构体数组成员：

s\[0].score = 85;

printf("%d", s\[1].id);



8.4 结构体类型指针

为什么要用：因为传参效率高、方便函数操作数组。



定义：

struct Student s1;

struct Student \*p;

p = \&s1;



p是指向struct student 的指针

p中存的是s1的地址



通过结构体访问成员方法：p->score = 90;



结构体作为函数参数：地址传递：

void f(struct Student \*p) {

&nbsp;   p->score = 100;

}





8.5 结构体类型的程序设计实例



（p278~p281）



8.6 自定义类型



使用typedef简化结构体（重要!）

struct Student {

&nbsp;   int id;

&nbsp;   int score;

};



struct Student s1;



简化后：



typedef struct Student {

&nbsp;   int id;

&nbsp;   int score;

} Student;

