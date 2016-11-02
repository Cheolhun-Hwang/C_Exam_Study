#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define clear() printf("\033[H\033[J") //화면 clear

#define easy 10
#define normal 15
#define hard 20

#define easy_hax 20
#define normal_hax 30
#define hard_hax 40

int startpage(){
	char ans;

	printf("##지뢰맵 만들기 예제##\n");
	while(1){
	printf("난이도 조정(e n h) : ");
	scanf("%c", &ans);

	if(ans == 'e'){
	return 1;
	}else if(ans == 'n'){
	return 2;
	}else if(ans == 'h'){
	return 3;
	}else{
	printf("잘못된 입력입니다. 다시 입력해주세요.\n");
	}
    }
}


void playgame(char* map[][], int size){
	printf("###MAP###\n");
	int i, j;
	for(i = 0;i<size ;i++){
		for(j=0;j<size;j++){
			printf("%c", map[0][i][j]);
		}
		printf("\n");
	}
}


int main(void){
	int nan;
	int i, j;
	int rand;
	int x, y;
	int r;
	int count=0;
	while(1){
	
	

	nan = startpage();
	if(nan == 1){
	map[2][easy][easy];
	
	for(i = 0;i<easy;i++){
		for(j=0;j<easy;j++){
		map[0][i][j] = '#';
		}
	}


	for(i = 0 ; i<easy;i++){
		srand((unsigned)time(NULL));
		x = rand()% easy + 0;
		for(j=0;j<easy;j++){
			srand((unsigned)time(NULL));
			y = rand()%easy + 0;
			if(map[1][x][y]!='*'){
			map[1][x][y] = '*';
			count++;
			}else{
				do{
				srand((unsigned)time(NULL));
				r=rand()%5 + 1;

				x = x+r; y= y+r;
				if(x >= easy){
					x= x-easy;
				}
				if(y >= easy){
					y=y-easy;
				}
				}while(map[1][x][y]=='*');

				map[1][x][y] = '*';
				count++;
			}
		}
		if(count == easy_hax){
			break;
		}
	}

	for(i = 0; i<easy;i++){
		for(j=0;j<easy;j++){
			if(map[1][i][j]!='*'){
				map[1][i][j]== '.';
			}
		}
	}


	playgame(map, easy);


	}else if(nan == 2){
	map[2][normal][normal];
	}else if(nan == 3){
	map[2][hard][hard];
	}

	

	





	}

	return 0;
}
