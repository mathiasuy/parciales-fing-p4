#include "NSIContenido.h"
#include <string>

using namespace std;

class ContenidoAplicacionXX : public NSIContenido{
	private:
		string url;
	public:
		ContenidoAplicacionXX(string);
		~ContenidoAplicacionXX();

		string obtenerURL();
}