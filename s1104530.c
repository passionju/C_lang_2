#include <stdio.h>
main()
{
	int  c,num,total,total2,i,x,N[10] ;//10矩陣
	char id;
	num = 8;
	total=0;
	total2=0;
	printf("請輸入身分證字母(第一個那個字母)");
	scanf(" %c",&id);
	int A[]={10,11,12,13,14,15,16,17,34,18,19,20,21,22,35,23,24,25,26,27,28,29,32,30,31,33};
	
	if(id<65||id>90){
		printf("ERROR");
		return 0;
	}
	
	c = id - 'A';//和A差多少
	
	for(i=0;i<9;i++){
		printf("請輸入身分證字母後9碼(一次一個數字)");
		scanf(" %d",&N[i]);
		
		if(N[i]<0||N[i]>9){
		
			printf("ERROR");
			return 0;
		}	
	

	}
	for(x=0;x<8;x++){
		total=total+N[x]*num;
		num=num--;
	}//這沒乘最後一碼
	
	total2 = (A[c]/10)*1+(A[c]%10)*9+total+N[8];


	if(total2%10==0){
		printf("合法的碼");	
	
	}			
	else{
		printf("不合法的");
	}

		


	
	

	









}

