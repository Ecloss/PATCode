#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

const int maxn = 40010;
struct Student{
	int id; // ��� 
	int ge; // ��ѧ�ɼ�
	int gi; // ���Գɼ�
	int ag; // ���ճɼ�
	int unv[6]; // ����ѧУ  
}stu[maxn];

int n, m, k;
int un[110];
void init() {
	for(int i = 0; i < n; i++) {
		stu[i].id = i;
		stu[i].ge = 0;
		stu[i].gi = 0;
	}
}
// �����������ճɼ��Ӵ�С�� ���ճɼ���ͬ�� ��ѧ�ɼ��Ӵ�С 
bool cmp(Student a, Student b) {
	if(a.ag != b.ag) return a.ag > b.ag;
	else return a.ge > b.ge;
}

int main() {
	// m--��ѧ������ k--����֧ԮѧУ���� 
	scanf("%d %d %d", &n, &m, &k);
	// ����ÿ��ѧԺ������ 
	for(int i = 0; i < m; i++) {
		scanf("%d", un[i]);
	}
	// ����ÿ��ѧ������ѧ�ɼ������Գɼ��� �Լ�־ԸѧУ 
	for(int i = 0; i < n; i++) {
		scanf("%d %d", &stu[i].ge, &stu[i].gi);
		for(int j = 0; j < k; j++) {
			scanf("%d", &stu[i].unv[k]);
		}
	}
	// ��ÿ��ѧ�������ճɼ������
	for(int i = 0; i < n; i++) {
		stu[i].ag = (stu[i].ge + stu[i].gi) / 2;
	} 
	// �������� 
	sort(stu, stu+n, cmp);
	return 0;
}
