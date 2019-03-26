//#include <stdio.h>
//
//double F(double x, double y); //声明
//void F2();
//
//int x = 0;
//char F3(int c, double b, char d);
//
//int main() { //入口函数
//	char str = 'A';
//	/*	char		1
//		short		2
//		int			2<=  <=4  4
//		long		4
//		long long	8
//
//		float		4
//		double		8
//
//		void		1
//
//		数据类型就是如何解释这么长度的数据
//
//		|    |     |    |     |     |
//
//		强制类型转换
//
//		小端存储
//
//		FF FF FF FF
//		255
//
//	*/
//	// double x, y, result;
//	/*scanf("%lf,%lf", &x, &y);*/
//	//辛弃疾；
//	//心气急；
//
//	//result = F(x, y);
//	//printf("%lf", result);
//
//	printf("%d\n", x);
//	F2();
//	printf("%d\n", x);
//	
//	return 0;
//}
//
//double F(double x, double y) { //定义
//	int a;
//	a = x * y;
//
//	return a + y;
//}
//
//void F2() {} //执行一个动作
//
//char F3(int c, double b, char d) {
//
//}

#include <stdio.h>

int vowel(char ch);

int main() {
	char ch;
	int c = 0;
	while (ch = getchar(), ch != '\n') {
		if (vowel(ch) == 1) c++;
	}
	printf("%d", c);
	return 0;
}

int vowel(char ch) {
	if (ch == 'a'|| ch == 'i'|| ch =='o'|| ch == 'u' || ch == 'e' || ch == 'A' || ch == 'I' || ch == 'E' || ch == 'O' || ch == 'U')
		return 1;
	else  return 0;
}