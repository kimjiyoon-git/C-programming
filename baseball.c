#include<stdio.h>
#include <stdlib.h> //���� ���� 
#include<time.h> // ���尪 �ð����� �α� ���� 
int main(void){
	int a[3]={}; //���� �Է� 
	int ans[3]={}; //����
	int i=0,j;
	int st=0; //��Ʈ����ũ 
	int ball=0; //�� 
	int numb=0; //���� Ƚ�� 
	
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
	printf("\n������ �Է��� �ֽʽÿ�  : (0~9������ ���ڸ� �Է��Ͻÿ�. ����� �ߺ��� �ȵ�.))\n");
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
	printf("��Ʈ����ũ : %d, �� : %d\n", st,ball);
	
	if(a[0]==ans[0]){
		if(a[1]==ans[1]){
			if(a[2]==ans[2]){
			break;
			}
		}
	}
}	

	printf("\n�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�\n ������ %d %d %d �Դϴ�. \n����� %dȸ ���� ������ ���߼̽��ϴ�.\n",ans[0],ans[1],ans[2],numb); 
}
