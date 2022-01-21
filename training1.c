//comment

#include <stdio.h>

int main(void){
    int digit;
    int total = 0;
    while(1){
		printf("1000以下の数字を入力してください。:");
		int ret = scanf("%d", &digit);
		printf("入力値は%dでした", digit);
		puts("\n");
		int key;
		int check;
		key = ((0<=digit)*1) + ((digit <= 1000)*10);
		check = 0;
		
		if(EOF == digit){
			check = 1;
			printf("プログラムを終了します。");
			break;
		}

		switch(key){
			case 11:
				for(int num=1;num<=digit;){
					total += num;
					num = num + 2;
					}
				printf("0から%dまでの奇数の合計値は%dでした。", digit, total);
				puts("\n");
				check = 1;
				break;
			case 10:
				printf("正の整数を入力してください。");
				break;
			case 1:
				printf("1000以下の数字入力してください。");
				break;
		}
		if(check == 1){
			break;
		}else{
			printf("入力値に異常がありました。再度入力してください。");
			puts("\n");
		}
	}
	return 0;
}
