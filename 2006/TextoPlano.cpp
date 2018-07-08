	DataDocumento TextoPlano::getDataDocumento(){
		DataDocumento d = Documento::getDataDocumento();
		return DataDocumento(d.getNombre(),d.getDescripcion(),cambios->size()+1);
	};

	TextoPlano::TextoPlano(string a, string b)
	:nombre(a),descripcion(b),cambios(new List)
	{};

	TextoPlano::addCambios(Cambios* c){
		cambios->add(c);
	}

	TextoPlano::~TextoPlano(){
		IIterator i = cambios->getIterator();
		while (i->hasCurrent()){
			Cambios* c = (Cambios*)i->removeCurrent();
			delete c;
		}
		delete i;
		delete cambios;
	};
