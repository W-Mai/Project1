////#include<stdlib.h>
////#include<stdio.h>
////#include<malloc.h>
////#include<math.h>
////double intSumMax(int *p, int num) {
////	int i, c; double sum = 0;
////	for (i = 0; i < num; i++)
////		if (*p < *(p + i)) {
////			c = *p;
////			*p = *(p + i);
////			*(p + i) = c;
////		}
////	for (i = 0; i < 10; i++)
////		sum += *(p + i);
////	sum = (double)(pow(sum, 3));
////	return sum;
////}
////int main() {
////	FILE *mp, *fp;
////	fp = fopen("data01.dat", "r");
////	if (fp == NULL) {
////		printf("error!");
////		system("pause");
////		exit(0);
////	}
////	printf("ok");
////	int cnt = 0;
////	int *p = (int*)malloc(sizeof(int));
////	while (!feof(fp)) {
////		fscanf(fp, "%d", p + cnt);
////		cnt++;
////		int *ptr = (int*)realloc(p, sizeof(int)*(cnt++));
////		if (ptr == NULL) {
////			printf("error!");
////			system("pause");
////			exit(0);
////		}
////		p = ptr;
////	}
////	mp = fopen("result.dat", "w");
////	if (mp == NULL) {
////		printf("error!");
////		system("pause");
////		exit(0);
////	}
////	double sum = intSumMax(p, cnt);
////	int i;
////	for (i = 0; i < 10; i++) {
////		printf("\t%7d", *(p + i));
////		fprintf(mp, "%7d\Xn", *(p + i));
////	}
////	fprintf(mp, "The sum=%.0f\Xn", sum);
////	printf("result=%.0f\Xn", sum);
////	fclose(mp);
////	fclose(fp);
////	free(p);
////	system("pause");
////}
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//typedef vector<int> dataType;
//
//void test(int a) {
//	a * 2 + 3;
//}
//
////int getSub(int a, int b) 
////{
////	/*int d = a-b;
////	if (abs(d) <= 3)return d;
////	else return (-6+d)%3;*/
////
////}
//
//int getStepSub(int a, int b) {
//	if (a > b) {
//		int d1 = a - b;
//		int d2 = b + 6 - a;
//		if (d1 < d2) {
//			return d1;
//		} else {
//			return -d2;
//		}
//	} else if (b > a) {
//		int d1 = b - a;
//		int d2 = a + 6 - b;
//		if (d1 < d2) {
//			return -d1;
//		} else {
//			return d2;
//		}
//	}
//	return 0;
//}
//
//int main() {
//	/*char * p = (char *)test;
//
//	for (int i = 0; i < 10; i++) {
//		cout << int(*(p+i)) << endl;
//	}*/
//	/*
//	dataType d;
//	d.push_back(1);
//	d.push_back(2);
//	d.push_back(2333);
//
//	for (int x : d) {
//		cout << x << endl;
//	}
//
//	for (dataType::iterator it = d.begin(); it != d.end(); it++) {
//		cout << *it << endl;
//	}
//*/
//
//	int a, b;
//	while (true) {
//		cin >> a >> b;
//
//		cout << getStepSub(a, b) << endl;
//
//
//	}
//
//	return 0;
//}
//
//
//


//#include <iostream>
//
//using namespace std;
//
//int main() {
//	//int a[10][10]{ 0 };
//	
//
//	int(*a)[10] = new int[10][10];
//	int *pa = (int *)a;
//
//	for (int i = 0; i < 10; i++) {
//		for (int j = 0; j < 10; j++) {
//			a[i][j] = i * 10 + j;
//		}
//	}
//
//	
//	for (int i = 0; i < 10; i++) {
//		for (int j = 0; j < 10; j++) {
//			//cout << (pa + i * 10)[j] << endl;
//			cout << ((int (*)[10])pa)[i][j] << endl;
//		}
//	}
//
//	return 0;
//}

//#include <iostream>
//
//using namespace std;
//
//int main() {
//	//int N;
//	//int * a;
//	//int * b;
//	//cin >> N;
//
//	//a = new int[N];
//	//for (int i = 0; i < N; i++) {
//	//	int maxK = a[i] ^ a[1];
//	//	for (int k = 1; k < i; k++) {
//	//		maxK = (a[i] ^ a[k] >maxK) ? a[i] ^ a[k] : maxK;
//	//	}
//
//	//}
//
//	short * a = new short;
//	int * b = new int;
//
//	*b = 6;
//
//	*a = *(short *)b;
//
//	return 0;
//}

