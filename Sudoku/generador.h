#include <stdlib.h>
#include <stack>
#include <time.h>
class Generador
{
public:

    Generador(void);
    virtual ~Generador(void);
//static void GenerateBoard(Board * board, int level = 1);
    void GenerarTablero(int dificultad);
    //static bool SolveBoard(Board * board);
    bool resolverTablero();
    bool escanearSolucion();
    int *tablero;
 private:
    bool BackTrackSolucion(int startx, int starty);
    bool esCompleto();
    bool esValido();
    void generarSolucionRandom();
    bool MovimientoValido(int x, int y, int v);
    void Set(int x, int y, int v);
    bool ChequearHorizontal(int x, int y, int v);
    bool ChequearVertical(int x, int y, int v);
    bool ChequearBloque(int x, int y, int v);
    bool ValidarHorizontal();
    bool ValidarVertical();
    bool ValidarBloque();
};


