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
        bool addSong(Song* song, User* whoAddsIt);
        bool deleteSong(Song* song, User* whoRemovesIt);

        /** @param Gets_Y_Sets **/

        std::string getTitle() { return title; }
        void setTitle(std::string title){ this->title = title; }
        User* getCreator() { return creator; }
        void seCreator(User* creator) {this->creator = creator; }
        Date getCreationDate() { return creationDate; }
        void setCreationDate(Date creationDate) { this->creationDate = creationDate; }
        int getMax_songs() { return max_songs; }
        void setMax_songs(int max_songs) { this->max_songs = max_songs; }
        int getNum_songs() { return num_songs; }
        void setNum_songs(int num_songs) { this->num_songs = num_songs; }
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

    bool Playlist::addSong(Song* song, User* whoAddsIt){

        //* Verificamos que haya espacio y si no se duplica
        if (num_songs == max_songs){
            Song** newSongs = new Song*[max_songs * 2];
            for (int i = 0; i < num_songs; ++i) {
                newSongs[i] = songs[i];
            }
            delete[] songs;
            songs = newSongs;
            max_songs *= 2;
        }
        songs[num_songs] = song;
        num_songs++;
        return true;
        
    }

    bool Playlist::deleteSong(Song* song, User* whoRemovesIt){
        for (int i = 0; i < num_songs; i++){
            if (songs[i] == song){
                delete songs[i];
                songs[i] = nullptr;
                for (int j = 0; j < num_songs; j++){
                    songs[j] = songs[j+1];
                }
                num_songs--;
                return true;
            }
        }
        return true;
    }

#endif