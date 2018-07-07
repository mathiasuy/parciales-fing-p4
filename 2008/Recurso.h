class Recurso{
private:
	string nombre;
public:
	virtual void cargar()=0;
	virtual ~Recurso();
}