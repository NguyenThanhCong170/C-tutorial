/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <ctime>
using std::cout;
using std::cin;
char playerOption();
char computerOption();
void showOption(char choice);
double chooseWinner(char player, char computer);
int tinhdiemA(char diemcong,int playerA);
int tinhdiemB(char diemcong,int playerB);

int main()
{
    char player;
    char computer;
    char a;
    int playerA = 0;
    int playerB = 0;
    int i = 0;
    do{
        cout<<'\n';
        if(i%2==0){
            cout<<'\n';
            cout<<"Luot cua nguoi choi A\n";
        }
        else{
            cout<<'\n';
            cout<<"Luot cua nguoi choi B\n";
        }
        player = playerOption();
        cout<<"Your choice: ";
        showOption(player);
        cout<<'\n';
        computer = computerOption();
        cout<<"Computer's choice: ";
        showOption(computer);
        cout<<'\n';
        a = chooseWinner(player, computer);
        playerA = playerA;
        playerB = playerB;
    
        if(i%2==0){
            playerA =  tinhdiemA(a,playerA);
        }
        else{
            playerB = tinhdiemB(a,playerB);
        }
        
        i++;
    }while(i<20);
    cout<<'\n';
    cout<<"Diem cua nguoi choi A la: "<< playerA;
    cout<<'\n';
    cout<<"Diem cua nguoi choi B la: "<< playerB;
    if(playerA > playerB){
            cout<<'\n';
            cout<<"Nguoi choi B rat la ngu\n";
        }
    else{
            cout<<'\n';
            cout<<"Nguoi choi A rat la ngu\n";
    }
    return 0;
}
void showOption(char choice){
    switch(choice){
        case 'r': 
            cout<<"rock";
            break;
            cout<<"sccisor";
        case 's': 
            break;
        case 'p': 
            cout<<"paper";
            break;
    }
}
char playerOption(){
    char player;
    do{
        cout<<"Please Enter your Option\n";
        cout<<"r for rock\n";
        cout<<"s for scissor\n";
        cout<<"p for paper\n";
        cin>>player;
        if(player != 'r' && player != 's' && player != 'p'){
            cout<<"Invalid choice!";
        }
    }while(player != 'r' && player != 's' && player != 'p');
    return player;
}

char computerOption(){
    srand(time(0));
    int a = rand()%3+1;
    char computer;
    switch(a){
        case 1: 
            computer = 'r';
            break;
        case 2:
            computer = 's';
            break;
        case 3:
            computer = 'p';
            break;
        }
    return computer;
}

double chooseWinner(char player, char computer){
    char a;
    switch(player){
        case 'r':
            if(computer == 'r'){
                cout<<"Hoa";
                a = 'h';
            }
            else if(computer == 'p'){
                cout<<"Ban thua, nguuuuuuuu !!!";
                a = 'l';}
            else if(computer == 's'){
                cout<<"Ban thang";
                a = 'w';}
            break;
        case 's':
            if(computer == 'r'){
                cout<<"Ban thua, nguuuuuuuu !!!";
                a = 'l';}
            else if(computer == 'p'){
                cout<<"Ban Thang";
                a = 'w';}
            else if(computer == 's'){
                cout<<"Hoa";
                a = 'h';}
            break;
        case 'p':
            if(computer == 'r'){
                cout<<"Ban Thang";
                a = 'w';}
            else if(computer == 'p'){
                cout<<"Hoa";
                a = 'h';}
            else if(computer == 's'){
                cout<<"Ban thua, nguuuuuuuu !!!";
                a = 'l';}
            break;
    }
    return a;
}

int tinhdiemA(char diemcong, int playerA){
        switch(diemcong){
            case 'w':
                cout<<'\n';
                cout<<"Nguoi choi A duoc cong 2 diem";
                playerA += 2;
                break;
            case 'l':
                cout<<'\n';
                cout<<"Nguoi choi A khong duoc cong diem nao";
                break;
            case 'h':
                cout<<'\n';
                cout<<"Nguoi choi A duoc cong 1 diem";
                playerA += 1;
                break;
        }
    return playerA;
}
int tinhdiemB(char diemcong, int playerB){
        switch(diemcong){
            case 'w':
                cout<<'\n';
                cout<<"Nguoi choi B duoc cong 2 diem";
                playerB += 2;
                break;
            case 'l':
                cout<<'\n'; 
                cout<<"Nguoi choi B khong duoc cong diem nao";
                break;
            case 'h':
                cout<<'\n';
                cout<<"Nguoi choi B duoc cong 1 diem";
                playerB += 1;
                break;
        }
    return playerB;
}



