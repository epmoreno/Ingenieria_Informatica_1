#ifndef USER_HPP
#define USER_HPP

#include <string>
/*#include "date.hpp"
#include "song.hpp"
#include "playlist.hpp"*/

enum Gender {FEMALE, MALE, OTHER};

class User {
public:
    User() : User("", "", Date(), Gender::OTHER) {} // *Constructor por defecto

    User(const std::string& name, const std::string& email, const Date& birthdate, Gender gender) // *Contructor tamaño maximo de vectores 4 y inicializacion nº songs y playlists a 0
        : name(name), email(email), birthdate(birthdate), gender(gender),
        max_saved_songs(4), max_playlists(4), num_saved_songs(0), num_playlists(0)
    {
        saved_songs = new Song*[max_saved_songs]; // *Guardamos tamaño min
        playlists = new Playlist*[max_playlists];
    }

    //?Metodos get
    std::string getName() const {return name;}
    std::string getEmail() const {return email;}
    Date getBirthdate() const {return birthdate;}
    Gender getGender() const {return gender;}
    int getNumSavedSongs() const {return num_saved_songs;}
    int getNumPlaylists() const {return num_playlists;}
    Song* getSavedSong(int n) const {return saved_songs[n];}
    Playlist* getPlaylist(int n) const {return playlists[n];}

    //?Metodos set
    void setName(const std::string& name){this->name = name;}
    void setEmail(const std::string& email){this->email = email;}
    void setBirthdate(const std::Date& birthdate){this->birthdate = birthdate;}
    void setGender(Gender gender){this->gender = gender;}
    
    ~User() // *Borrador
    {
        delete[] saved_songs;
        delete[] playlists;
    }

private:
    std::string name;
    std::string email;
    Date birthdate;
    Gender gender;

    int max_saved_songs;
    int max_playlists;

    int num_saved_songs;
    int num_playlists;

    Song** saved_songs;
    Playlist** playlists;
};

#endif // USER_HPP

#endif
