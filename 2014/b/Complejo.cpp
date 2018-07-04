double Complejo::calcularPeso(){
	double sum = 0;
	for (set<Paquete*>::iterator i = paquetes.begin(); i != paquetes.end(); i++){
		sum += *i->calcularPeso();
	}
	return sum;
}

double Complejo::calcularVolumen(){
	double sum = 0;
	for (set<Paquete*>::iterator i = paquetes.begin(); i != paquetes.end(); i++){
		sum += *i->calcularVolumen();
	}
	return sum;
}

void Complejo::setOptVolumen(OptimizadorVolumen o){
	this->optimizador = o;

}

Complejo::Complejo(){

}

Complejo::~Complejo(){
	for (set<Paquete*>::iterator i = paquetes.begin(); i!=paquetes.end(); i++){
		delete *i;
	}
	delete optimizador;
}