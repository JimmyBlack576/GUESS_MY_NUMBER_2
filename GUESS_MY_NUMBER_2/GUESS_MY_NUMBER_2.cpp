#include <iostream>
#include <time.h>
#include <Windows.h>

using namespace std;
// Функция отображения жизней

void lives1(int lives1) {

    switch (lives1)
    {
    case 1:
    {
        cout << "[]\n";
        break;
    }
    case 2:
    {
        cout << "[][]\n";
        break;
    }
    case 3:
    {
        cout << "[][][]\n";
        break;
    }
    case 4:
    {
        cout << "[][][][]\n";
        break;
    }
    case 5:
    {
        cout << "[][][][][]\n";
        break;
    }
    default:
    {
        cout << "У вас не осталось жизней!\n"
            << "\tВы проиграли!\n\n";
        break;
    }
    }
}

void lives2(int lives2) {

    switch (lives2)
    {
    case 1: {
        cout << "[]\n";
        break;
    }
    case 2: {
        cout << "[][]\n";
        break;
    }
    case 3: {
        cout << "[][][]\n";
        break;
    }
    case 4: {
        cout << "[][][][]\n";
        break;
    }
    case 5: {
        cout << "[][][][][]\n";
        break;
    }
    case 6: {
        cout << "[][][][][][]\n";
        break;
    }
    case 7: {
        cout << "[][][][][][][]\n";
        break;
    }
    case 8: {
        cout << "[][][][][][][][]\n";
        break;
    }
    case 9: {
        cout << "[][][][][][][][][]\n";
        break;
    }
    case 10: {
        cout << "[][][][][][][][][][]\n";
        break;
    }
    case 11: {
        cout << "[][][][][][][][][][][]\n";
        break;
    }
    case 12: {
        cout << "[][][][][][][][][][][][]\n";
        break;
    }
    case 13: {
        cout << "[][][][][][][][][][][][][]\n";
        break;
    }
    case 14: {
        cout << "[][][][][][][][][][][][][][]\n";
        break;
    }
    case 15: {
        cout << "[][][][][][][][][][][][][][][]\n";
        break;
    }
    case 16: {
        cout << "[][][][][][][][][][][][][][][][]\n";
        break;
    }
    case 17: {
        cout << "[][][][][][][][][][][][][][][][][]\n";
        break;
    }
    case 18: {
        cout << "[][][][][][][][][][][][][][][][][][]\n";
        break;
    }
    case 19: {
        cout << "[][][][][][][][][][][][][][][][][][][]\n";
        break;
    }
    case 20: {
        cout << "[][][][][][][][][][][][][][][][][][][][]\n";
        break;
    }
    case 21: {
        cout << "[][][][][][][][][][][][][][][][][][][][][]\n";
        break;
    }
    case 22: {
        cout << "[][][][][][][][][][][][][][][][][][][][][][]\n";
        break;
    }
    case 23: {
        cout << "[][][][][][][][][][][][][][][][][][][][][][][]\n";
        break;
    }
    case 24: {
        cout << "[][][][][][][][][][][][][][][][][][][][][][][][]\n";
        break;
    }
    case 25: {
        cout << "[][][][][][][][][][][][][][][][][][][][][][][][][]\n";
        break;
    }
    default:
    {
        cout << "У вас не осталось жизней!\n"
            << "\tВы проиграли!\n\n";
        break;
    }
    }
}




