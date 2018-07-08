	ControladorDocumentos* ControladorDocumentos::instance = NULL;

	ControladorDocumentos::ControladorDocumentos():documentos(new List){};

	ControladorDocumentos* getInstance(){
		if (instance == NULL)
			instance = new ControladorDocumentos;
		return instance;
	};

	ICollection* listarDocumentos(){
		IIterator i = documentos->getIterator();
		IStringDictionary* l = new List;
		while (i->hasCurrent()){
			Documento* doc = ((Documento*)i)->getCurrent();
			Key ssk(doc->getNombre());
			//sé que acá hay algo mal, el polimorfismo no funcionará
			ICollectible* dt = doc->getDataDocumento();
			l->add(doc,ssk);
			i->next();
		}
		delete i;
		return l;
	};

	void ControladorDocumentos::borrarDocumento(string s){
		Key* k = new Key(s);
		Documento* d = documentos->find(k);
		delete k;
		return d;
	};

	ControladorDocumentos::~ControladorDocumentos(){
		IIterator* i = documentos->getIterator();
		while (i->hasCurrent()){
			Documento* doc = (Documento*)(i->removeCurrent());
			delete doc;
		}
		delete i;
		delete documentos;
	};

