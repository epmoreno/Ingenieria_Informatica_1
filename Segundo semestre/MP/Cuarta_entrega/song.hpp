#ifndef USER_HPP
#define USER_HPP

#include <string>

enum Genre {POP, ROCK, HIPHOP, COUNTRY, JAZZ, BLUES, ELECTRONIC, REGGAE, CLASSICAL, FOLK, METAL};

class Song
{
    private:
        std::string title;
        Genre genre;
        int duration;
    public:
        Song();
        Song(std::string title, Genre genre, int duration);
        ~Song();
};

Song::Song(){
    /**
     * ?POR DEFECTO.
    */
}

Song::Song(std::string title, Genre genre, int duration){
    this->title = title;
    this->genre = genre;
    this->duration = duration;
}

Song::~Song()
{
}

#endif