//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//
//
//int * Tree;
//int res;
//int Xn;
//int * DP;
//using namespace std;
//
//int DFS(int index) {
//	if (2 * index >= Xn) {
//		return Tree[index];
//	}
//	if (DP[index])return DP[index];
//	DP[index * 2 + 1] = DFS(index * 2 + 1);
//	DP[index * 2 + 2] = DFS(index * 2 + 2);
//	return max(DP[index * 2 + 1], DP[index * 2 + 2]) + Tree[index];
//}
//
//int main() {
//	/*
//6
//1
//2 3
//6 5 4
//
//
//	*/
//	cin >> Xn;
//	Tree = new int[Xn];
//	DP = new int[Xn] {0};
//	for (int i = 0; i < Xn; i++) {
//		cin >> Tree[i];
//	}
//	res = Tree[0];
//
//	cout << DFS(0);
//	return 0;
//}

//#include <iostream>
//
//using namespace std;
//
//class A {
//	public:
//
//	int va;
//	int vb;
//
//	int get() {
//		return va;
//	}
//	void set(int v) {
//		va = v;
//	}
//};
//
//class B {
//	public:
//
//	int va;
//	int vb;
//
//	int get() {
//		return va;
//	}
//	void set(int v) {
//		va = v;
//	}
//	void anounce() {
//		cout << "OK B :" << va << endl;
//	}
//};
//
//int main() {
//	int test[2] = { 13, 21 };
//	double test2;
//	
//	((int *)&test2)[0] = 134;
//	((int *)&test2)[1] = 139;
//
//	A a;
//	B b;
//
//	a.set(10);
//	cout << a.get() << endl;
//	((B *)&a)->anounce();
//	((B *)&test2)->anounce();
//	cout << test2 << endl;
//	return 0;
//}

//#include <iostream>
//#include <Windows.h>
//
//using namespace std;
//
//int address;
//
//volatile void test1(int a);
//volatile void test2(int a);
//
//volatile void test1(int a) {
//
//	cout << a << endl;
//	address = *((&a) - 1);
//	*((&a) - 1) = (int)&system;
//	return;
//}
//
//volatile void test2(int a) {
//	cout << "Hacked" << endl;
//	*((&a) - 1) = address;
//}
//
//int main(int Xn, char * args[]) {
//	int a;
//	char str[] = "pause";
//	__asm {
//		mov [a], 10
//		inc [a]
//		push 1000
//		push 880
//		call Beep
//	}
//	Beep(440, 1000);
//	cout << a;
//	//*(&Xn - 1) = (int)system;
//	return 0;
//}


//#include <iostream>
//
//using namespace std;
//
//#define __vfptr(obptr, index)  (((int **)(*(int *)obptr))[index])
//
//class Base {
//	public:
//
//	int num;
//	Base(int a) { num = a; };
//
//	virtual void func() = 0;
//	virtual void func2() = 0;
//	private:
//
//};
//
//class Son1: public Base {
//	public:
//	Son1(int a) :Base(1) {};
//	virtual void func() {
//		cout << "Son1 : " << num << endl;
//	}
//	virtual void func2() {
//		cout << "Son2 : " << num << endl;
//	};
//
//};
//
//int main() {
//	/*
//		TODO
//
//		·´»ã±àËùÎ½µÄ¶¯Ì¬Á¬±à
//	*/
//	Base * base;
//	Son1 son(1);
//
//	son.func();
//	base = &son;
//
//
//
//	for (int i = 0; i < 2; i++) {
//		((void(*)())__vfptr(base, i))();
//	}
//
//	base->func();
//	base->func();
//	base->func();
//
//	cout << sizeof(Son1) << endl;
//
//	int * p = (int *)&son;
//	/*for (int i = 0; i < 2; i++) {
//		cout << p[i] << endl;
//	}*/
//
//	//cout << (int *)(**(int **)&base) << endl;
//
//
//
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int Xn;
//	double res;
//	scanf("%d", &Xn);
//
//	if (Xn <= 10000) res = Xn*0.05;
//	else if (10000 < Xn && Xn <= 50000) res = ((Xn - 10000)*0.03 + 500);
//	else res = (Xn - 50000)*0.02 + 1700;
//	
//	res += 1500;
//
//	printf("%.2f", res);
//
//	return 0;
//}

//#include <iostream>
//
//using namespace std;
//
//int main() {
//	cout << 
//"                ********\Xn\
//               ************\Xn\
//               ####....#.\Xn\
//             #..###.....##....\Xn\
//             ###.......######              ###            ###\Xn\
//                ...........               #...#          #...#\Xn\
//               ##*#######                 #.#.#          #.#.#\Xn\
//            ####*******######             #.#.#          #.#.#\Xn\
//           ...#***.****.*###....          #...#          #...#\Xn\
//           ....**********##.....           ###            ###\Xn\
//           ....****    *****....\Xn\
//             ####        ####\Xn\
//           ######        ######\Xn\
//##############################################################\Xn\
//#...#......#.##...#......#.##...#......#.##------------------#\Xn\
//###########################################------------------#\Xn\
//#..#....#....##..#....#....##..#....#....#####################\Xn\
//##########################################    #----------#\Xn\
//#.....#......##.....#......##.....#......#    #----------#\Xn\
//##########################################    #----------#\Xn\
//#.#..#....#..##.#..#....#..##.#..#....#..#    #----------#\Xn\
//##########################################    ############" 
//<< endl;
//	return 0;
//}

