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
	printf("두 명의 수학과 과학 점수를 입력해주세요.\n");
	for (int i = 0; i < 2; i++) {
		scanf_s("%d %d", &sco[i].math, &sco[i].science);
	}
	printf("총점이 높은 사람의 수학과 과학 점수는 : ");

	if ((sco[0].math + sco[0].science) < (sco[1].math + sco[1].science)) {
		swap(&sco[0], &sco[1]);
	}

	printf("%d %d", sco[0].math, sco[0].science);

	return 0;
}

