#include <iostream>
    using namespace std ;
                                                                                   
    class Person {
    public :
        Person( string, int );
        void showperson();

    private :
        string _nombre;
        int _edad;

    };

    Person::Person(string nombre , int edad) {
        _nombre = nombre;
        _edad = edad;
    }

    void Person::showperson() {
        cout << "\nSoy " << _nombre << " y tengo "<< _edad << " años" ;
    }
                                                                                            
    class Worker : public Person {
    public:
        Worker( string, int, int );
        void showworker() ;

    private:
        int _salary;

    };

    Worker :: Worker(string nombre, int edad, int salary) :Person( nombre, edad ) {
        _salary = salary ;
    }

    void Worker :: showworker() {
        showperson();
        cout << " y cobro " << _salary << " euros." ;
    }

    class Student : public Person {
    public:
        Student( string, int, float );
        void showstudent();

    private:
        float _nota_final;

    };

    Student :: Student ( string nombre, int edad, float nota_final) :Person( nombre, edad )  {
        _nota_final = nota_final ;
    }
    
    void Student :: showstudent() {
        showperson();
        cout<<" y mi nota final es: "<<_nota_final ;
    }

    class University_student : public Student {
    public:
        University_student( string, int , float, int );
        void showuniversity();

    private:
        int _curso;

    };

    University_student :: University_student ( string nombre, int edad, float nota_final, int curso ) :Student ( nombre, edad, nota_final ) {
        _curso = curso;

    }
    void University_student:: showuniversity() {
        showstudent();
        cout << " además estoy en " <<_curso << "º curso." << endl ;
    }

    int main () {

        Person Person1("Alejandro", 20);
        Person1.showperson() ;
        Worker Worker1("Alejandro",20,3600);
        Worker1.showworker();

        Student Student1("Enrique",20,6.4);
        Student1.showstudent();

        University_student University1("David", 19, 7.6, 2);
        University1.showuniversity();
        cout << endl ;
    }

    