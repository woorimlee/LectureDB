#include <stdio.h>

typedef struct {
	int math;
	int science;
} score;

void swap(score * a, score * b) {
	int temp_math;
	int temp_science;
	temp_math = a->math;
	temp_science = a->science;
	a->math = b->math;
	a->science = b->science;
	b->math = temp_math;
	b->science = temp_science;
}

int main() {
	score sco[2];
	printf("�� ���� ���а� ���� ������ �Է����ּ���.\n");
	for (int i = 0; i < 2; i++) {
		scanf_s("%d %d", &sco[i].math, &sco[i].science);
	}
	printf("������ ���� ����� ���а� ���� ������ : ");

	if ((sco[0].math + sco[0].science) < (sco[1].math + sco[1].science)) {
		swap(&sco[0], &sco[1]);
	}

	printf("%d %d", sco[0].math, sco[0].science);

	return 0;
}

