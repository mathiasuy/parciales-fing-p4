float DataPago::getMonto(){
	return this->monto;
};

void DataPago::DataPago(float a){
	this->monto = a;
};

virtual DataPago::~DataPago(){};
