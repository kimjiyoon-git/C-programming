#include<stdio.h>
#include <stdlib.h> //난수 생성 
#include<time.h> // 씨드값 시간으로 두기 위해 
int main(void){
	int a[3]={}; //정답 입력 
	int ans[3]={}; //정답
	int i=0,j;
	int st=0; //스트라이크 
	int ball=0; //볼 
	int numb=0; //맞춘 횟수 
	
	srand(time(NULL));
    for(i=0;i<3;i++) {
	    ans[i]= rand()%10;
		for(j=0; j<i; j++){
			if(ans[i]==ans[j])
			i--;
			break;
		}
	}
	while(1){
	ball=0; st=0;
	printf("\n정답을 입력해 주십시오  : (0~9까지의 숫자를 입력하시오. 참고로 중복은 안됨.))\n");
	scanf("%d %d %d",&a[0],&a[1],&a[2]);
	
	numb++; 
	
	while(1){
		for(i=0;i<3;i++){
			if(ans[i]==a[i]){
				ball--; st++;}
		}
		
		for(i=0;i<3;i++){
			if(ans[0]==a[i]){
				ball++;}
			if(ans[1]==a[i]){
				ball++;}
			if(ans[2]==a[i]){
				ball++;}
		}
		
		break;
	}
	printf("스트라이크 : %d, 볼 : %d\n", st,ball);
	
	if(a[0]==ans[0]){
		if(a[1]==ans[1]){
			if(a[2]==ans[2]){
			break;
			}
		}
	}
}	

	printf("\nㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n 정답은 %d %d %d 입니다. \n당신은 %d회 만에 정답을 맞추셨습니다.\n",ans[0],ans[1],ans[2],numb); 
}
