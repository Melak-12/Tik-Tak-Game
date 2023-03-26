#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>
using namespace std;
void view(char tik[3][3]);
void update(char tik[3][3],char x, int f);
int check (char tik[3][3],int y);
char rec[10];
int f=0;
    int input,y=0;
char tik[3][3];
 char x;

int main (){
        cout <<"this is tik tak game, have a nice time!"<<endl;
do {     if (f==0){
        view(tik);}
        if ((f%2)==0){
            x='X';
            y=1;
                cout <<"player one"<<endl;
                update(tik,x,f);
               if ( check (tik,y)==1){
                cout <<"player one win"<<endl;
                system ("pause");
                break;
                }
                if (f==10 && check (tik,y)==0){
                    cout <<" the game draw"<<endl;
                    system ("pause");
                break;
                }
               }
             if ( (f%2) !=0){
                 x='O';
                y=2;
                cout <<"player two"<<endl;
                update(tik,x,f);
               if ( check (tik,y)==2){
                cout <<"player two win"<<endl;
                system ("pause");
                break;
                }
                if (f==10 && check (tik,y)==0){
                    cout <<" the game draw"<<endl;
                    system ("pause");
                break;
                }
             }
             ++f;
}while (f<10 && f>0);
}
//function to show the order of the tik tak
void view(char tik[3][3]){
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
    tik[i][j]=49 + (i*3 +j);
     cout <<setw(4)<<tik[i][j];
        }
        cout <<endl;
         }
}
//function that update the the tiktak and show the updated after that
void update(char tik[3][3],char x, int f){
                    int input;
            lable1: cin >>input;
            for (int i=0;i<10;i++){if (rec[i]==input){
                        cout <<"invalid input pleas try again"<<endl;
                        system ("pause");
                        goto lable1;
                    }}
                if ((input%3)!=0){
             tik[(int)input/3][(input%3)-1]=x;}
             if ((input%3)==0){
                tik[(input/3)-1][2]=x;

             }
            system ("cls");
        for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
    cout <<setw(4)<<tik[i][j];
        }
        cout <<endl;
         }
     rec[f]=input;
        }
        //function that check who is the winner
int check (char tik[3][3],int y){
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            if (((tik[i][j]==tik[i][j+1]) &&(tik[i][j]==tik[i][j+2])) ||((tik[j][i]==tik[j+1][i]) &&(tik[j][i]==tik[j+2][i]))){
                         return y;}
            if (i==j){
            if (tik[i][j]==tik[i+1][j+1] && tik[i][j]==tik[i+2][j+2]){
                                return y;}}
            if (tik[1][1]==tik[0][2] &&tik[2][0]==tik[0][2]){
                                return y;}
     else {return 0;}
                
        }
     }
}

