#include <iostream>
using namespace std;

char board[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};

int checkwin();
void display_board();

int main()
{
	int player = 1,i,choice;

    char mark;
    do
    {
        display_board();
        player=(player%2)?1:2;

        cout << "Player " << player << " Enter a number:  ";
        cin >> choice;

        mark=(player == 1) ? 'X' : 'O';

        if (choice == 1 && board[0][0] == '1')

            board[0][0] = mark;
        else if (choice == 2 && board[0][1] == '2')

            board[0][1] = mark;
        else if (choice == 3 && board[0][2] == '3')

            board[0][2]=mark;
        else if (choice == 4 && board[1][0] == '4')

           board[1][0] = mark;
        else if (choice == 5 && board[1][1] == '5')

           board[1][1]=mark;
        else if (choice == 6 && board[1][2] == '6')

            board[1][2] = mark;
        else if (choice == 7 && board[2][0] == '7')

            board[2][0] = mark;
        else if (choice == 8 && board[2][1] == '8')

            board[2][1] = mark;
        else if (choice == 9 &&board[2][2] == '9')

            board[2][2] = mark;
        else
        {
            cout<<"Invalid choice ";

            player--;
            cin.ignore();
            cin.get();
        }
        i=checkwin();

        player++;
    }while(i==-1);
    display_board();
    if(i==1)

        cout<<"==>\aPlayer "<<--player<<" win ";
    else
        cout<<"==>\aGame draw";

    cin.ignore();
    cin.get();
    return 0;
}



int checkwin()
{
    for(int i=0;i<3;i++)
    if(board[i][0]==board[i][1]&&board[i][0]==board[i][2]||board[0][i]==board[1][i]&&board[0][i]==board[2][i])
    return 1;
    if(board[0][0]==board[1][1]&&board[0][0]==board[2][2]||board[0][2]==board[1][1]&&board[0][2]==board[2][0])
    return 1;
    for(int i=0;i<3;i++)
    {
    for(int j=0;j<3;j++)
    {
    if(board[i][j]!='X'&&board[i][j]!='0')
    {
    return -1;
}
    }
    }
    
    return 0;

    
}





void display_board()
{
    system("cls");
    cout << "\n\n\tTic Tac Toe\n\n";

    cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
    cout << endl;

    cout << "     |     |     " << endl;
    cout << "  " << board[0][0] << "  |  " << board[0][1] << "  |  " <<board[0][2] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << board[1][0] << "  |  " << board[1][1] << "  |  " << board[1][2] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << board[2][0] << "  |  " << board[2][1] << "  |  " << board[2][2] << endl;

    cout << "     |     |     " << endl << endl;
}