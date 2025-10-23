#include <iostream>
#include <ctime>

using namespace std;

const short cells = 9;
short emptyCell = cells;


    void Print(char *arr2)
    {
        cout << "\n";
        cout << " " << arr2[0] << " ┃ " << arr2[1] << " ┃ "  << arr2[2] << " \n";
        cout << "━━━╋━━━╋━━━\n";
        cout << " " << arr2[3] << " ┃ " << arr2[4] << " ┃ "  << arr2[5] << " \n";
        cout << "━━━╋━━━╋━━━\n";
        cout << " " << arr2[6] << " ┃ " << arr2[7] << " ┃ "  << arr2[8] << " \n";
        cout << "\n";
    };

    void EndOfRound(bool *exit, short *round, bool *endOfRound)
    {
        emptyCell = cells;
        cout << " *Если хотите выйти из игры введите цифру 1\n *Если хотите ещё раунд введите цифру 0\n *Ваш ввод: ";
        cin >> *exit;
        if (*exit != 1)
        {
            (*round)++;
        }
        *endOfRound = true;
    }

    void YouWin()
    {
        cout << "Поздравляю! Ты Выиграл!!! :D\n\n\n";
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
        cout << "Ты проиграл! :<\n\n\n";
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
        cout << "Ничья! :/\n\n\n";
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
    


int main()
{
    setlocale(0, "");
    srand(time(nullptr));

    


    short userPlace, botPlace;
    bool userSymbol;


    short round = 1;

    char arr2[cells];
    char userChar, botChar;

    bool exit = false;
    bool endOfRound = false;

    for (int i = 0; i < cells; i++)
    {
        arr2[i] = ' ';
    }
    
    cout << "##### Игра Крестики-Нолики #####\n";
    cout << "Разработчик: Terrakllee\n\n";

    
    do
    {
        endOfRound = false;
        emptyCell = cells;

        for (int i = 0; i < cells; i++)
        {
            arr2[i] = ' ';
        }

        cout << "Раунд № " << round << "\n";
        cout << " *Если вы хотите играть за X введите цифру 1 \n *Если вы хотите играть за O введите цифру 0\n *Ваш ввод: ";
        cin >> userSymbol;
        

        if (userSymbol == true)
        {
            userChar = 'X';
            botChar = 'O';
        }
        else if (userSymbol == false)
        {
            userChar = 'O';
            botChar = 'X';
        }

        Print(arr2);

        do
        {
            cout << "Ваш ход: ";

            do
            {
                cin >> userPlace;
            } while (userPlace < 1 || userPlace > 9 || arr2[userPlace-1] != ' ');

            cout << "\n";

            arr2[userPlace-1] = userChar;
            emptyCell--;

            Print(arr2);

            //Row wins USER
            if (arr2[0] == arr2[1] && arr2[1] == arr2[2] && arr2[2] == userChar)
            {
                arr2[0] = '#';
                arr2[1] = '#';
                arr2[2] = '#';

                Print(arr2);
                YouWin();
                EndOfRound(&exit, &round, &endOfRound);
                continue;
            }

            if (arr2[3] == arr2[4] && arr2[4] == arr2[5] && arr2[5] == userChar)
            {
                arr2[3] = '#';
                arr2[4] = '#';
                arr2[5] = '#';

                Print(arr2);
                YouWin();
                EndOfRound(&exit, &round, &endOfRound);
                continue;
            }

            if (arr2[6] == arr2[7] && arr2[7] == arr2[8] && arr2[8] == userChar)
            {
                arr2[6] = '#';
                arr2[7] = '#';
                arr2[8] = '#';

                Print(arr2);
                YouWin();
                EndOfRound(&exit, &round, &endOfRound);
                continue;
            }

            //Col wins USER
            if (arr2[0] == arr2[3] && arr2[3] == arr2[6] && arr2[6] == userChar)
            {
                arr2[0] = '#';
                arr2[3] = '#';
                arr2[6] = '#';

                Print(arr2);
                YouWin();
                EndOfRound(&exit, &round, &endOfRound);
                continue;
            }

            if (arr2[1] == arr2[4] && arr2[4] == arr2[7] && arr2[7] == userChar)
            {
                arr2[1] = '#';
                arr2[4] = '#';
                arr2[7] = '#';

                Print(arr2);
                YouWin();
                EndOfRound(&exit, &round, &endOfRound);
                continue;
            }

            if (arr2[2] == arr2[5] && arr2[5] == arr2[8] && arr2[8] == userChar)
            {
                arr2[2] = '#';
                arr2[5] = '#';
                arr2[8] = '#';

                Print(arr2);
                YouWin();
                EndOfRound(&exit, &round, &endOfRound);
                continue;
            }

            //Axis wins USER
            if (arr2[0] == arr2[4] && arr2[4] == arr2[8] && arr2[8] == userChar)
            {
                arr2[0] = '#';
                arr2[4] = '#';
                arr2[8] = '#';

                Print(arr2);
                YouWin();
                EndOfRound(&exit, &round, &endOfRound);
                continue;
            }

            if (arr2[2] == arr2[4] && arr2[4] == arr2[6] && arr2[6] == userChar)
            {
                arr2[2] = '#';
                arr2[4] = '#';
                arr2[6] = '#';

                Print(arr2);
                YouWin();
                EndOfRound(&exit, &round, &endOfRound);
                continue;
            }




            //Row wins BOT
            if (arr2[0] == arr2[1] && arr2[1] == arr2[2] && arr2[2] == botChar)
            {
                arr2[0] = '#';
                arr2[1] = '#';
                arr2[2] = '#';

                Print(arr2);
                YouLose();
                EndOfRound(&exit, &round, &endOfRound);
                continue;
            }

            if (arr2[3] == arr2[4] && arr2[4] == arr2[5] && arr2[5] == botChar)
            {
                arr2[3] = '#';
                arr2[4] = '#';
                arr2[5] = '#';

                Print(arr2);
                YouLose();
                EndOfRound(&exit, &round, &endOfRound);
                continue;
            }

            if (arr2[6] == arr2[7] && arr2[7] == arr2[8] && arr2[8] == botChar)
            {
                arr2[6] = '#';
                arr2[7] = '#';
                arr2[8] = '#';

                Print(arr2);
                YouLose();
                EndOfRound(&exit, &round, &endOfRound);
                continue;
            }

            //Col wins BOT
            if (arr2[0] == arr2[3] && arr2[3] == arr2[6] && arr2[6] == botChar)
            {
                arr2[0] = '#';
                arr2[3] = '#';
                arr2[6] = '#';

                Print(arr2);
                YouLose();
                EndOfRound(&exit, &round, &endOfRound);
                continue;
            }

            if (arr2[1] == arr2[4] && arr2[4] == arr2[7] && arr2[7] == botChar)
            {
                arr2[1] = '#';
                arr2[4] = '#';
                arr2[7] = '#';

                Print(arr2);
                YouLose();
                EndOfRound(&exit, &round, &endOfRound);
                continue;
            }

            if (arr2[2] == arr2[5] && arr2[5] == arr2[8] && arr2[8] == botChar)
            {
                arr2[2] = '#';
                arr2[5] = '#';
                arr2[8] = '#';

                Print(arr2);
                YouLose();
                EndOfRound(&exit, &round, &endOfRound);
                continue;
            }

            //Axis wins BOT
            if (arr2[0] == arr2[4] && arr2[4] == arr2[8] && arr2[8] == botChar)
            {
                arr2[0] = '#';
                arr2[4] = '#';
                arr2[8] = '#';

                Print(arr2);
                YouLose();
                EndOfRound(&exit, &round, &endOfRound);
                continue;
            }

            if (arr2[2] == arr2[4] && arr2[4] == arr2[6] && arr2[6] == botChar)
            {
                arr2[2] = '#';
                arr2[4] = '#';
                arr2[6] = '#';

                Print(arr2);
                YouLose();
                EndOfRound(&exit, &round, &endOfRound);
                continue;
            }
            

            //Draw
            if (emptyCell == 0)
            {
                emptyCell = cells;
                Draw();
                EndOfRound(&exit, &round, &endOfRound);
                continue;
            }

            if (exit == 1)
            {
                break;
            }
            

            cout << "Бот думает...\n";

            do
            {
                botPlace = rand() % 9;
            } while (arr2[botPlace] != ' ');
            
            

            arr2[botPlace] = botChar;
            emptyCell--;

            

            Print(arr2);


            //Row wins USER
            if (arr2[0] == arr2[1] && arr2[1] == arr2[2] && arr2[2] == userChar)
            {
                arr2[0] = '#';
                arr2[1] = '#';
                arr2[2] = '#';

                Print(arr2);
                YouWin();
                EndOfRound(&exit, &round, &endOfRound);
                continue;
            }

            if (arr2[3] == arr2[4] && arr2[4] == arr2[5] && arr2[5] == userChar)
            {
                arr2[3] = '#';
                arr2[4] = '#';
                arr2[5] = '#';

                Print(arr2);
                YouWin();
                EndOfRound(&exit, &round, &endOfRound);
                continue;
            }

            if (arr2[6] == arr2[7] && arr2[7] == arr2[8] && arr2[8] == userChar)
            {
                arr2[6] = '#';
                arr2[7] = '#';
                arr2[8] = '#';

                Print(arr2);
                YouWin();
                EndOfRound(&exit, &round, &endOfRound);
                continue;
            }

            //Col wins USER
            if (arr2[0] == arr2[3] && arr2[3] == arr2[6] && arr2[6] == userChar)
            {
                arr2[0] = '#';
                arr2[3] = '#';
                arr2[6] = '#';

                Print(arr2);
                YouWin();
                EndOfRound(&exit, &round, &endOfRound);
                continue;
            }

            if (arr2[1] == arr2[4] && arr2[4] == arr2[7] && arr2[7] == userChar)
            {
                arr2[1] = '#';
                arr2[4] = '#';
                arr2[7] = '#';

                Print(arr2);
                YouWin();
                EndOfRound(&exit, &round, &endOfRound);
                continue;
            }

            if (arr2[2] == arr2[5] && arr2[5] == arr2[8] && arr2[8] == userChar)
            {
                arr2[2] = '#';
                arr2[5] = '#';
                arr2[8] = '#';

                Print(arr2);
                YouWin();
                EndOfRound(&exit, &round, &endOfRound);
                continue;
            }

            //Axis wins USER
            if (arr2[0] == arr2[4] && arr2[4] == arr2[8] && arr2[8] == userChar)
            {
                arr2[0] = '#';
                arr2[4] = '#';
                arr2[8] = '#';

                Print(arr2);
                YouWin();
                EndOfRound(&exit, &round, &endOfRound);
                continue;
            }

            if (arr2[2] == arr2[4] && arr2[4] == arr2[6] && arr2[6] == userChar)
            {
                arr2[2] = '#';
                arr2[4] = '#';
                arr2[6] = '#';

                Print(arr2);
                YouWin();
                EndOfRound(&exit, &round, &endOfRound);
                continue;
            }




            //Row wins BOT
            if (arr2[0] == arr2[1] && arr2[1] == arr2[2] && arr2[2] == botChar)
            {
                arr2[0] = '#';
                arr2[1] = '#';
                arr2[2] = '#';

                Print(arr2);
                YouLose();
                EndOfRound(&exit, &round, &endOfRound);
                continue;
            }

            if (arr2[3] == arr2[4] && arr2[4] == arr2[5] && arr2[5] == botChar)
            {
                arr2[3] = '#';
                arr2[4] = '#';
                arr2[5] = '#';

                Print(arr2);
                YouLose();
                EndOfRound(&exit, &round, &endOfRound);
                continue;
            }

            if (arr2[6] == arr2[7] && arr2[7] == arr2[8] && arr2[8] == botChar)
            {
                arr2[6] = '#';
                arr2[7] = '#';
                arr2[8] = '#';

                Print(arr2);
                YouLose();
                EndOfRound(&exit, &round, &endOfRound);
                continue;
            }

            //Col wins BOT
            if (arr2[0] == arr2[3] && arr2[3] == arr2[6] && arr2[6] == botChar)
            {
                arr2[0] = '#';
                arr2[3] = '#';
                arr2[6] = '#';

                Print(arr2);
                YouLose();
                EndOfRound(&exit, &round, &endOfRound);
                continue;
            }

            if (arr2[1] == arr2[4] && arr2[4] == arr2[7] && arr2[7] == botChar)
            {
                arr2[1] = '#';
                arr2[4] = '#';
                arr2[7] = '#';

                Print(arr2);
                YouLose();
                EndOfRound(&exit, &round, &endOfRound);
                continue;
            }

            if (arr2[2] == arr2[5] && arr2[5] == arr2[8] && arr2[8] == botChar)
            {
                arr2[2] = '#';
                arr2[5] = '#';
                arr2[8] = '#';

                Print(arr2);
                YouLose();
                EndOfRound(&exit, &round, &endOfRound);
                continue;
            }

            //Axis wins BOT
            if (arr2[0] == arr2[4] && arr2[4] == arr2[8] && arr2[8] == botChar)
            {
                arr2[0] = '#';
                arr2[4] = '#';
                arr2[8] = '#';

                Print(arr2);
                YouLose();
                EndOfRound(&exit, &round, &endOfRound);
                continue;
            }

            if (arr2[2] == arr2[4] && arr2[4] == arr2[6] && arr2[6] == botChar)
            {
                arr2[2] = '#';
                arr2[4] = '#';
                arr2[6] = '#';

                Print(arr2);
                YouLose();
                EndOfRound(&exit, &round, &endOfRound);
                continue;
            }
            

            //Draw
            if (emptyCell == 0)
            {
                emptyCell = cells;
                Draw();
                EndOfRound(&exit, &round, &endOfRound);
                continue;
            }


            
            


            cout << "\n";
        } while (endOfRound != true);

    } while (exit != true);
    

}