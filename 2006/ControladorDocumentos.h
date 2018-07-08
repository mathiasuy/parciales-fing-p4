class ControladorDocumentos{
private:
	IStringDictionary* documentos;
	ControladorDocumentos();
	static ControladorDocumentos* instance;
public:
	ControladorDocumentos* getInstance();
	ICollection* listarDocumentos();
	void borrarDocumento(string);
	virtual ~ControladorDocumentos();
}