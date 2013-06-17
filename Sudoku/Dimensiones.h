#ifndef DIMENSIONES_H
#define DIMENSIONES_H

#include <QString>


class Dimensiones {
public:
    static const int margin = 10;

    static const int numeroSize       = 50; //Tamaño del numero

    static const int tableroSize = numeroSize * 9 + 4 * margin; //Tamaño del tablero

    //static const int sceneWidth    = boardSize + 2 * margin + HUDWidth + margin;
    //static const int sceneHeight   = boardSize;
    //inline static double sceneRatio(void) { return (double) sceneWidth / sceneHeight; }

    //static double scaleWithTextLength(QString text, QString translatedText) { return (double) text.size() / translatedText.size(); }
};



#endif // DIMENSIONES_H
