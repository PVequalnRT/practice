#include <stdio.h>

int main(void) {
	// your code goes here
	
	int num1 = 0,num2 = 1, temp = 1,User_num, t;
	scanf("%d",&User_num);
	
	for(t = 1;t<User_num;t++){
		if(User_num == 1){
			temp = 1;
		}
		
		else {
			temp = num1 + num2;
			num1 = num2;
			num2 = temp;
		}
			
	}
	
	printf("%d번째 피보나치 수는 %d입니다.",User_num,temp);
	return 0;
}
