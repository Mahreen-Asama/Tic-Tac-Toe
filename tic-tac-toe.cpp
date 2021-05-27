#include<iostream>
#include<string>
using namespace std;
int main(){
    char c;
    cout<<"Do you want to play Tic-Tac-Toe? enter 's' to start the game\n"; cin>>c;
    while(c=='s' || c=='S'){
        char p1,p2; int p=0, t=0; int e=0;
    char a[3][3]={'1','2','3','4','5','6','7','8','9'};
    cout<<"********Game has started********\n";
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
    for(int c=0; c<3; c++){
    char t='1';
    cout<<"***Player O! enter your position***"; cin>>p1;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(p1==t){
                a[i][j]='O';
            }
            t++;
        }
    }
     for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
     if((a[0][0]=='O' && a[0][1]=='O' && a[0][2]=='O') || (a[1][0]=='O' && a[1][1]=='O' && a[1][2]=='O') || (a[2][0]=='O' && a[2][1]=='O' && a[2][2]=='O'))
    {cout<<"*****Player 'O' has won*****\n"; e++;}
    else if((a[0][0]=='O' && a[1][0]=='O' && a[2][0]=='O') || (a[0][1]=='O' && a[1][1]=='O' && a[2][1]=='O') || (a[0][2]=='O' && a[1][2]=='O' && a[2][2]=='O'))
    {cout<<"*****Player 'O' has won*****\n"; e++;}
    else if((a[0][0]=='O' && a[1][1]=='O' && a[2][2]=='O') || (a[0][2]=='O' && a[1][1]=='O' && a[2][0]=='O'))
    {cout<<"*****Player 'O' has won*****\n"; e++;}
    else{
    x:
    cout<<"***Player X! enter your position***"; cin>>p2;
    char v='1';
   for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(p2==v){
                a[i][j]='X';
            }
            v++;
        }
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
    
    if((a[0][0]=='X' && a[0][1]=='X' && a[0][2]=='X') || (a[1][0]=='X' && a[1][1]=='X' && a[1][2]=='X') || (a[2][0]=='X' && a[2][1]=='X' && a[2][2]=='X'))
    {cout<<"*****Player 'X' has won*****\n"; e++;}
    else if((a[0][0]=='X' && a[1][0]=='X' && a[2][0]=='X') || (a[0][1]=='X' && a[1][1]=='X' && a[2][1]=='X') || (a[0][2]=='X' && a[1][2]=='X' && a[2][2]=='X'))
    {cout<<"*****Player 'X' has won*****\n"; e++;}
    else if((a[0][0]=='X' && a[1][1]=='X' && a[2][2]=='X') || (a[0][2]=='X' && a[1][1]=='X' && a[2][0]=='X'))
    {cout<<"*****Player 'X' has won*****\n"; e++;}
    }
    }
    if(e==0) cout<<"no one won .Sorry!\n";
    cout<<"do you want to play again? enter 's' to play again , 'e' to end the game ";cin>>c; 
    }
    system("pause");
    return 0;
}
