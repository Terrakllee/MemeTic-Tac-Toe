#include <iostream>
#include <ctime>
#include <chrono>
#include <thread>

#ifdef _WIN32
    #include <windows.h>
#endif


using namespace std;

class MemeTicTacToe
{
    private:

    const short cells = 9;
    short emptyCells = cells;

    short userPlace, botPlace;
    short userSymbol;

    short round = 1;

    char grid[9]; //cells
    char userChar, botChar;

    bool exit = false;
    bool endOfRound = false;

    public:

    bool GetExit()
    {
        return exit;
    }

    bool GetEndOfRound()
    {
        return endOfRound;
    }

    void Greetings()
    {
        cout << "##### MemeTic-Tac-Toe #####\n";
        cout << "Developer: Terrakllee\n\n";
    }

    void Print()
    {
        cout << "\n";
        cout << " " << grid[0] << " ┃ " << grid[1] << " ┃ "  << grid[2] << " \n";
        cout << "━━━╋━━━╋━━━\n";
        cout << " " << grid[3] << " ┃ " << grid[4] << " ┃ "  << grid[5] << " \n";
        cout << "━━━╋━━━╋━━━\n";
        cout << " " << grid[6] << " ┃ " << grid[7] << " ┃ "  << grid[8] << " \n";
        cout << "\n";
    }

    void StartRound()
    {
        endOfRound = false;
        emptyCells = cells;

        for (int i = 0; i < cells; i++)
        {
            grid[i] = ' ';
        }

        cout << "Round № " << round << "\n";
        cout << " *If you want to play as X type 1 \n *If you want to play as O type 0\n *Enter: ";

        do
        {
            cin >> userSymbol;
        } while (userSymbol != 1 && userSymbol != 0);
        
        
        

        if (userSymbol == 1)
        {
            userChar = 'X';
            botChar = 'O';
        }
        else if (userSymbol == 0)
        {
            userChar = 'O';
            botChar = 'X';
        }

        Print();
    }

    void UserTurn()
    {
        cout << "Your turn: ";

        do
        {
            cin >> userPlace;
        } while (userPlace < 1 || userPlace > 9 || grid[userPlace-1] != ' ');

        grid[userPlace-1] = userChar;
        emptyCells--;

        Print();
    }

    void BotTurn()
    {
        cout << "Bot is thinking.";
        cout.flush();
        this_thread::sleep_for(chrono::seconds(1));
        cout << ".";
        cout.flush();
        this_thread::sleep_for(chrono::seconds(1));
        cout << ".\n";


        do
        {
            botPlace = rand() % 9;
        } while (grid[botPlace] != ' ');

        grid[botPlace] = botChar;
        emptyCells--;

        Print();
    }

    void EndOfRound(bool *exit, short *round, bool *endOfRound) 
    {
        emptyCells = cells;
        cout << " *If you want to exit the game, type 1\n *If you want one more round, type 0\n *Enter: ";
        cin >> *exit;

        if (*exit != 1)
        {
            (*round)++;
        }
        *endOfRound = true;
    }

