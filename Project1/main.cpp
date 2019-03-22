#include <iostream>

#define COMPAREFUNC(a,b,t) (a->t == b->t ? a->ID > b->ID:a->t < b->t)

using namespace std;

struct Stu {
	int ID;
	int English;
	int Math;
	int Total;
};

int compare1(const Stu * a, const Stu * b) { return  COMPAREFUNC(a, b, English); }
int compare2(const Stu * a, const Stu * b) { return COMPAREFUNC(a, b, Math); }
int compare3(const Stu * a, const Stu * b) { return COMPAREFUNC(a, b, Total); }

int main() {
	int n, type;
	Stu * stus;
	int(*funcs[3])(const Stu * a, const Stu * b) = { compare1, compare2 , compare3 };
	cin >> n;
	stus = new Stu[n];
	for (int i = 0; i < n; i++) {
		int M, E;
		cin >> stus[i].ID >> E >> M;
		stus[i].English = E;
		stus[i].Math = M;
		stus[i].Total = M + E;
	}
	cin >> type;
	qsort(stus, n, sizeof(Stu), (int (*)(const void *, const void *))funcs[type - 1]);
	for (int i = 0; i < n; i++) {
		cout << stus[i].ID << " " << stus[i].English << " " << stus[i].Math << endl;
	}
	return 0;
}
