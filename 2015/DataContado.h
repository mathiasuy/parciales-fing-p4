#import "DataPago.h"

class DataContado : public DataPago{
	private:
		float descuento;
	public:
		float getDescuento();
		DataContado(float);
		~DataContado();
}