    void YouWin()
    {
        cout << "Congratulations! You Won!!! :D\n\n\n";
        cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣤⣤⣤⣤⣤⣶⣦⣤⣄⡀⠀⠀⠀⠀⠀⠀⠀⠀ \n";
        cout << "⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⣿⡿⠛⠉⠙⠛⠛⠛⠛⠻⢿⣿⣷⣤⡀⠀⠀⠀⠀⠀ \n";
        cout << "⠀⠀⠀⠀⠀⠀⠀⠀⣼⣿⠋⠀⠀⠀⠀⠀⠀⠀⢀⣀⣀⠈⢻⣿⣿⡄⠀⠀⠀⠀ \n";
        cout << "⠀⠀⠀⠀⠀⠀⠀⣸⣿⡏⠀⠀⠀⣠⣶⣾⣿⣿⣿⠿⠿⠿⢿⣿⣿⣿⣄⠀⠀⠀ \n";
        cout << "⠀⠀⠀⠀⠀⠀⠀⣿⣿⠁⠀⠀⢰⣿⣿⣯⠁⠀⠀⠀⠀⠀⠀⠀⠈⠙⢿⣷⡄⠀ \n";
        cout << "⠀⠀⣀⣤⣴⣶⣶⣿⡟⠀⠀⠀⢸⣿⣿⣿⣆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣷⠀ \n";
        cout << "⠀⢰⣿⡟⠋⠉⣹⣿⡇⠀⠀⠀⠘⣿⣿⣿⣿⣷⣦⣤⣤⣤⣶⣶⣶⣶⣿⣿⣿⠀ \n";
        cout << "⠀⢸⣿⡇⠀⠀⣿⣿⡇⠀⠀⠀⠀⠹⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠃⠀ \n";
        cout << "⠀⣸⣿⡇⠀⠀⣿⣿⡇⠀⠀⠀⠀⠀⠉⠻⠿⣿⣿⣿⣿⡿⠿⠿⠛⢻⣿⡇⠀⠀ \n";
        cout << "⠀⣿⣿⠁⠀⠀⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣧⠀⠀ \n";
        cout << "⠀⣿⣿⠀⠀⠀⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⠀⠀ \n";
        cout << "⠀⣿⣿⠀⠀⠀⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⠀⠀ \n";
        cout << "⠀⢿⣿⡆⠀⠀⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⡇⠀⠀ \n";
        cout << "⠀⠸⣿⣧⡀⠀⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⠃⠀⠀ \n";
        cout << "⠀⠀⠛⢿⣿⣿⣿⣿⣇⠀⠀⠀⠀⠀⣰⣿⣿⣷⣶⣶⣶⣶⠶⠀⢠⣿⣿⠀⠀⠀ \n";
        cout << "⠀⠀⠀⠀⠀⠀⠀⣿⣿⠀⠀⠀⠀⠀⣿⣿⡇⠀⣽⣿⡏⠁⠀⠀⢸⣿⡇⠀⠀⠀ \n";
        cout << "⠀⠀⠀⠀⠀⠀⠀⣿⣿⠀⠀⠀⠀⠀⣿⣿⡇⠀⢹⣿⡆⠀⠀⠀⣸⣿⠇⠀⠀⠀ \n";
        cout << "⠀⠀⠀⠀⠀⠀⠀⢿⣿⣦⣄⣀⣠⣴⣿⣿⠁⠀⠈⠻⣿⣿⣿⣿⡿⠏⠀⠀⠀⠀ \n";
        cout << "⠀⠀⠀⠀⠀⠀⠀⠈⠛⠻⠿⠿⠿⠿⠋⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ \n";
        cout << "\n\n";
    }

    void YouLose()
    {
        cout << "You Lose! :<\n\n\n";
        cout << "⡴⠒⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⠉⠳⡆⠀\n";
        cout << "⣇⠰⠉⢙⡄⠀⠀⣴⠖⢦⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⣆⠁⠙⡆\n";
        cout << "⠘⡇⢠⠞⠉⠙⣾⠃⢀⡼⠀⠀⠀⠀⠀⠀⠀⢀⣼⡀⠄⢷⣄⣀⠀⠀⠀⠀⠀⠀⠀⠰⠒⠲⡄⠀⣏⣆⣀⡍\n";
        cout << "⠀⢠⡏⠀⡤⠒⠃⠀⡜⠀⠀⠀⠀⠀⢀⣴⠾⠛⡁⠀⠀⢀⣈⡉⠙⠳⣤⡀⠀⠀⠀⠘⣆⠀⣇⡼⢋⠀⠀⢱\n";
        cout << "⠀⠘⣇⠀⠀⠀⠀⠀⡇⠀⠀⠀⠀⡴⢋⡣⠊⡩⠋⠀⠀⠀⠣⡉⠲⣄⠀⠙⢆⠀⠀⠀⣸⠀⢉⠀⢀⠿⠀⢸\n";
        cout << "⠀⠀⠸⡄⠀⠈⢳⣄⡇⠀⠀⢀⡞⠀⠈⠀⢀⣴⣾⣿⣿⣿⣿⣦⡀⠀⠀⠀⠈⢧⠀⠀⢳⣰⠁⠀⠀⠀⣠⠃\n";
        cout << "⠀⠀⠀⠘⢄⣀⣸⠃⠀⠀⠀⡸⠀⠀⠀⢠⣿⣿⣿⣿⣿⣿⣿⣿⣿⣆⠀⠀⠀⠈⣇⠀⠀⠙⢄⣀⠤⠚⠁⠀\n";
        cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡇⠀⠀⢠⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡄⠀⠀⠀⢹⠀⠀⠀⠀⠀⠀⠀⠀⠀\n";
        cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡀⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡀⠀⠀⢘⠀⠀⠀⠀⠀⠀⠀⠀⠀\n";
        cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡇⠀⢰⣿⣿⣿⡿⠛⠁⠀⠉⠛⢿⣿⣿⣿⣧⠀⠀⣼⠀⠀⠀⠀⠀⠀⠀⠀⠀\n";
        cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⡀⣸⣿⣿⠟⠀⠀⠀⠀⠀⠀⠀⢻⣿⣿⣿⡀⢀⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀\n";
        cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⡇⠹⠿⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⢿⡿⠁⡏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n";
        cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠻⣤⣞⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢢⣀⣠⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n";
        cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⠲⢤⣀⣀⠀⢀⣀⣀⠤⠒⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n";
        cout << "\n\n";
    }

