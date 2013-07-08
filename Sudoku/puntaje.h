#ifndef PUNTAJE_H
#define PUNTAJE_H

/**
* @file Puntaje.h
* @brief Este archivo contiene la interfaz de la clase Puntaje
*
* @author Veronica Pozo
* @author Manuel Suarez
*
* @date 07/07/2013
*/

#include <QString>

class Puntaje {
public:
    /**
    * Puntaje Constructor de la clase Puntaje
    * @param Constructor vacio
    */
    Puntaje(){}

    /**
    * Puntaje Constructor de la clase Puntaje
    * @param nombre Nombre del jugador
    * @param tiempo Tiempo que tardo en ganar el juego
    * @param nivel Nivel del juego
    */
    Puntaje(int nivel, QString nombre, QString tiempo, int valor) : nivel(nivel), nombre(nombre),tiempo(tiempo), valor(valor){ }

    void setValores(int nivel, QString nombre, QString tiempo, int valor) {this->nivel = nivel; this->nombre=nombre; this->tiempo=tiempo; this->valor=valor;}

    /**
     * @brief getNombre
     * @return retornar el nombre del jugador
     */
    QString getNombre(void){return nombre;}


    /**
     * @brief getTiempo
     * @return retornar el tiempo
     */
    QString getTiempo(void) { return tiempo; }


    /**
     * @brief getValor
     * @return retornar el valor del tiempo (min*3600+segundos*60+milisegundos)
     */
    int getValor(void) { return valor; }

    /**
     * @brief getNivel
     * @return retornar el nivel
     */
    int getNivel(void) { return nivel; }

private:
    QString nombre;
    QString tiempo;
    int valor;
    int nivel;

};

#endif // PUNTAJE_H
