#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct grade{
	char name[20];
	int kor;
	int eng;
	int math;
}grade;


int aver(int x, int y, int z){
	int avr = (x+y+z)/3;
	return avr;
}

int main(void) {
	// your code goes here
	char name[20];
	grade student;
	int a = 0;
	
	printf("이름을 입력하세요. :");
	scanf("%s",name);
	strcpy(student.name, name);
	printf("\n성적을 국어 영어 수학 순으로 입력해주세요. :");
	scanf("%d%d%d", &student.kor, &student.eng, &student.math);
	printf("\n");
	
	while(1){
		if (student.name[a] == NULL) {
			break;
		}
		else {
			printf("%c", student.name[a]);
		}
		a++;
	}
	a = aver(student.kor, student.eng, student.math);
	printf("의 성적은 %d입니다.", a);
	return 0;
}
