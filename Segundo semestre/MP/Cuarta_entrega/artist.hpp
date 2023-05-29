#ifndef ARTIST_HPP
#define ARTIST_HPP

#include <string>

class Artist {

    private:
        std::string name;
    
    public:
        Artist();
        Artist(std::string name);
        ~Artist();

    /** @param Gets_Y_Sets **/

    std::string getName() { return name; }
    void setName(std::string name) {this->name = name; }
};

Artist::Artist(){
    /**
     * ?POR DEFECTO?
    */
}
Artist::Artist(std::string name){
   this->name = name;
}

/**
 * ?DESTRUCTOR M_D
*/
Artist::~Artist() {
    
}

#endif