int main()
{
    setlocale(LC_ALL, "ru");
    srand(time(NULL));

    int userchoice, level=1, pcnum, usernum, userpoints = 0, pcpoints=0,countfail=0;
    char help;
    do 
    {
        cout << "\tДобро пожаловать в игру \"Угадай Число\" ! \n\n";
        cout << "\t\t1. Начать игру \n"
            << "\t\t2.   Выход \n";
        cin >> userchoice;
       
        if (userchoice == 1)
        {
            switch (level)
            {// Первый уровень
            case 1:
            {
                cout << "Низкий уровень сложности\n\n";
                    
                for (int j = 1; j <= 3; j++)
                {
                    cout << j << " РАУНД \n\n";

                    cout << "\tНужно угадать число от 1 до 10.\n";

                    cout << "\tКомпьютер загадывает число... \n";
                    Sleep(1500);
                    pcnum = rand() % 9 + 1;
                    cout << "\tКакое число загадано?\n";
                    for (int i = 5; i > 0; i--)
                    {   
                        // Вывод подсказки
                        if (i < 4)
                        {
                            do
                            {
                                cout << "Хотите вять подсказку? (минус одна жизнь) Y - да/ N - нет \n";
                                cin >> help;
                            } while (help != 'y' && help != 'n');
                            if (help == 'y')
                            {
                                i--;
                                if (i == 0) { break; }
                                if (pcnum > usernum)
                                {
                                    cout << "\tВведённое число меньше загаданного =)\n";
                                }
                                else
                                {
                                    cout << "\tВведённое число больше загаданного =)\n";
                                }
                            }
                            else if (help == 'n')
                            {
                                cout << endl;
                            }
                        }

                        cout << "Жизни -> ";
                        lives1(i);
                        cin >> usernum;
                        
                        if (usernum == pcnum)
                        {
                            userpoints += i*5;
                            cout << "\tВы угадали!\n\n";
                            cout << "Вы набрали " << userpoints << " очков! \n\n";
                            break;
                        }
                        else
                        {
                            cout << "\tНеверно!\n\n";
                            continue;
                        }

                    }
                    //Вывод очков компьютера в случае проигрыша раунда
                    if (usernum != pcnum)
                    {
                        countfail++;
                        cout << "\tВаши жизни закончились!\n"
                             << "\tВы проиграли!\n\n";
                        pcpoints = 25 * countfail;
                    }
                    cout << "Ваш счёт - " << userpoints << " очков \n"
                        << "Счёт компьютера - " << pcpoints << " очков\n\n\n";  
                }
                //Условие перехода на второй уровень сложности
                if (userpoints < pcpoints) 
                {
                        cout << "На первом уровне компьютер набрал больше очков! \n";
                        cout << "\tИгра окончена!\n";
                        break;
                }  
            }
            case 2:
            {// Второй уровень
                cout << "\tПереход на высокий уровень сложности.\n\n";
                for (int j = 1; j <= 2; j++) 
                {
                cout << j << "РАУНД \n\n";
                cout<< "\tНужно угадать число от 10 до 100.\n";
                cout << "\tКомпьютер загадывает число... \n";
                Sleep(1500);
                pcnum = rand() % 90 + 10;
                cout << "\tКакое число загадано?\n";
                
                    for (int i = 25; i > 0; i--)
                    {
                        if (i < 15)
                        {
                            // Вывод подсказки
                            do
                            {
                                cout << "Хотите вять подсказку? (минус одна жизнь) Y - да/ N - нет \n";
                                cin >> help;
                            } while (help != 'y' && help != 'n');
                            if (help == 'y')
                            {
                                i--;
                                if (i == 0) { break; }
                                if (pcnum > usernum)
                                {
                                    cout << "\tВведённое число меньше загаданного =)\n";
                                }
                                else
                                {
                                    cout << "\tВведённое число больше загаданного =)\n";
                                }
                            }
                            else if (help == 'n')
                            {
                                cout << endl;
                            }
                        }

                        cout << "Жизни -> ";
                        lives2(i);
                        cin >> usernum;

                        if (usernum == pcnum)
                        {
                            userpoints += i * 10;
                            cout << "\tВы угадали!\n\n";
                            cout << "Вы набрали " << userpoints << " очков! \n\n";
                            break;
                        }
                        else
                        {
                            cout << "\tНеверно!\n\n";
                            continue;
                        }

                    }
                    if (usernum != pcnum)
                    {
                        countfail++;
                        cout << "\tВаши жизни закончились!\n"
                            << "\tВы проиграли!\n\n";
                        pcpoints = 250 * countfail;
                    }
                    cout << "Ваш счёт - " << userpoints << " очков \n"
                        << "Счёт компьютера - " << pcpoints << " очков\n\n\n";
                }
            }
            if (userpoints < pcpoints)
            {
                cout << "На втором уровне компьютер набрал больше очков! \n";
                cout << "\tИгра окончена!\n";
                break;
            }
            else 
            {
                cout << "\tВы победили!\n\n\n";
            }
            }
            Sleep(5000);
            system("pause");
            
        }
        else if (userchoice < 1 || userchoice>2) {
            cout << "\tНет такого пункта в меню!\n\n";
            continue;
        }
    
    } while (userchoice != 2); 

    
        

    
}
