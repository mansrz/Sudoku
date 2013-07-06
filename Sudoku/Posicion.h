#ifndef POSICION_H
#define POSICION_H


/**
* @file Posicion.h
* @brief Este archivo contiene la interfaz de la clase Posicion
*
* @author Veronica Pozo
* @author Jose Salas
* @author Manuel Suarez
*
* @date 06/01/2013
*/
class Posicion {
public:
    /**
    * Posicion Constructor de la clase Posicion
    * @param Constructor vacio
    */
    Posicion(){}

    /**
    * Posicion Constructor de la clase Posicion
    * @param pos posicion en el tablero
    * @param valor que tiene esa posicion
    */
    Posicion(int pos, int valor_) : posicion(pos),valor(valor_){ }

    /**
    * Posiciones Constructor de la clase Posiciones
    * @param Posicion otra clase posicion
    */
    Posicion(const Posicion& other) {
        posicion = other.posicion;
        valor = other.valor;

    }
    /**
     * @brief GetPos
     * @return retornar la posicion
     */
    int GetPos(void){return posicion;}
    /**
     * @brief GetValor
     * @return retornar el valor
     */
    int GetValor(void) { return valor; }

private:
    int posicion;
    int valor;

};


#endif // POSICION_H
