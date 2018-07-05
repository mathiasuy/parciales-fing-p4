ContenidoAplicacionXX* vistas[3];
ContenidoAplicacionXX* visible;

AplicacionXX::AplicacionXX(ContenidoAplicacionXX* vistas[3], ContenidoAplicacionXX* visible){
	this->vistas = vistas;
};

AplicacionXX::~AplicacionXX(){

};

void AplicacionXX::actualizarContenido(){
	visible = NSManejadorConexion::abrirConexion()->obtenerContenido(this->visible->obtenerURL());
};