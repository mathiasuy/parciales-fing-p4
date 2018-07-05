#include "NSIAplicacion.h"
#include "ContenidoAplicacionXX.h"

class AplicacionXX : public NSIAplicacion{
private:
	ContenidoAplicacionXX* vistas[3];
	ContenidoAplicacionXX* visible;
public:
	AplicacionXX(ContenidoAplicacionXX* vistas[3], ContenidoAplicacionXX* visible);
	~AplicacionXX();
	actualizarContenido();
}