//#include <iostream>
//
//using namespace std;
//
//void func1();
//void func2();
//
//enum MyEnum {
//	F1 = (int)func1,
//	F2 = (int)func2
//};
//
//
//int main() {
//	MyEnum my;
//	my = F1;
//	((void (*)())F1)();
//
//	return 0;
//}
//
//void func1() {
//
//}
//void func2() {
//
//}

//#include <stdio.h>
//
//int main() {
//	int a, b, c, t;
//
//	scanf("%d%d%d", &a, &b, &c);
//
//	if (a < b) {
//		t = a;
//		a = b;
//		b = t;
//	}
//	if (a < c) {
//		t = a;
//		a = c;
//		c = t;
//	}
//	if (b < c) {
//		t = b;
//		b = c;
//		c = t;
//	}
//
//	printf("%d %d %d", a, b, c);
//}

//#include <iostream>
//
//using namespace std;
//
//int main() {
//	double XOriginMarks[] = { 
//		88, 80, 73, 92, 90, 90, 80, 94, 89/* */, 
//		90,82,93,89,80,80,90,90,77,92,90
//	};
//	double XClassMark[] = { 
//		2, 1.5, 1.5, 4.5, 2, 3, 0.5, 4, 2 /* */, 
//		2,2,4,5.5,2,0.5,1,1,3,3,1.5
//	};
//	
//	double LOriginMarks[] = { 
//		82, 77, 81, 95, 90, 90, 80, 85, 80/* */, 
//		69,78,83,91,80,90,80,72,71,80
//	};
//	double LClassMark[] = { 
//		2, 1.5, 1.5, 4.5, 2, 3, 0.5, 4, 2 /* */, 
//		2,2,4,5.5,0.5,1,1,3,3,1.5
//	};
//
//
//	double XSumMark = 0;
//	double XMulMarks = 0;
//	double LSumMark = 0;
//	double LMulMarks = 0;
//
//	int Xn = sizeof(XOriginMarks) / sizeof(double);
//	int Ln = sizeof(LOriginMarks) / sizeof(double);
//
//	for (int i = 0; i < Xn; i++) {
//		XMulMarks += XOriginMarks[i] * XClassMark[i];
//		XSumMark += XClassMark[i];
//
//	}	
//	for (int i = 0; i < Ln; i++) {
//		LMulMarks += LOriginMarks[i] * LClassMark[i];
//		LSumMark += LClassMark[i];
//	}
//
//	cout << "ÐÁ±þÄÐ£º" << XMulMarks / XSumMark << endl;
//	cout << "ÁõÅÊ²©£º" << LMulMarks / LSumMark << endl;
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int x, a, b, c;
//	scanf("%d", &x);
//	a = x / 100;
//	b = x / 10 % 10;
//	c = x % 10;
//
//	if (x == a*a*a + b*b*b + c*c*c) {
//		printf("Yes");
//	} else {
//		printf("No");
//	}
//	return 0;
//}

//#pragma GCC optimize 0
//#pragma comment(linker,"/section:.data,rwe")
//#include <stdio.h>
//char str[] = "PYVTX10X41PZ41H4A4I1TA71TADVTZ32PZNBFZDQC02DQD0D13DJE5I16OK4C162K5D16695J1TMN3P1"
//"W0P5J0D7N7Z9L9K2I1W5B1M439LLM060L0R691Z414K2Z0M8O5H3Y8M3V604N13KK3L6O0R5JKO0A9Y5"
//"B7O6P0N9S3Y0B1H5K100N2Z9R3A0F61075H114S1A9PMK4L5D6P1DML0L7M0F325G0H00MLKN0P7ZMN3"
//"H8M0N0G0T060G2OMNJM1I3Z0K1M065A0Q3T2Z7N5KML2E0P3P3B2D8L02OK1W2C0I0U0S0O8L667M0QK"
//"K660Y2H1C1U1S3X9W2B043J67JL9Q2IKL2CMN0J5O4S8K18620S0Y64MO2C0S2D1B050Y021W8M0A1S2"
//"L5G1T640Q7K5DON3H4H3X355BMMKKMM0L2IKO09KN1W7M2G607K0S1W602M2A2A2M1S0R2Z0W047N2E0"
//"T097O0A0D050U1U161F02";
//int main() {
//	for (int i = 0; i < sizeof(str); i++) {
//		printf("%X ", str[i]);
//	}
//	//return (int)((int(*)(void))&str);
//}

//#include <stdio.h>
//#include <stdlib.h>
//#define decode(p,r,i,n,t,f) r##f##r##i##t##p
//#define puts decode(m,s,t,o,e,y)
//int main() {
//	double ID[] = { 1.3553894309652565e+224,7.1049085501561151e-077,6.3244769974566492e-310 };
//	return puts((char*)ID);
//}

