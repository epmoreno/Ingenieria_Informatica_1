#ifndef ALBUM_HPP
#define ALBUM_HPP


#include "date.hpp"
#include "song.hpp"
#include "artist.hpp"

#include <string>

class Album{
    private:
        std::string title;
        Artist* artist;
        Date releaseDate;
        int num_songs;
        Song** songs;
    public:
        Album();
        Album(std::string title, Artist* artist, Date releaseDate, Song** songs, int num_songs);
        ~Album();

        
        /** @param Gets_Y_Sets **/

        std::string getTitle() { return title; }
        void setTitle(std::string title) { this->title = title; }

        Date getReleaseDate() { return releaseDate; }
        void setReleaseDate(Date releaseDate) {this->releaseDate = releaseDate; }

        int getNum_songs() { return num_songs; }
        void setNum_songs(int num_songs) { this->num_songs = num_songs; }

        Artist* getArtist() { return artist; }
        void setArtist(Artist* artist) { this->artist = artist; }
    /** 
     * ! ↑↑↑ VEREMOS COMO FUNCIONA, SI NO, IMPLEMENTAMOS UN "new Artist()" ↑↑↑
     **/
};

Album::Album(){
    /**
     * ?POR DEFECTO.
    */
}

Album::Album(std::string title, Artist* artist, Date releaseDate, Song** songs, int num_songs){
    this->title = title;
    this->artist = artist;
    this->releaseDate = releaseDate;
    this->songs = new Song*[num_songs];
    this->num_songs = num_songs;
    for (int i = 0; i < num_songs; i++){ //*Con este bucle añadiremos las conciones a Song
        this->songs[i] = songs[i];
    }
    
}

/**
 * ?DESTRUCTOR M_D
*/
Album::~Album(){
    delete artist;
    delete[] songs;
}

#endif