    void Draw()
    {
        cout << "Draw! :/\n\n\n";
        cout << "⠀⠀⠀⣀⣀⣀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⣀⣀⡤⣄⡀⠀\n";
        cout << "⠶⡿⠟⠛⠛⠛⠛⠛⠿⠷⠶⡶⠦⠀⠀⠀⠻⢶⡶⠿⠿⠟⠛⠛⠛⠛⠷⢿⠲\n";
        cout << "⠀⠀⠀⢀⡠⢮⣭⣭⣼⣏⡓⢦⠀⠀⠀⠀⢀⡴⢛⣻⣿⣽⣿⡷⠤⣀⠀⠀⠈\n";
        cout << "⠀⠀⠐⠙⠤⠼⠿⠿⠇⠙⡄⠸⠀⠀⠀⠀⠈⠇⠠⠧⠼⠿⠿⠧⠴⠚⠁⠀⠀\n";
        cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n";
        cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⠀⠀\n";
        cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⠏⠀⠀\n";
        cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡴⠀⢠⠏⠀⠀⠀\n";
        cout << "⠀⠀⠀⠀⠀⠀⠀⡀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⣀⣠⠴⠋⠀⠀⡞⠀⠀⠀⠀\n";
        cout << "⠀⠀⠀⠀⠀⠀⠀⠿⠉⠉⠛⠛⠛⠋⠉⠉⠉⠉⠀⠀⠀⠀⠀⣰⡁⠀⠀⠀⠀\n";
        cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠀⠀⠀⠀⠀\n";
        cout << "\n\n";
    }


    void CheckUserWin()
    {
        //Row wins USER
        if (grid[0] == grid[1] && grid[1] == grid[2] && grid[2] == userChar)
        {
            grid[0] = '#';
            grid[1] = '#';
            grid[2] = '#';

            Print();
            YouWin();
            EndOfRound(&exit, &round, &endOfRound);
        }

        if (grid[3] == grid[4] && grid[4] == grid[5] && grid[5] == userChar)
        {
            grid[3] = '#';
            grid[4] = '#';
            grid[5] = '#';

            Print();
            YouWin();
            EndOfRound(&exit, &round, &endOfRound);
        }

        if (grid[6] == grid[7] && grid[7] == grid[8] && grid[8] == userChar)
        {
            grid[6] = '#';
            grid[7] = '#';
            grid[8] = '#';

            Print();
            YouWin();
            EndOfRound(&exit, &round, &endOfRound);
        }

        //Col wins USER
        if (grid[0] == grid[3] && grid[3] == grid[6] && grid[6] == userChar)
        {
            grid[0] = '#';
            grid[3] = '#';
            grid[6] = '#';

            Print();
            YouWin();
            EndOfRound(&exit, &round, &endOfRound);
        }

        if (grid[1] == grid[4] && grid[4] == grid[7] && grid[7] == userChar)
        {
            grid[1] = '#';
            grid[4] = '#';
            grid[7] = '#';

            Print();
            YouWin();
            EndOfRound(&exit, &round, &endOfRound);
        }

        if (grid[2] == grid[5] && grid[5] == grid[8] && grid[8] == userChar)
        {
            grid[2] = '#';
            grid[5] = '#';
            grid[8] = '#';

            Print();
            YouWin();
            EndOfRound(&exit, &round, &endOfRound);
        }

        //Axis wins USER
        if (grid[0] == grid[4] && grid[4] == grid[8] && grid[8] == userChar)
        {
            grid[0] = '#';
            grid[4] = '#';
            grid[8] = '#';

            Print();
            YouWin();
            EndOfRound(&exit, &round, &endOfRound);
        }

        if (grid[2] == grid[4] && grid[4] == grid[6] && grid[6] == userChar)
        {
            grid[2] = '#';
            grid[4] = '#';
            grid[6] = '#';

            Print();
            YouWin();
            EndOfRound(&exit, &round, &endOfRound);
        }
    }

    
    ///////////////////////////////////////


