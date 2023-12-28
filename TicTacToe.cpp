#include <iostream>

std::string grid[3][3]={{" "," "," "},
                        {" "," "," "},
                        {" "," "," "}};
                            
void displayGrid(char mark,int posrow, int poscol);
int takeTurnXrow();
int takeTurnXcol(int posrow);
int takeTurnYrow();
int takeTurnYcol(int posrow);
char checkWinner(char mark);

int main(){
    
    int row = sizeof(grid)/sizeof(grid[0]);
    int column = sizeof(grid[0])/sizeof(grid[0][0]);
    int turn = 1;
    char mark;
    int posrow;
    int poscol;
    std::cout<<'\n';
    std::cout<<"Welcome to TICTACTOE\n";
    char empty = ' ';
    char gameloop;
    displayGrid(empty,100,100);
    while(true){
        if(turn%2==1){
            posrow = takeTurnXrow() - 1;
            poscol = takeTurnXcol(posrow) - 1;
            mark = 'X';
            grid[posrow][poscol] = 'X';
            displayGrid(mark, posrow, poscol);
            gameloop = checkWinner(mark);
            if(gameloop == 'm'){
                break;
            }
            
        }
        else if(turn%2==0){
            posrow = takeTurnYrow() - 1;
            poscol = takeTurnYcol(posrow) - 1;
            mark = 'O';
            grid[posrow][poscol] = 'O';
            displayGrid(mark, posrow, poscol);
            gameloop = checkWinner(mark);
            if(gameloop == 'm'){
                break;
            }
        }
        if(turn == 9){
            std::cout<<'\n';
            std::cout<<"It's a tie";
            break;
        }
    
        
        
        turn++;
    }
    
    std::cout<<'\n';
    std::cout<<"GAME OVER !";
    
}
int takeTurnXrow(){
    char mark;
    int Xposrow;
    mark = 'X';
    while(true){
        std::cout<<'\n';
        std::cout<<mark<< " 's turn\n";
        std::cout<<"Please enter row (1-3): ";
        std::cin>>Xposrow;
        if(Xposrow<1 || Xposrow >3){
            std::cout<<'\n';
            std::cout<<"Invalid number, please enter a number between 1-3\n";
            continue;
        }
        else if (grid[0][0]!=" " && grid[0][1]!=" " && grid[0][2]!=" " && Xposrow == 1){
            
                std::cout<<'\n';
                std::cout<<"This row is full, please choose another row";
                continue;
            
        }
        else if(Xposrow == 2 && grid[1][0]!=" " && grid[1][1]!=" " && grid[1][2]!=" "){
        
                std::cout<<'\n';
                std::cout<<"This row is full, please choose another row";
                continue;
            
        }
        else if(Xposrow == 3 && grid[2][0]!=" " && grid[2][1]!=" " && grid[2][2]!=" "){

                std::cout<<'\n';
                std::cout<<"This row is full, please choose another row";
                continue;
    
        }
        else{
            return Xposrow;
        }}
}
int takeTurnXcol(int posrow){
    char mark;
    int Xposcol;
    mark = 'X';
    while(true){
        std::cout<<'\n';
        std::cout<<"Please enter column (1-3): ";
        std::cin>>Xposcol;
        if(Xposcol<1 || Xposcol >3){
            std::cout<<'\n';
            std::cout<<"Invalid number, please enter a number between 1-3\n";
            continue;
        }
        else if(grid[posrow][Xposcol-1] != " "){
            std::cout<<'\n';
            std::cout<<"This is not a empty square to choose\n";
            continue;
        }
        else{
            return Xposcol;
        }
    }
}

int takeTurnYrow(){
    char mark;
    int Yposrow;
    mark = 'O';
    while(true){
        std::cout<<'\n';
        std::cout<<mark<< " 's turn\n";
        std::cout<<"Please enter row (1-3): ";
        std::cin>>Yposrow;
        if(Yposrow<1 || Yposrow >3){
            std::cout<<'\n';
            std::cout<<"Invalid number, please enter a number between 1-3\n";
            continue;
        }
        else if(Yposrow == 1 && grid[0][0]!=" " && grid[0][1]!=" " && grid[0][2]!=" "){

                std::cout<<'\n';
                std::cout<<"This row is full, please choose another row";
                continue;

        }
        else if(Yposrow == 2 && grid[1][0]!=" " && grid[1][1]!=" " && grid[1][2]!=" "){
     
                std::cout<<'\n';
                std::cout<<"This row is full, please choose another row";
                continue;
  
        }
        else if(Yposrow == 3 && grid[2][0]!=" " && grid[2][1]!=" " && grid[2][2]!=" "){
       
                std::cout<<'\n';
                std::cout<<"This row is full, please choose another row";
                continue;
 
        }
        else{
            return Yposrow;
        }}
}

int takeTurnYcol(int posrow){
    char mark;
    int Yposcol;
    mark = 'O';
    while(true){
        std::cout<<'\n';
        std::cout<<mark<< " 's turn\n";
        std::cout<<"Please enter column (1-3): ";
        std::cin>>Yposcol;
        if(Yposcol<1 || Yposcol >3){
            std::cout<<'\n';
            std::cout<<"Invalid number, please enter a number between 1-3\n";
            continue;
        }
        else if(grid[posrow][Yposcol-1] != " "){
            std::cout<<'\n';
            std::cout<<"This is not a empty square to choose\n";
            continue;
        }
        else{
            return Yposcol;
        }}
}
     
char checkWinner(char mark){
    std::string mark1(1,mark);
    char m = 'm';
    char n = 'n';
    for(int i =0; i<sizeof(grid)/sizeof(grid[0]);i++){
        if(grid[i][0] == grid[i][1] && grid[i][0]==grid[i][2] && grid[i][0] == mark1){
            std::cout<<'\n';
            std::cout<<mark<< " player WIN !";
            return m;
        }
        else if(grid[0][i] == grid[1][i] && grid[0][i]==grid[2][i] && grid[0][i] == mark1){
            std::cout<<'\n';
            std::cout<<mark<< " player WIN !";
            return m;
        }}
    if(grid[0][0] == grid[1][1] && grid[0][0] == grid[2][2] && grid[0][0] == mark1){
        std::cout<<'\n';
        std::cout<<mark<< " player WIN !";
        return m;
    }
    else if(grid[0][2] == grid[1][1] && grid[0][2] == grid[2][0] && grid[0][2] == mark1){
        std::cout<<'\n';
        std::cout<<mark<< " player WIN !";
        return m;
    }
    return n;
    
}
        



void displayGrid(char mark, int posrow, int poscol){
    std::cout<<'\n';
    std::cout<<"+---+---+---+\n";
    int sothutu = 0;

    for(std::string row:grid[sothutu]){
        std::cout<<"|";
        for(std::string column : grid[sothutu]){
            std::cout<<" "<<column<<" |";
        }
        sothutu++;
        std::cout<<'\n';
        std::cout<<"+---+---+---+\n";
    }
}







