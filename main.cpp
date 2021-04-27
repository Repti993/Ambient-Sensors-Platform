/**
* @file main.cpp
* @brief Główny plik programu
*
* @author Michał Dołharz
*
*/

#include "mainwindow.h"

#include <QApplication>

/*!
 * \brief qMain Funkcja main() programu.
 * \param argc Liczba parametrów wejściowych.
 * \param argv Parametry wejściowe.
 * \return Działanie programu.
 */
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}