#include <stdio.h>
#include <stdlib.h>
enum Sex{
	male,
	female,
	unknown
};

typedef struct Student{
	char name[1024];
	int age;
	char id[1024];
	enum Sex sex;
}Student;
int main(){
	Student zhangsan = { "张三", 18, "1234", male };
	struct Student lisi = { "李四", 18, "5678", female };
	printf("%s\n", zhangsan.name);
	printf("%s\n", lisi.name);
	system("pause");
	return 0;
}