#include "recount.h"

/**
 * @brief recount::recount empty constructor
 */
recount::recount()
{
    this->code = -1;
}

//TO_DO: all methods of the class
recount::recount(vector<string> data){
    for(int i=0; i<data.size(); i++){
        switch(i)
        {
        case 0:
            code = std::stoi(data[i]);
            break;
        case 1:
            municipal = data[i];
            break;
        case 2:
            zone = std::stoi(data[i]);
            break;
        case 3:
            section = std::stoi(data[i]);
            break;
        case 4:
            name = data[4][0];
            break;
        case 5:
            census = std::stoi(data[i]);
            break;
        case 6:
            abstentions = std::stoi(data[i]);
            break;
        case 7:
            v_cast = std::stoi(data[i]);
            break;
        case 8:
            v_invalid = std::stoi(data[i]);
            break;
        case 9:
            v_valid = std::stoi(data[i]);
            break;
        case 10:
            v_white = std::stoi(data[i]);
            break;
        default:
            cout << "Usted ha ingresado una opción incorrecta";
        }
    }
}
    //GETTERS
    int recount::get_v_cast(){
        return this->v_cast;
    }

    int recount::get_abstentions(){
        return this->abstentions;
    }

    int recount::get_census(){
        return this->census;
    }

    void recount::set_p_participation(float p_participation){
        this->p_participation=p_participation;
    }

    void recount::set_p_abstention(float p_abstention){
        this->p_abstention=p_abstention;
    }

    //FUNCION PRINT
    void recount::print(){
        cout<<" Code: "<<this->code<<"\n Municipal: " <<this->municipal<<"\n Zone: "<< this->zone<<"\n Section: "<<this->section<<"\n Name: "<<this->name<<"\n Census: "<<this->get_census()<<"\n Abstentions: "<<this->get_abstentions()<<"\n v_cast: "<<this->get_v_cast()<<"\n v_invalid: "<<this->v_invalid<<"\n v_valid: "<<this->v_valid<<"\n v_white: "<< this->v_white<<"\n";
    }
