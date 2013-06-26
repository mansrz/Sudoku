#include <stdlib.h>
#include <stack>
#include <time.h>

/**
* @file generador.h
* @brief Este archivo contiene la interfaz del generador de Sudokus
*
* @author Veronica Pozo
* @author Jose Salas
* @author Manuel Suarez
*
* @date 06/01/2013
*/

class Generador
{
public:

    /**
    * Generador Metodo constructor.
    */
    Generador(void);


    /**
    * ~Generador Destructor
    */
    virtual ~Generador(void);
    //static void GenerateBoard(Board * board, int level = 1);


    /**
    * GenerarTablero
    * @param dificultad
    */
    void GenerarTablero(int dificultad);
    //static bool SolveBoard(Board * board);


    /**
    * resolverTablero
    * @return Verdadero si  , falso si no lo es.
    */
    bool resolverTablero();


    /**
    * escanearSolucion
    * @return Verdadero si la jugada es valida, falso si no lo es.
    */
    bool escanearSolucion();

    int *tablero;


 private:

    /**
    * BackTrackSolucion
    * @param startx
    * @param starty
    * @return Verdadero si la jugada es valida, falso si no lo es.
    */
    bool BackTrackSolucion(int startx, int starty);


    /**
    * esCompleto
    * @return Verdadero si la jugada es valida, falso si no lo es.
    */
    bool esCompleto();


    /**
    * esValido
    * @return Verdadero si la jugada es valida, falso si no lo es.
    */
    bool esValido();


    /**
    * generarSolucionRandom
    */
    void generarSolucionRandom();


    /**
    * MovimientoValido
    * @param x
    * @param y
    * @param v
    * @return Verdadero si la jugada es valida, falso si no lo es.
    */
    bool MovimientoValido(int x, int y, int v);


    /**
    * Set
    * @param x
    * @param y
    * @param v
    * @return Verdadero si la jugada es valida, falso si no lo es.
    */
    void Set(int x, int y, int v);


    /**
    * ChequearHorizontal
    * @param x
    * @param y
    * @param v
    * @return Verdadero si la jugada es valida, falso si no lo es.
    */
    bool ChequearHorizontal(int x, int y, int v);


    /**
    * ChequearVertical
    * @param x
    * @param y
    * @param v
    * @return Verdadero si la jugada es valida, falso si no lo es.
    */
    bool ChequearVertical(int x, int y, int v);


    /**
    * ChequearBloque
    * @param x
    * @param y
    * @param v
    * @return Verdadero si la jugada es valida, falso si no lo es.
    */
    bool ChequearBloque(int x, int y, int v);


    /**
    * ValidarHorizontal
    * @return Verdadero si la jugada es valida, falso si no lo es.
    */
    bool ValidarHorizontal();


    /**
    * ValidarVertical
    * @return Verdadero si la jugada es valida, falso si no lo es.
    */
    bool ValidarVertical();


    /**
    * ValidarBloque
    * @return Verdadero si la jugada es valida, falso si no lo es.
    */
    bool ValidarBloque();

};


