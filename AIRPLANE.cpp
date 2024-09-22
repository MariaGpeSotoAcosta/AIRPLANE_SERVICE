#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <vector>
#include <algorithm>


using namespace std;
class usuario{
private:
string username;
string contrasena;
string nombre;
string apellido;
int dia;
string mes;
int anio;
int km;

public:
    usuario();
    usuario(string,string,string,string,int,string,int,int);
    void setUsuario(string,string,string,string,int,string,int,int);//set
    string getUsuario();
    string getContra();
    void mostrarUsuario();
    void mostrarUsuario2();
    void setKm(int);
    void setKm2(int);
};

usuario::usuario(){
}
usuario::usuario(string _username, string _contrasena, string _nombre, string _apellido, int _dia, string _mes, int _anio, int _km){
username= _username;
contrasena= _contrasena;
nombre=_nombre;
apellido=_apellido;
dia=_dia;
mes=_mes;
anio=_anio;
km=_km;
}

void usuario::setUsuario(string _username, string _contrasena, string _nombre, string _apellido, int _dia, string _mes, int _anio, int _km){
username= _username;
contrasena= _contrasena;
nombre=_nombre;
apellido=_apellido;
dia=_dia;
mes=_mes;
anio=_anio;
km=_km;
}

void usuario::mostrarUsuario(){
 cout<<""<<endl;
 cout<<"----------"<<endl;
cout<<"Nombre de pasajero: "<<nombre<<" "<<apellido<<endl;
cout<<"Fecha de nacimiento:"<<dia<<" de "<<mes<<" del "<<anio<<endl;
cout<<""<<endl;
cout<<"Kilometros recorridos: "<<km<<endl;
cout<<"----------"<<endl;
 cout<<""<<endl;
}

void usuario::mostrarUsuario2(){
   cout<<""<<endl;
cout<<"----------"<<endl;
cout<<"Nombre de pasajero: "<<nombre<<" "<<apellido<<endl;
cout<<"Usuario en pagina web: "<<username<<endl;
cout<<"Contraseña: "<<contrasena<<endl;
cout<<"Fecha de nacimiento:"<<dia<<" de "<<mes<<" del "<<anio<<endl;
cout<<""<<endl;
cout<<"Kilometros recorridos por pasajero: "<<km<<endl;
cout<<"----------"<<endl;
 cout<<""<<endl;
}

string usuario::getUsuario(){
return username;
}

string usuario::getContra(){
return contrasena;
}

void usuario::setKm(int _km){
km=km+_km;
}

void usuario::setKm2(int _km){
km=km-_km;
}

class vuelo{
private:
    string destino;
    string origen;
    string hora;
    int day;
    string mont;
    int year;
    float precio;
    int kmetro;

public:
    vuelo();
    vuelo(string,string,string,int,string,int,float,int);//set

    void muestraVuelo();
    void muestraVuelo2();
    string getVuelo();
    float getPrecio();
    int getKm();
};

vuelo::vuelo(){
}

vuelo::vuelo(string _destino, string _origen, string _hora, int _dia, string _mes, int _anio,float _precio,int _km){
destino=_destino;
origen=_origen;
hora=_hora;
day=_dia;
mont=_mes;
year=_anio;
precio=_precio;
kmetro=_km;
}


string vuelo::getVuelo(){
return destino;
}

float vuelo::getPrecio(){
return precio;
}

int vuelo::getKm(){
return kmetro;
}

void vuelo::muestraVuelo(){
        cout<<""<<endl;
cout<<"----------"<<endl;
cout<<"ORIGEN DEL VUELO: "<<origen<<endl;
cout<<"DESTINO DEL VUELO: "<<destino<<endl;
cout<<"PRECIO DEL VUELO: "<<precio<<endl;
cout<<"HORA DE ABORDAJE: "<<hora<<endl;
cout<<"FECHA: "<<day<<" de "<<mont<<" del "<<year<<endl;
cout<<"----------"<<endl;
cout<<""<<endl;
}

void vuelo::muestraVuelo2(){
cout<<"----------"<<endl;
cout<<"ORIGEN DEL VUELO: "<<origen<<endl;
cout<<"DESTINO DEL VUELO: "<<destino<<endl;
cout<<"PRECIO DEL VUELO: "<<precio<<endl;
cout<<"HORA DE ABORDAJE: "<<hora<<endl;
cout<<"FECHA: "<<day<<" de "<<mont<<" del "<<year<<endl;
cout<<"KILOMETROS: "<<kmetro<<endl;
cout<<"----------"<<endl;
cout<<""<<endl;
}

