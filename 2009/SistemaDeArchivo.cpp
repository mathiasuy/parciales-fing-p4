	SistemaDeArchivo* SistemaDeArchivo::instance = NULL;

	void SistemaDeArchivo::crearArchivo(int idCarpeta,int idArchivo,int tamanio){
		KeyInteger ski(idCarpeta);
		Directorio* directorio = (Directorio*)elementos->find(&ski); // NOTAR QUE USE VERSIÓN ALTERNATIVA DE KEY ESTATICA (NO PRECISA LIBERAR MEMORIA)
		if (directorio != NULL){
			Archivo* archivo = directorio->crearArchivo(idArchivo,tamanio);
			this->elementos->add(new KeyInteger(idArchivo),archivo);
		}else
			throw std::invalid_argument("Directorio no valido");
	};

	int SistemaDeArchivo::calcularTamanio(int id){
		KeyInteger ski(id);
		Elemento* e = elementos;
		id (e == NULL){
			throw std::invalid_argument("Elemento no existe!");
		}
		return e->calcularTamanio();
	};

	SistemaDeArchivo* SistemaDeArchivo::getInstance(){
		if (SistemaDeArchivo::instance == NULL){
			SistemaDeArchivo::instance = new SistemaDeArchivo();
		}
		return SistemaDeArchivo::instance;
	};

	SistemaDeArchivo::~SistemaDeArchivo(){
		IIterator* i = elementos->getIterator();
		while (i->hasCurrent()){
			Elemento* e = (Elemento*)i->getCurrent();
			elemenos->remove(e);
			delete e;
		}
	};

	SistemaDeArchivo::SistemaDeArchivo(){
		elementos = new List();
	};