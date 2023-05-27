#ifndef USER_HPP
#define USER_HPP

/*#include "date.hpp"
#include "song.hpp"
#include "playlist.hpp"*/
#include <vector>
#include <string>


enum Gender {FEMALE, MALE, OTHER};

class User {

    public:
        User(){ //*Constructor basico
            name = "";
            email = "";
            birthdate = Date();
            gender = OTHER;
            max_saved_songs = 4;
            max_playlists = 4;
            num_saved_songs = 0;
            num_playlists = 0;
            saved_songs = new Song*[max_saved_songs];
            playlists = new Playlist*[max_playlists];
        }
        User(std::string name,std::string email, Date birthdate, Gender gender){ //*Constructor con parametros
            name = "";
            email = "";
            birthdate = Date();
            gender = OTHER;
            max_saved_songs = 4;
            max_playlists = 4;
            num_saved_songs = 0;
            num_playlists = 0;
            saved_songs = new Song*[max_saved_songs];
            playlists = new Playlist*[max_playlists];
        }
        ~User() { //*Destructor
            for (int i = 0; i < num_saved_songs; i++) {
                delete saved_songs[i];
            }
            delete[] saved_songs;

            for (int i = 0; i < num_playlists; i++) {
                delete playlists[i];
            }
            delete[] playlists;
        }

        bool addSong(Song* song_to_add){
            //?Miramos si existe en saved_songs
            for (int i = 0; i < num_saved_songs; i++){
                if (saved_songs[i] == song_to_add){
                    return false; //!NO EXISTE
                }
            }

            //?Miramos si existe espacio para añadir la cancion, si no creamos un apoyo con el doble de capacidad, pasamos valores, borramos los datos del oficial y despues le pasamos los datos previos  con el aumento de memoria
            if (num_saved_songs == max_saved_songs){
                Song** new_saved_songs = new Song*[max_saved_songs*2];//*Duplicamos espacio
                for (int i = 0; i < num_saved_songs; i++){
                    new_saved_songs[i] = saved_songs[i];
                }
                delete[] saved_songs;
                saved_songs = new_saved_songs;
                max_saved_songs *= 2;
            }
            
            //?Añadimos cancion
            saved_songs[num_saved_songs] = song_to_add;
            num_saved_songs++;
            return true;
        }

        bool addPlaylist(Playlist* playlist_to_add){
            //*Miramos si esat creada ya la playlist
            for (int i = 0; i < num_playlists; i++){
                if (playlists[i] == playlist_to_add){
                    return false;
                }
            }

            //*Miramos si existe espacio para añadir la playlist, si no utulizaremos el mismo metodo que hay descrito previamente
            if (num_playlists == max_playlists){
                Playlist** new_playlists = new Playlist*(max_playlists*2);

                for (int i = 0; i < num_playlists; i++){
                    new_playlists[i] = playlists[i];
                }
                delete[] playlists;
                playlists = new_playlists;
                max_playlists *= 2;
            }
            
            //*Añadimos cancion
            playlists[num_playlists] = playlist_to_add;
            num_playlists++;
            return true;
        }

        bool deleteSong(Song* song_to_delete){
            for (int i = 0; i < num_saved_songs; i++)
            {
                if(saved_songs[i] == song_to_delete){//*Buscamos la cancion a eliminar, borramos, inicializamos, restamos una canion al contador
                    delete saved_songs[i];
                    saved_songs[i] = nullptr;
                    num_saved_songs--;
                    for (int j = i; j < num_saved_songs; j++) {//*Reorganizamos
                        saved_songs[j] = saved_songs[j+1];
                    }
                    saved_songs[num_saved_songs] = nullptr;//*inicializamos la siguiente posicion
                    return true;//! SE HA BORRADO Y REORGANIZADO
                }
            }
            return false;
        }

        bool deletePlaylist(Playlist* playlist_to_delete){
            for (int i = 0; i < num_playlists; i++)
            {
                if(playlists[i] == playlist_to_delete){//*Buscamos la cancion a eliminar, borramos, inicializamos, restamos una canion al contador
                    delete playlists[i];
                    playlists[i] = nullptr;
                    num_playlists--;
                    for (int j = i; j < num_playlists; j++) {//*Reorganizamos
                        playlists[j] = playlists[j+1];
                    }
                    playlists[num_playlists] = nullptr;//*inicializamos la siguiente posicion
                    return true;//! SE HA BORRADO Y REORGANIZADO
                }
            }
            return false;
        }

        bool createPlaylist(Song** songs, int num_songs, std::string title){
            Playlist* new_playlist = new Playlist(title);//*Creamos una lista nueva de reproduccion

            for (int i = 0; i < num_songs; i++){//*Añadimos las conciones
                new_playlist->addSong(songs[i]);
            }
            addPlaylist(new_playlist);
            return true;
        }

        /**
         * @param Gets_Sets *
         **/

        std::string getName(){ return name; }
        void setName(std::string name){ this->name = name; }

        std::string getEmail(){ return email; }
        void setEmail(std::string email){ this->email = email; }

        Date getBirthdate(){ return birthdate; }
        void setBirthdate(Date birthdate){ this->birthdate = birthdate; }

        Gender getGender(){ return gender; }
        void setGender(Gender gender){ this->gender = gender; }


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