class reservacion{
private:
string asiento;
usuario datosUsuario;
vuelo datosVuelo;
public:
reservacion();
reservacion(string, usuario, vuelo);
void muestraReservacion();
void setStuff(string, usuario, vuelo);
string getAsiento();
};

reservacion::reservacion(){
}

reservacion::reservacion(string _asiento, usuario _datosUsuario, vuelo _datosVuelo){
asiento= _asiento;
datosUsuario=_datosUsuario;
datosVuelo=_datosVuelo;
}

void reservacion::setStuff(string _asiento, usuario _datosUsuario, vuelo _datosVuelo){
asiento= _asiento;
datosUsuario=_datosUsuario;
datosVuelo=_datosVuelo;
}

void reservacion::muestraReservacion(){
cout<<"----------"<<endl;
cout<<"Asiento asignado: "<<asiento<<endl;
datosUsuario.mostrarUsuario();
datosVuelo.muestraVuelo2();
cout<<"-----------------------------------------------------------------"<<endl;
cout<<""<<endl;
cout<<""<<endl;
}

string reservacion::getAsiento(){
return asiento;
}

int main(){
int i,b,A,day,year,X,Y,Z,R,w,q,h;
string user,contra,nom,apell,mes,vuelobusc,U,G,H,J;
vector<string> VUELO1= {"A1","A2","A3"}; //acapulco
vector<string> VUELO2= {"A1","A2"}; //guadalajara
vector<string> VUELO3= {"A1","A2","A3","B4"};//monterrey


usuario usuario1("_","_","_","_",0,"_",0,0),usuario2("_","_","_","_",0,"_",0,0),usuario3("_","_","_","_",0,"_",0,0),usuario4("_","_","_","_",0,"_",0,0),usuario5("_","_","_","_",0,"_",0,0);
vuelo vuelo1("Cancun", "Hermosillo", "6:45",16,"Febrero",2024,4500,2250.7),vuelo2("Guadalajara","Mexicali","17:20",24,"Diciembre",2023,3750,2051.2),vuelo3("Monterrey","Chihuahua","13:50",03,"Enero",2024,4000,820.6),vuelo4("","","",0,"",0,0,0);
reservacion res1("0",usuario5,vuelo4),res2("0",usuario5,vuelo4),res3("0",usuario5,vuelo4),res4("0",usuario5,vuelo4),res5("0",usuario5,vuelo4),res6("0",usuario5,vuelo4),res7("0",usuario5,vuelo4),res8("0",usuario5,vuelo4),res9("0",usuario5,vuelo4);
X=4;
A=0;

while(A!=3){
A=0;
cout<<"-----------------------------------------------------------------"<<endl;
cout<<"|                  BIENVENIDO A LA PAGINA DE                    |"<<endl;
cout<<"|                          AERONUBES                            |"<<endl;
cout<<"-----------------------------------------------------------------"<<endl;
cout<<""<<endl;
cout<<""<<endl;
cout<<"Seleccione la opción que desea"<<endl;
cout<<"1.- Crear cuenta"<<endl;
cout<<"2.- Acceder a cuenta existente"<<endl;
cout<<"Opcion:  ";
cin>>A;
cout<<""<<endl;

if(A==1){
    cout<<"CREAR CUENTA NUEVA"<<endl;
    //setUsuario(string,string,string,string,int,string,int)
    cout<<"Cuenta con " <<X-1<<" cupos para incluir usuarios"<<endl;
    cout<<"Ingrese los datos a registrar"<<endl;
        if(X==1){
        cout<<"NO HAY MAS CUPOS, LA BASE DE DATOS ESTÁ LLENA. FAVOR DE INGRESAR CON UNA CUENTA YA EXISTENTE"<<endl;
        }
        if(X==2){
                cout<<"Usuario:  ";
                cin>>user;
                cout<<"Contrasena:  ";
                cin>>contra;
                cout<<"Nombre:  ";
                cin>>nom;
                cout<<"Apellido:  ";
                cin>>apell;
                cout<<"Dia de nacimiento:  ";
                cin>>day;
                cout<<"Mes:  ";
                cin>>mes;
                cout<<"Anio:  ";
                cin>>year;

                if(user==usuario1.getUsuario()||user==usuario2.getUsuario()){
                    cout<<"USUARIO YA EXISTENTE, INTENTAR NUEVAMENTE"<<endl;
                }
                else{
                usuario3.setUsuario(user,contra,nom,apell,day,mes,year,0);
                usuario3.mostrarUsuario();
                X=X-1;
                }
                }
        if(X==3){
                cout<<"Usuario:  ";
                cin>>user;
                cout<<"Contrasena:  ";
                cin>>contra;
                cout<<"Nombre:  ";
                cin>>nom;
                cout<<"Apellido:  ";
                cin>>apell;
                cout<<"Dia de nacimiento:  ";
                cin>>day;
                cout<<"Mes:  ";
                cin>>mes;
                cout<<"Anio:  ";
                cin>>year;
                if(user==usuario1.getUsuario()){
                    cout<<"USUARIO YA EXISTENTE, INTENTAR NUEVAMENTE"<<endl;
                }
                else{
                usuario2.setUsuario(user,contra,nom,apell,day,mes,year,0);
                usuario2.mostrarUsuario();
                X=X-1;
                }
                }
        if(X==4){
                cout<<"Usuario:  ";
                cin>>user;
                cout<<"Contrasena:  ";
                cin>>contra;
                cout<<"Nombre:  ";
                cin>>nom;
                cout<<"Apellido:  ";
                cin>>apell;
                cout<<"Dia de nacimiento:  ";
                cin>>day;
                cout<<"Mes:  ";
                cin>>mes;
                cout<<"Anio:  ";
                cin>>year;
                usuario1.setUsuario(user,contra,nom,apell,day,mes,year,0);
                usuario1.mostrarUsuario();
                X=X-1;
                }

    }

if(A==2){
    cout<<"ACCEDER A CUENTA EXISTENTE"<<endl;
    cout<<"Ingrese los datos solicitados"<<endl;
    cout<<"Usuario:  ";
    cin>>user;
    cout<<"Contrasena:  ";
    cin>>contra;
    if(user==usuario1.getUsuario()){
        if(contra==usuario1.getContra()){
        Y=0;
        while(Y!=5){
        cout<<"-----------------------------------------------------------------"<<endl;
        cout<<"|              BIENVENIDO A LA PAGINA DE RESERVACION            |"<<endl;
        cout<<"|                          AERONUBES                            |"<<endl;
        cout<<"-----------------------------------------------------------------"<<endl;
        cout<<"Seleccione la opción que desea"<<endl;
        cout<<"1.- Buscar vuelo"<<endl;
        cout<<"2.- Reservar vuelo"<<endl;
        cout<<"3.- Reservaciones"<<endl;
        cout<<"4.- Datos de usuario"<<endl;
        cout<<"5.- CERRAR SESION"<<endl;
        cout<<"Opcion:  ";
        cin>>Y;
        cout<<""<<endl;
        cout<<""<<endl;
        if(Y==1){
            cout<<"En esta sección podrá consultar los vuelos disponibles"<<endl;
            cout<<"1.- Mostrar todos los vuelos"<<endl;
            cout<<"2.- Buscar vuelo"<<endl;
            cout<<"Opcion:  ";
            cin>>Z;
            if(Z==1){
                vuelo1.muestraVuelo();
                vuelo2.muestraVuelo();
                vuelo3.muestraVuelo();
            }
            if(Z==2){
            cout<<"VUELO:  ";
            cin>>vuelobusc;
                if(vuelobusc==vuelo1.getVuelo()){
                    vuelo1.muestraVuelo();
                }
                 if(vuelobusc==vuelo2.getVuelo()){
                    vuelo2.muestraVuelo();
                }
                 if(vuelobusc==vuelo3.getVuelo()){
                    vuelo3.muestraVuelo();
                }
                else cout<<"NO ENCONTRADO"<<endl;
            }
        }
        if(Y==2){
            cout<<"En esta sección podrá reservar su vuelo"<<endl;
            cout<<"Ingrese el destino del vuelo que desea reservar: ";
            cin>>vuelobusc;

            if(vuelobusc==vuelo1.getVuelo()){
                 cout << "Asientos disponibles: "<<endl;

                b=VUELO1.size();
                for (i=0;i<b;i++) {
                    cout<<"Asiento "<<i+1<<" : "<<VUELO1[i]<<endl;
                }

                cout<<"Ingrese el asiento: ";
                cin>>U;

                auto iterador = std::find(VUELO1.begin(), VUELO1.end(), U);
                if (iterador != VUELO1.end()) {
                    res1.setStuff(U,usuario1,vuelo1);
                    res1.muestraReservacion();
                    usuario1.setKm(vuelo1.getKm());
                    VUELO1.erase(std::remove(VUELO1.begin(), VUELO1.end(), U), VUELO1.end());
                }
                else cout<<"VUELO NO DISPONIBLE"<<endl;
                }


            if(vuelobusc==vuelo2.getVuelo()){
                 cout << "Asientos disponibles: "<<endl;

                b=VUELO2.size();
                for (i=0;i<b;i++) {
                    cout<<"Asiento "<<i+1<<" : "<<VUELO2[i]<<endl;
                }

                cout<<"Ingrese el asiento: ";
                cin>>U;

                auto iterador = std::find(VUELO2.begin(), VUELO2.end(), U);
                if (iterador != VUELO2.end()) {
                    res2.setStuff(U,usuario1,vuelo2);
                    res2.muestraReservacion();
                    usuario1.setKm(vuelo2.getKm());
                    VUELO2.erase(std::remove(VUELO2.begin(), VUELO2.end(), U), VUELO2.end());
                }
                else cout<<"VUELO NO DISPONIBLE"<<endl;
                }

            if(vuelobusc==vuelo3.getVuelo()){
                cout << "Asientos disponibles: "<<endl;

                b=VUELO3.size();
                for (i=0;i<b;i++) {
                    cout<<"Asiento "<<i+1<<" : "<<VUELO3[i]<<endl;
                }

                cout<<"Ingrese el asiento: ";
                cin>>U;

                auto iterador = std::find(VUELO3.begin(), VUELO3.end(), U);
                if (iterador != VUELO3.end()) {
                    res3.setStuff(U,usuario2,vuelo3);
                    res3.muestraReservacion();
                    usuario1.setKm(vuelo3.getKm());
                    VUELO2.erase(std::remove(VUELO3.begin(), VUELO3.end(), U), VUELO3.end());
                }
                else cout<<"VUELO NO DISPONIBLE"<<endl;
        }
        }
        if(Y==3){
            cout<<"Reservaciones realizadas"<<endl;
            if(res1.getAsiento()!="0"){
            cout<<"RESERVACION 1"<<endl;
            res1.muestraReservacion();
            }
            cout<<""<<endl;
            if(res2.getAsiento()!="0"){
            cout<<"RESERVACION 2"<<endl;
            res2.muestraReservacion();
            }
            cout<<""<<endl;
            if(res3.getAsiento()!="0"){
            cout<<"RESERVACION 3"<<endl;
            res3.muestraReservacion();
            }
            cout<<"Desea cancelar alguna de las reservaciones?"<<endl;
            cout<<"1.- Si                 2.- No              "<<endl;
            cout<<"Opcion: ";
            cin>>w;
            if(w==1){
                cout<<"Seleccione la reservacion que desea cancelar"<<endl;
                cin>>q;
                if(q==1){
                    VUELO1.push_back(res1.getAsiento());
                    res1.setStuff("0",usuario5,vuelo4);
                    usuario1.setKm2(vuelo1.getKm());
                }
                if(q==2){
                    VUELO2.push_back(res2.getAsiento());
                    res2.setStuff("0",usuario5,vuelo4);
                    usuario1.setKm2(vuelo2.getKm());
                }
                if(q==3){
                    VUELO3.push_back(res3.getAsiento());
                    res3.setStuff("0",usuario5,vuelo4);
                    usuario1.setKm2(vuelo3.getKm());
                }


            }

        }
         if(Y==4){
         cout<<""<<endl;
         usuario1.mostrarUsuario2();
         cout<<""<<endl;

        }

        }
        }
    else cout<<"CONTRASENA INCORRECTA, INTENTE NUEVAMENTE"<<endl;
    }


    if(user==usuario2.getUsuario()){
        if(contra==usuario2.getContra()){
        Y=0;
        while(Y!=5){
        cout<<"-----------------------------------------------------------------"<<endl;
        cout<<"|              BIENVENIDO A LA PAGINA DE RESERVACION            |"<<endl;
        cout<<"|                          AERONUBES                            |"<<endl;
        cout<<"-----------------------------------------------------------------"<<endl;
        cout<<"Seleccione la opción que desea"<<endl;
        cout<<"1.- Buscar vuelo"<<endl;
        cout<<"2.- Reservar vuelo"<<endl;
        cout<<"3.- Reservaciones"<<endl;
        cout<<"4.- Datos de usuario"<<endl;
        cout<<"5.- CERRAR SESION"<<endl;
        cout<<"Opcion:  ";
        cin>>Y;
        cout<<""<<endl;
        cout<<""<<endl;
        if(Y==1){
            cout<<"En esta sección podrá consultar los vuelos disponibles"<<endl;
            cout<<"1.- Mostrar todos los vuelos"<<endl;
            cout<<"2.- Buscar vuelo"<<endl;
            cout<<"Opcion:  ";
            cin>>Z;
            if(Z==1){
                vuelo1.muestraVuelo();
                cout<<""<<endl;
                cout<<""<<endl;
                vuelo2.muestraVuelo();
                cout<<""<<endl;
                cout<<""<<endl;
                vuelo3.muestraVuelo();
                cout<<""<<endl;
                cout<<""<<endl;
            }
            if(Z==2){
            cout<<"VUELO:  ";
            cin>>vuelobusc;
                if(vuelobusc==vuelo1.getVuelo()){
                    vuelo1.muestraVuelo();
                }
                 if(vuelobusc==vuelo2.getVuelo()){
                    vuelo2.muestraVuelo();
                }
                 if(vuelobusc==vuelo3.getVuelo()){
                    vuelo3.muestraVuelo();
                }
                else cout<<"NO ENCONTRADO"<<endl;
            }
        }
        if(Y==2){
            cout<<"En esta sección podrá reservar su vuelo"<<endl;
            cout<<"Ingrese el destino del vuelo que desea reservar: ";
            cin>>vuelobusc;
            if(vuelobusc==vuelo1.getVuelo()){
                 cout << "Asientos disponibles: "<<endl;

                b=VUELO1.size();
                for (i=0;i<b;i++) {
                    cout<<"Asiento "<<i+1<<" : "<<VUELO1[i]<<endl;
                }

                cout<<"Ingrese el asiento: ";
                cin>>U;

                auto iterador = std::find(VUELO1.begin(), VUELO1.end(), U);
                if (iterador != VUELO1.end()) {
                    res4.setStuff(U,usuario2,vuelo1);
                    res4.muestraReservacion();
                    usuario2.setKm(vuelo1.getKm());
                    VUELO1.erase(std::remove(VUELO1.begin(), VUELO1.end(), U), VUELO1.end());
                }
                else cout<<"ASIENTO NO DISPONIBLE"<<endl;
                }
            if(vuelobusc==vuelo2.getVuelo()){
                 cout << "Asientos disponibles: "<<endl;

                b=VUELO2.size();
                for (i=0;i<b;i++) {
                    cout<<"Asiento "<<i+1<<" : "<<VUELO2[i]<<endl;
                }

                cout<<"Ingrese el asiento: ";
                cin>>U;

                auto iterador = std::find(VUELO2.begin(), VUELO2.end(), U);
                if (iterador != VUELO2.end()) {
                    res5.setStuff(U,usuario2,vuelo2);
                    res5.muestraReservacion();
                    usuario2.setKm(vuelo2.getKm());
                    VUELO2.erase(std::remove(VUELO2.begin(), VUELO2.end(), U), VUELO2.end());
                }
                else cout<<"ASIENTO NO DISPONIBLE"<<endl;
                }
            if(vuelobusc==vuelo3.getVuelo()){
                  cout << "Asientos disponibles: "<<endl;

                b=VUELO3.size();
                for (i=0;i<b;i++) {
                    cout<<"Asiento "<<i+1<<" : "<<VUELO3[i]<<endl;
                }

                cout<<"Ingrese el asiento: ";
                cin>>U;

                auto iterador = std::find(VUELO3.begin(), VUELO3.end(), U);
                if (iterador != VUELO3.end()) {
                    res6.setStuff(U,usuario2,vuelo3);
                    res6.muestraReservacion();
                    usuario2.setKm(vuelo3.getKm());
                    VUELO3.erase(std::remove(VUELO3.begin(), VUELO3.end(), U), VUELO3.end());
                }
                else cout<<"ASIENTO NO DISPONIBLE"<<endl;
                }
            else cout<<"NO ENCONTRADO"<<endl;
        }
        if(Y==3){
            cout<<"Reservaciones realizadas"<<endl;
            if(res4.getAsiento()!="0"){
            cout<<"RESERVACION 1"<<endl;
            cout<<""<<endl;
            res4.muestraReservacion();
            cout<<""<<endl;
            }
            cout<<""<<endl;
            cout<<""<<endl;
            if(res5.getAsiento()!="0"){
            cout<<"RESERVACION 2"<<endl;
            cout<<""<<endl;
            res5.muestraReservacion();
            cout<<""<<endl;
            }
            cout<<""<<endl;
            cout<<""<<endl;
            if(res6.getAsiento()!="0"){
            cout<<"RESERVACION 3"<<endl;
            cout<<""<<endl;
            res6.muestraReservacion();
            cout<<""<<endl;
            }
            cout<<""<<endl;
            cout<<"Desea cancelar alguna de las reservaciones?"<<endl;
            cout<<"1.- Si                 2.- No              "<<endl;
            cout<<"Opcion: ";
            cin>>w;
            if(w==1){
                cout<<"Seleccione la reservacion que desea cancelar"<<endl;
                cin>>q;
                if(q==1){
                    VUELO1.push_back(res4.getAsiento());
                    res4.setStuff("0",usuario5,vuelo4);
                    usuario2.setKm2(vuelo1.getKm());
                }
                if(q==2){
                    VUELO2.push_back(res5.getAsiento());
                    res5.setStuff("0",usuario5,vuelo4);
                    usuario2.setKm2(vuelo2.getKm());
                }
                if(q==3){
                    VUELO3.push_back(res6.getAsiento());
                    res6.setStuff("0",usuario5,vuelo4);
                    usuario2.setKm2(vuelo3.getKm());
                }


            }

        }

        if(Y==4){
        cout<<""<<endl;
         usuario2.mostrarUsuario2();
        cout<<""<<endl;

        }


        }

        }
        else cout<<"CONTRASENA INCORRECTA, INTENTE NUEVAMENTE"<<endl;
    }

        if(contra==usuario3.getContra()){
                Y=0;
        while(Y!=5){
        cout<<"-----------------------------------------------------------------"<<endl;
        cout<<"|              BIENVENIDO A LA PAGINA DE RESERVACION            |"<<endl;
        cout<<"|                          AERONUBES                            |"<<endl;
        cout<<"-----------------------------------------------------------------"<<endl;
        cout<<"Seleccione la opción que desea"<<endl;
        cout<<"1.- Buscar vuelo"<<endl;
        cout<<"2.- Reservar vuelo"<<endl;
        cout<<"3.- Reservaciones"<<endl;
        cout<<"4.- Datos de usuario"<<endl;
        cout<<"5.- CERRAR SESION"<<endl;
        cout<<"Opcion:  ";
        cin>>Y;
        cout<<""<<endl;
        cout<<""<<endl;
        if(Y==1){
            cout<<"En esta sección podrá consultar los vuelos disponibles"<<endl;
            cout<<"1.- Mostrar todos los vuelos"<<endl;
            cout<<"2.- Buscar vuelo"<<endl;
            cout<<"Opcion:  ";
            cin>>Z;
            if(Z==1){

                vuelo1.muestraVuelo();
                vuelo2.muestraVuelo();
                vuelo3.muestraVuelo();
            }
            if(Z==2){
            cout<<"VUELO:  ";
            cin>>vuelobusc;
                if(vuelobusc==vuelo1.getVuelo()){
                    vuelo1.muestraVuelo();
                }
                 if(vuelobusc==vuelo2.getVuelo()){
                    vuelo2.muestraVuelo();
                }
                 if(vuelobusc==vuelo3.getVuelo()){
                    vuelo3.muestraVuelo();
                }
                else cout<<"NO ENCONTRADO"<<endl;
            }
        }
        if(Y==2){
            cout<<"En esta sección podrá reservar su vuelo"<<endl;
            cout<<"Ingrese el destino del vuelo que desea reservar: ";
            cin>>vuelobusc;
            if(vuelobusc==vuelo1.getVuelo()){
                cout<<"Ingrese el asiento: ";
                 cout << "Asientos disponibles: "<<endl;

                b=VUELO1.size();
                for (i=0;i<b;i++) {
                    cout<<"Asiento "<<i+1<<" : "<<VUELO1[i]<<endl;
                }

                cout<<"Ingrese el asiento: ";
                cin>>U;

                auto iterador = std::find(VUELO1.begin(), VUELO1.end(), U);
                if (iterador != VUELO1.end()) {
                    res7.setStuff(U,usuario3,vuelo1);
                    res7.muestraReservacion();
                    usuario3.setKm(vuelo1.getKm());
                    VUELO1.erase(std::remove(VUELO1.begin(), VUELO1.end(), U), VUELO1.end());
                }
                else cout<<"ASIENTO NO DISPONIBLE"<<endl;
                }
            if(vuelobusc==vuelo2.getVuelo()){
                cout<<"Ingrese el asiento: ";
                 cout << "Asientos disponibles: "<<endl;

                b=VUELO2.size();
                for (i=0;i<b;i++) {
                    cout<<"Asiento "<<i+1<<" : "<<VUELO2[i]<<endl;
                }

                cout<<"Ingrese el asiento: ";
                cin>>U;

                auto iterador = std::find(VUELO2.begin(), VUELO2.end(), U);
                if (iterador != VUELO2.end()) {
                    res8.setStuff(U,usuario3,vuelo2);
                    res8.muestraReservacion();
                    usuario3.setKm(vuelo2.getKm());
                    VUELO2.erase(std::remove(VUELO2.begin(), VUELO2.end(), U), VUELO2.end());
                }
                else cout<<"ASIENTO NO DISPONIBLE"<<endl;
                }
            if(vuelobusc==vuelo3.getVuelo()){
                cout<<"Ingrese el asiento: ";
                 cout << "Asientos disponibles: "<<endl;

                b=VUELO2.size();
                for (i=0;i<b;i++) {
                    cout<<"Asiento "<<i+1<<" : "<<VUELO3[i]<<endl;
                }

                cout<<"Ingrese el asiento: ";
                cin>>U;

                auto iterador = std::find(VUELO3.begin(), VUELO3.end(), U);
                if (iterador != VUELO3.end()) {
                    res9.setStuff(U,usuario3,vuelo3);
                    res9.muestraReservacion();
                    usuario3.setKm(vuelo3.getKm());
                    VUELO3.erase(std::remove(VUELO3.begin(), VUELO3.end(), U), VUELO3.end());
                }
                else cout<<"ASIENTO NO DISPONIBLE"<<endl;
                }
            else cout<<"NO ENCONTRADO"<<endl;
        }
        if(Y==3){
            cout<<"Reservaciones realizadas"<<endl;
            if(res7.getAsiento()!="0"){
            cout<<"RESERVACION 1"<<endl;
            res7.muestraReservacion();
            }
            if(res8.getAsiento()!="0"){
            cout<<"RESERVACION 2"<<endl;
            res8.muestraReservacion();
            }
            if(res9.getAsiento()!="0"){
            cout<<"RESERVACION 3"<<endl;
            res9.muestraReservacion();
            }

            cout<<""<<endl;
            cout<<"Desea cancelar alguna de las reservaciones?"<<endl;
            cout<<"1.- Si                 2.- No              "<<endl;
            cout<<"Opcion: ";
            cin>>w;
            if(w==1){
                cout<<"Seleccione la reservacion que desea cancelar"<<endl;
                cin>>q;
                if(q==1){
                    VUELO1.push_back(res7.getAsiento());
                    res7.setStuff("0",usuario5,vuelo4);
                    usuario3.setKm2(vuelo1.getKm());
                }

                if(q==2){
                    VUELO2.push_back(res8.getAsiento());
                    res8.setStuff("0",usuario5,vuelo4);
                    usuario3.setKm2(vuelo2.getKm());
                }
                if(q==3){
                    VUELO3.push_back(res9.getAsiento());
                    res9.setStuff("0",usuario5,vuelo4);
                    usuario3.setKm2(vuelo3.getKm());
                    }
                }
            }

        if(Y==4){
        cout<<""<<endl;
         usuario3.mostrarUsuario2();
        cout<<""<<endl;
        }
        }
    }
        else cout<<"CONTRASENA INCORRECTA, INTENTE NUEVAMENTE"<<endl;
}
        if(user!=usuario1.getUsuario() && user!=usuario2.getUsuario() && user!=usuario3.getUsuario()) cout<<"USUARIO NO ENCONTRADO, FAVOR DE INTENTARLO NUEVAMENTE"<<endl;
}

system("pause");
return 0;
}
