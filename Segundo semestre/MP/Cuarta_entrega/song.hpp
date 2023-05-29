#ifndef SONG_HPP
#define SONG_HPP

#include <string>

enum Genre {POP, ROCK, HIPHOP, COUNTRY, JAZZ, BLUES, ELECTRONIC, REGGAE, CLASSICAL, FOLK, METAL};

class Song {

    private:
        std::string title;
        Genre genre;
        int duration;
    public:
        Song();
        Song(std::string title, Genre genre, int duration);
        ~Song();

        /**
         * @param Gets_Sets *
         **/
        std::string getTitle() { return title; }
        void setTitle(std::string title) { this->title = title; }

        Genre getGenre() { return genre; }
        void setGenre(Genre genre) { this->genre = genre; }

        int getDuration() { return duration; }
        void setDuration(int duration) { this->duration = duration; }


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

/**
 * ?DESTRUCTOR M_D
*/
Song::~Song() {
    
}

#endif
