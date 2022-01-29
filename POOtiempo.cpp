#include <iostream>
    using namespace std;

    class Tiempo {
    public:
        Tiempo(int,int,int);
        Tiempo(int);
        void tiempo_descompuesto_horas_minutos_segundos();
        int tiempo_descompuesto_horas();
        int tiempo_descompuesto_minutos();
        int tiempo_descompuesto_segundos();
    
    private:
        int  _horas, _minutos, _segundos;
        
    };

    Tiempo::Tiempo(int horas, int minutos, int segundos) {
        _horas = horas;
        _minutos = minutos;
        _segundos = segundos;

    }
    Tiempo::Tiempo(int segundos_totales) {
        _horas = segundos_totales / 3600;
        _minutos = ( segundos_totales - _horas * 3600 ) / 60;
        _segundos = segundos_totales - ( _horas * 3600 + _minutos * 60 );

    }
    void Tiempo::tiempo_descompuesto_horas_minutos_segundos() {
         cout << "El tiempo enviado son: "<< _horas <<" horas "<< _minutos << " minutos " << _segundos << " segundos."<< endl ;

    }

    int Tiempo::tiempo_descompuesto_horas() {
        return _horas;
       
    }
    int Tiempo::tiempo_descompuesto_minutos() {
        return _minutos;
       
    }
    int Tiempo::tiempo_descompuesto_segundos() {
        return _segundos;
       
    }


    int main () {
        int tiempo_total_1 , tiempo_total_2;
        tiempo_total_1 = 6000;
        
        Tiempo T1(tiempo_total_1);
        Tiempo T2(1,40,0);
        

        cout << "El tiempo enviado son: "<< T1.tiempo_descompuesto_horas() <<" horas "<< T1.tiempo_descompuesto_minutos() << " minutos " << T1.tiempo_descompuesto_segundos() << " segundos."<< endl ;
        T2.tiempo_descompuesto_horas_minutos_segundos();
    }