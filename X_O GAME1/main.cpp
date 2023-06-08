#include <iostream>

using namespace std;
char box[3][3]={'1','2','3','4','5','6','7','8','9'};
char player='x';
void print(){
    system("cls");
    cout<<endl;cout<<endl;cout<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("  %c  | ",box[i][j]);


        }
       cout<<endl;
       cout<<endl;
    }
     cout<<endl;
}
void playing(){
    char num;
    cout<<"   Enter your placement number-palyer ("<< player<<"):"  ;
    cin>>num;
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(num==box[i][j]){
               box[i][j]=player;

            }
        }

    }
    if(player=='x')
        player='o';
    else
        player='x';

}
char WhoWin(){
    int Xcount=0,Ocount=0,numbers=0;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(box[i][j]!='x'&&box[i][j]!='o')numbers++;
            if(box[i][j]=='x')

               Xcount++;
            else if(box[i][j]=='o')
                Ocount++;
            if(Xcount==3||Ocount==3){
                return Xcount>Ocount?'X':'O' ;
            }
        }
         Ocount=0;
         Xcount=0;
        }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(box[j][i]=='x')Xcount++;
            else if(box[j][i]=='o')Ocount++;
            if(Xcount==3||Ocount==3){
                 return Xcount>Ocount?'X':'O' ;
            }
        }
         Ocount=0;
         Xcount=0;
        }
     if(box[0][0]=='x'&&box[1][1]=='x'&&box[2][2]=='x')
            return 'X';
     else if(box[0][0]=='o'&&box[1][1]=='o'&&box[2][2]=='o')
        return 'O';
     else if(box[0][2]=='x'&&box[1][1]=='x'&&box[2][0]=='x')
        return 'X';
     else if(box[0][2]=='o'&&box[1][1]=='o'&&box[2][0]=='o')
        return 'O';
     if(numbers==0)
        return 'z';

    return '.';
}
int main()

{
    system("color 5B");

    while(WhoWin()=='.'){
         print();
         playing();
    }
     print();
    if(WhoWin()=='z')
        cout<<"NO ONE WIN TRY AGINE"<<endl;
    else
         cout<<"the Winner is player:"<<WhoWin()<<"   //Cngratulations"<<endl;


    system("pause");
    return 0;
}
