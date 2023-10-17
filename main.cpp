#include "database.h"

int main()
{
    std::vector<std::string> info;
    database base("ola.csv","C:/Users/Soportedrai/Desktop","prueba");
    base.set_database_separator(';');
    base.set_database_info("Saludos");
    //std::cout << base.get_database_columns()[2] << std::endl;
    //info = base.split("Hola Mundo 22");
    //base.get_database_info();
    //info = base.get_database_rows();
    //std::cout << base.is_read_available() << std::endl;
    return 0;
}