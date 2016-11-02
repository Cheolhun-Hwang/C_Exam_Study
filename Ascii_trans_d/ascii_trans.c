#include<stdio.h>
#include<string.h>
// 1. 01이진수이면 아스키코드에서 번역으로 문자열이면 아스키코드로 바꾼다.
// 2. 반복문으로 정의하며 종료를 할 수 있도록 만들어준다.
// 3. 아스키코드에 관련된 저장이 있어야 한다.

void transfer(short how, char *que2, int count){
 if(how == 1){
        int index=0;
        int index2=0;
        int result=0;
        char trans[count];
        int integer[count];
        int i;


        for(i=0;i<count+1;i++){
            if(que2[i]=='1'){
                integer[i]=1;
            }else if(que2[i]=='0'){
                integer[i]=0;
            }
        }


        for(i=0;i<count;i++){
            trans[i]==NULL;
        }
        
        while(index < count){
            result=((integer[index]*128)+(integer[index+1]*64)+(integer[index+2]*32)+
                    (integer[index+3]*16)+(integer[index+4]*8)+(integer[index+5]*4)+
                    (integer[index+6]*2)+(integer[index+7]*1));

            trans[index2] = result;
            trans[index2+1] = NULL;

            index+=8;
            index2++;
        }

        printf("번역 결과 -> %s", trans);
        printf("\n완료\n");

    }else if(how == 0){
        int j=0;
        int number, binary, sum=0, ten=1;
        printf("번역 결과 -> ");

        for(j ; j<count ; j++){
            number = (int)que2[j];

            while(number>0){
                binary=number%2;
                sum+=binary*ten;
                number=number/2;
                ten*=10;
            }
            printf("%08d", sum);

            sum = 0;
            ten = 1;
        }
        printf("\n");
        printf("완료\n");

    }else{
        printf("잘못된 입력을 하신듯 합니다. 다시 입력해주세요.\n");
        printf("실패\n");
    }
}

int main(void){
    char que[127];
    int i, count=0;
    short how;
     printf("## 01 이진수 아스키코드 변환\n");
    while(1){
        /////////////////////////////////////  
        printf("%s!\n", que);//#
        printf(" - 100byte 이하 문자열 입력 : ");
        //scanf("%s", que);
        gets(que);
    ////////////////////////////////////////
     printf("%s!!\n", que);//#
    for(i=0;i<127;i++){
        if( (que[i]) != NULL){
            count++;
            printf("%c, %d\n", que[i], que[i]);
            if((int)que[i]==0){
                printf("공백!\n");
                que[i]='\0';
            }
        }else{
            printf("%c, %d\n", que[i], que[i]);
            if((int)que[i]==0){
                printf("공백!!\n");
                que[i]='\0';
            }
            break;
        }
    }

    printf("%s!!\n", que);//#
    printf("%d!!\n", count);//#
    

    //////////////////////////////////
    for(i = 0;i < count;i++){
        if((que[i] == '1') || (que[i]=='0')){
            how = 1; //입력받은 모든 문자가 0또는1이어야만 2진수 -> 16진수 변환;
            printf("!!%d!!\n", how);
        }else{
            how = 0;
            printf("!!%d!!\n", how);
        }
    }
    printf("%d\n", how);
    ////////////////////////////////
    transfer(how, que, count);
    ///////////////////////////////////
     printf("%s!!!\n", que);//#
     //memset(que, 0, sizeof(que));
     strcpy(que, "");
     printf("%s!!!!\n", que);//#
    }

    return 0;
}
