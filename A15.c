/*作業15:請撰寫一個程式
，將字串"Taiwan, Touch, Your, Heart"
中所有的標點符號都去掉，並輸出結果。
*完成日期 108/5/25
*by 3a713229
*/ 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
	
	printf("by 3a713229\n");
	char input_arr[]="Taiwan, Touch, Your, Heart";
	char *ptr_input;
	
	int i;
	int length;
	
	length=strlen(input_arr);
	ptr_input=input_arr;
	
	for(i=0;i<length;i++){
		
		if(*(ptr_input+i)>64 && *(ptr_input+i)<90){
			printf("%c", *(ptr_input+i));
		}
		else if(*(ptr_input+i)>96 && *(ptr_input+i)<123){
			printf("%c", *(ptr_input+i));
		}
		else if(*(ptr_input+i)==32){
			printf("%c", *(ptr_input+i));
		}
	}
	printf("\n\n");
	system("pause");
	return 0;
}
