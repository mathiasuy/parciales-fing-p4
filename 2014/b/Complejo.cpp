double Complejo::calcularPeso(){
	double sum = 0;
	for (set<Paquete*>::iterator i = paquetes.begin(); i != paquetes.end(); i++){
		sum += *i->calcularPeso();
	}
	return sum;
}

double Complejo::calcularVolumen(){
	return this->optimizador->volOptimo(this->paquetes);
}

void Complejo::setOptVolumen(OptimizadorVolumen o){
	this->optimizador = o;

}

Complejo::Complejo(OptimizadorVolumen* i, set<Paquete*> componentes){
	this->componentes = componentes;
	this->optimizador = i;
}

Complejo::~Complejo(){
	for (set<Paquete*>::iterator i = paquetes.begin(); i!=paquetes.end(); i++){
		delete *i;
	}
	delete optimizador;
}