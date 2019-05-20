#include <stdio.h>

typedef struct {
	char name[20];
	int num;
} person;

int main() {
	person per[2];
	printf("두 명의 이름과 나이를 입력해주세요.\n");
	for (int i = 0; i < 2; i++) {
		scanf("%s", per[i].name);
		scanf("%d", &per[i].num);
	}
	printf("나이가 많은 사람의 이름과 나이는 : ");
	if (per[0].num > per[1].num) {
		printf("%s %d", per[0].name, per[0].num);
	}
	else printf("%s %d", per[1].name, per[1].num);

	return 0;
}

