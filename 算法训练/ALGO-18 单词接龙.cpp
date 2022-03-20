#include<iostream>
#include<string.h>
#define MAXN 20
#define MAXW 100
using namespace std;

char head, w[MAXN][MAXW];
int N, vis[MAXN]={0}, length = 0;

int isConnect(char str1[], char str2[])    
{
    int i;
    char temp1[MAXW], temp2[MAXW];

    strcpy(temp2, str2);    
    int strEnd = strlen(str1)-1;

    for(i=strEnd; i>0; i--){

        if(str1[i] == temp2[0]){

            strcpy(temp1, &str1[i]);
            temp2[strEnd-i+1] = '\0';

            if(strcmp(temp1,temp2) == 0){    //字符串比较函数temp1==temp2是返回0； 
                strcat(str1, &str2[strEnd-i+1]);
                return 1;
            }
        }

    }
    return 0;
}
void connectDragon(char s[MAXW])   //深度搜索 
{
    int i;
    char temp[MAXW];
    if(strlen(s) > length){
        length = strlen(s);
    }
    strcpy(temp, s);
    for(i=0; i<N; i++){

        if(vis[i] < 2 && isConnect(temp, w[i])){ //相当于check 
            vis[i] ++;
            connectDragon(temp);
            strcpy(temp, s);
            vis[i]--;
        }
    }
}

int main()
{
     int i;
     cin>>N;
    for(i=0; i<N; i++){
         cin>>w[i];
    }
     cin>>head;
     length = 0;
    for(i=0; i<N; i++){

        if(w[i][0] == head){
            vis[i] ++; 
            connectDragon(w[i]);
            vis[i] --;
        }
    }
    cout<<length;
    return 0;
}
