#include "clsMainScreen.h"
#include "clsCurrencyExchangeMainScreen.h"

short clsMainScreen::_ReadMainMenueOption()
{
    cout << setw(37) << left << "" << "Choose what do you want to do? [1 to 10]? ";
    short Choice = clsInputValidate::ReadShortNumberBetween(1, 10, "Enter Number between 1 to 9? ");
    return Choice;
}

void clsMainScreen::_GoBackToMainMenue()
{
    cout << setw(37) << left << "" << "\n\tPress any key to go back to Main Menue...\n";
    system("pause>0");
    ShowMainMenue();
}

void clsMainScreen::_ShowAllClientsScreen() { clsClientListScreen::ShowClientsList(); }
void clsMainScreen::_ShowAddNewClientsScreen() { clsAddNewClientScreen::ShowAddNewClientScreen(); }
void clsMainScreen::_ShowDeleteClientScreen() { clsDeleteClientScreen::ShowDeleteClientScreen(); }
void clsMainScreen::_ShowUpdateClientScreen() { clsUpdateClientScreen::ShowUpdateClientScreen(); }
void clsMainScreen::_ShowFindClientScreen() { clsFindClientScreen::ShowFindClientScreen(); }
void clsMainScreen::_ShowTransactionsMenue() { clsTransactionsScreen::ShowTransactionsMenue(); }
void clsMainScreen::_ShowManageUsersMenue() { clsManageUsersScreen::ShowManageUsersMenue(); }
void clsMainScreen::_ShowLoginRegisterScreen()
{ 
    clsLoginRegisterScreen::ShowLoginRegisterScreen();
}
void clsMainScreen::_ShowCurrencyExchangeMainScreen()
{
    clsCurrencyExchangeMainScreen::ShowCurrenciesMenue();
}
void clsMainScreen::_Logout()
{ 
    CurrentUser = clsUser::Find("", "");
}

void clsMainScreen::_PerfromMainMenueOption(enMainMenueOptions MainMenueOption)
{
    switch (MainMenueOption)
    {
    case enMainMenueOptions::eListClients:
        system("cls");
        _ShowAllClientsScreen();
        _GoBackToMainMenue();
        break;
    case enMainMenueOptions::eAddNewClient:
        system("cls");
        _ShowAddNewClientsScreen();
        _GoBackToMainMenue();
        break;
    case enMainMenueOptions::eDeleteClient:
        system("cls");
        _ShowDeleteClientScreen();
        _GoBackToMainMenue();
        break;
    case enMainMenueOptions::eUpdateClient:
        system("cls");
        _ShowUpdateClientScreen();
        _GoBackToMainMenue();
        break;
    case enMainMenueOptions::eFindClient:
        system("cls");
        _ShowFindClientScreen();
        _GoBackToMainMenue();
        break;
    case enMainMenueOptions::eShowTransactionsMenue:
        system("cls");
        _ShowTransactionsMenue();
        _GoBackToMainMenue();
        break;
    case enMainMenueOptions::eManageUsers:
        system("cls");
        _ShowManageUsersMenue();
        _GoBackToMainMenue();
        break;
    case enMainMenueOptions::eLoginRegister:
        system("cls");
        _ShowLoginRegisterScreen();
        _GoBackToMainMenue();
        break;
    case enMainMenueOptions::eCurrncyExchange:
        system("cls");
        _ShowCurrencyExchangeMainScreen();
        _GoBackToMainMenue();
        break;
    case enMainMenueOptions::eExit:
        system("cls");
        _Logout();
        break;
    }
}

void clsMainScreen::ShowMainMenue()
{
    system("cls");
    _DrawScreenHeader("\t\tMain Screen");

    cout << setw(37) << left << "" << "===========================================\n";
    cout << setw(37) << left << "" << "\t\t\tMain Menue\n";
    cout << setw(37) << left << "" << "===========================================\n";
    cout << setw(37) << left << "" << "\t[1] Show Client List.\n";
    cout << setw(37) << left << "" << "\t[2] Add New Client.\n";
    cout << setw(37) << left << "" << "\t[3] Delete Client.\n";
    cout << setw(37) << left << "" << "\t[4] Update Client Info.\n";
    cout << setw(37) << left << "" << "\t[5] Find Client.\n";
    cout << setw(37) << left << "" << "\t[6] Transactions.\n";
    cout << setw(37) << left << "" << "\t[7] Manage Users.\n";
    cout << setw(37) << left << "" << "\t[8] Login Register.\n";
    cout << setw(37) << left << "" << "\t[9] Currency Exchange.\n";
    cout << setw(37) << left << "" << "\t[10] Logout.\n";
    cout << setw(37) << left << "" << "===========================================\n";

    _PerfromMainMenueOption((enMainMenueOptions)_ReadMainMenueOption());
}
