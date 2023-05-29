#ifndef PLAYLIST_HPP
#define PLAYLIST_HPP

#include "date.hpp"
#include "song.hpp"
#include "user.hpp"

#include <string>

class Playlist{
    private:
        std::string title;
        User* creator;
        Date creationDate;
        int max_songs;
        int num_songs;
        Song** songs;
    public:
        Playlist();
        Playlist(std::string title, User* creator, Date creationDate);
        ~Playlist();
    };
    Playlist::Playlist(){
        title = "";
        creator ->setName("");
        creationDate = Date();
        max_songs = 4;
        songs = nullptr;
    /** 
     * ! ↑↑↑  SI FUNCIONA, SE IMPLEMENTA EN "User.hpp" ↑↑↑
     **/
        songs = new Song*[max_songs]; 
        num_songs = 0;
    }
    Playlist::Playlist(std::string title, User* creator, Date creationDate){
        this->title = title;
        this->creator = creator;
        this->creationDate = creationDate;
        max_songs = 4;
        songs = nullptr;
        songs = new Song*[max_songs]; 
        num_songs = 0;
    }

    Playlist::~Playlist(){
        delete creator;
        delete[] songs;
    }

#endif