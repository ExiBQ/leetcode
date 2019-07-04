# leetcode
## 1. Two Sum
* 1.指针的用法
    * 需要通过函数改变外部非全局变量时，需要在形参里用指针声明，然后在函数内用```*a=2```的方式操作
* 2.Code::Blocks报错，leetcode服务器通过，未知原因
* 3.leetcode要求函数返回数组用malloc，例```int* ret = malloc(sizeof(int) * 2)```;

## 2. Add Two Numbers
* struct复习
   * 可以在定义结构体的同时定义结构体变量：
```C
struct stu{
    char *name;  //姓名
    int num;  //学号
    int age;  //年龄
    char group;  //所在学习小组
    float score;  //成绩
} stu1, stu2;
```
	* 如果只需要 stu1、stu2 两个变量，后面不需要再使用结构体名定义其他变量，那么在定义时也可以不给出结构体名:
```C
struct{  //没有写 stu
    char *name;  //姓名
    int num;  //学号
    int age;  //年龄
    char group;  //所在学习小组
    float score;  //成绩
} stu1, stu2;
```
	* 结构体指针需要动态开辟一个学生信息结构体类型大小的空间，否则CodeBlocks直接报错，exe无响应退出（吐槽一下CB还是很严格的）
```C
/*单向链表*/
struct Student/*建立学生信息结构体模型*/ 
{
    char cName[20];/*学生姓名*/
    int iNumber;/*学生学号*/
    struct student *next;/*指向本结构体类型的指针类型*/
};
struct Student *pEnd,*pNew;
pEnd=pNew=(struct Student *)malloc(sizeof(struct Student));
/*动态开辟一个学生信息结构体类型大小的空间，使得pEnd和pNew同时指向该结构体空间*/
```
 * 又遇到一个scanf时需要注意的地方（“&”的使用）：
 ```C
scanf("%s",pNew->cName);/*从输入流获取第一个学生姓名*/ 
scanf("%d",&pNew->iNumber);/*从输入流获取第一个学生学号*/ 
 ```