    void CheckBotWin()
    {
        //Row wins BOT
        if (grid[0] == grid[1] && grid[1] == grid[2] && grid[2] == botChar)
        {
            grid[0] = '#';
            grid[1] = '#';
            grid[2] = '#';

            Print();
            YouLose();
            EndOfRound(&exit, &round, &endOfRound);
        }

        if (grid[3] == grid[4] && grid[4] == grid[5] && grid[5] == botChar)
        {
            grid[3] = '#';
            grid[4] = '#';
            grid[5] = '#';

            Print();
            YouLose();
            EndOfRound(&exit, &round, &endOfRound);
        }

        if (grid[6] == grid[7] && grid[7] == grid[8] && grid[8] == botChar)
        {
            grid[6] = '#';
            grid[7] = '#';
            grid[8] = '#';

            Print();
            YouLose();
            EndOfRound(&exit, &round, &endOfRound);
        }

        //Col wins BOT
        if (grid[0] == grid[3] && grid[3] == grid[6] && grid[6] == botChar)
        {
            grid[0] = '#';
            grid[3] = '#';
            grid[6] = '#';

            Print();
            YouLose();
            EndOfRound(&exit, &round, &endOfRound);
        }

        if (grid[1] == grid[4] && grid[4] == grid[7] && grid[7] == botChar)
        {
            grid[1] = '#';
            grid[4] = '#';
            grid[7] = '#';

            Print();
            YouLose();
            EndOfRound(&exit, &round, &endOfRound);
        }

        if (grid[2] == grid[5] && grid[5] == grid[8] && grid[8] == botChar)
        {
            grid[2] = '#';
            grid[5] = '#';
            grid[8] = '#';

            Print();
            YouLose();
            EndOfRound(&exit, &round, &endOfRound);
        }

        //Axis wins BOT
        if (grid[0] == grid[4] && grid[4] == grid[8] && grid[8] == botChar)
        {
            grid[0] = '#';
            grid[4] = '#';
            grid[8] = '#';

            Print();
            YouLose();
            EndOfRound(&exit, &round, &endOfRound);
        }

        if (grid[2] == grid[4] && grid[4] == grid[6] && grid[6] == botChar)
        {
            grid[2] = '#';
            grid[4] = '#';
            grid[6] = '#';

            Print();
            YouLose();
            EndOfRound(&exit, &round, &endOfRound);
        }
    }

    /////////////////////////////////////////////

    void CheckDraw()
    {
        //Draw
        if (emptyCells == 0)
        {
            emptyCells = cells;
            Draw();
            EndOfRound(&exit, &round, &endOfRound);
        }
    }

    ///////////////////////////////////////////////////

    void Play()
    {
        Greetings();
        do
        {
            StartRound();
            do
            {
                UserTurn();

                CheckUserWin();
                if (endOfRound == true){ continue; }

                CheckBotWin();
                if (endOfRound == true){ continue; }

                CheckDraw();
                if (endOfRound == true){ continue; }

                if (exit == 1)
                {
                    break;
                }
                
                BotTurn();

                CheckUserWin();
                if (endOfRound == true){ continue; }

                CheckBotWin();
                if (endOfRound == true){ continue; }

                CheckDraw();
                if (endOfRound == true){ continue; }

            } while (endOfRound != true);

        } while (exit != true);

    }

};


int main()
{
    setlocale(LC_ALL, "en_US.UTF-8");

#ifdef _WIN32
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
#endif

    srand(time(nullptr));

    MemeTicTacToe A1;

    A1.Play();

}